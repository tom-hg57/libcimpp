#include <boost/test/unit_test.hpp>

#include <cmath>
#include <limits>
#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test048)
{
  // Check handling of not finite values (NaN, infinity, negative infinity)
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test048.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(4, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_BV1", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("_BV2", model.Objects[1]->getRdfid());
  BOOST_REQUIRE_EQUAL("_BV3", model.Objects[2]->getRdfid());
  BOOST_REQUIRE_EQUAL("_BV4", model.Objects[3]->getRdfid());

  auto* baseVoltage = dynamic_cast<CIMPP::BaseVoltage*>(model.Objects[0]);
  BOOST_REQUIRE(!baseVoltage->nominalVoltage.initialized);
  baseVoltage->nominalVoltage = -std::numeric_limits<long double>::infinity();
  BOOST_REQUIRE(baseVoltage->nominalVoltage.initialized);
  BOOST_REQUIRE(!std::isfinite(baseVoltage->nominalVoltage.value));

  baseVoltage = dynamic_cast<CIMPP::BaseVoltage*>(model.Objects[1]);
  BOOST_REQUIRE(!baseVoltage->nominalVoltage.initialized);
  baseVoltage->nominalVoltage = std::numeric_limits<long double>::infinity();
  BOOST_REQUIRE(baseVoltage->nominalVoltage.initialized);
  BOOST_REQUIRE(!std::isfinite(baseVoltage->nominalVoltage.value));

  baseVoltage = dynamic_cast<CIMPP::BaseVoltage*>(model.Objects[2]);
  BOOST_REQUIRE(!baseVoltage->nominalVoltage.initialized);
  baseVoltage->nominalVoltage = std::numeric_limits<long double>::quiet_NaN();
  BOOST_REQUIRE(baseVoltage->nominalVoltage.initialized);
  BOOST_REQUIRE(!std::isfinite(baseVoltage->nominalVoltage.value));

  baseVoltage = dynamic_cast<CIMPP::BaseVoltage*>(model.Objects[3]);
  BOOST_REQUIRE(!baseVoltage->nominalVoltage.initialized);
  baseVoltage->nominalVoltage.value = 42.0;
  BOOST_REQUIRE(!baseVoltage->nominalVoltage.initialized);
  BOOST_REQUIRE(std::isfinite(baseVoltage->nominalVoltage.value));

  std::stringstream rdf;
  CIMWriter::writeCim(rdf, model.Objects);
  CIMWriter::writeFile("test.xml", model.Objects);

  std::vector<std::string> lines;
  std::string line;
  for (int idx = 0; idx < 2; ++idx) // Skip header
  {
    std::getline(rdf, line);
  }
  while (std::getline(rdf, line))
  {
    lines.push_back(line);
  }
  BOOST_REQUIRE_EQUAL(9, lines.size());

  BOOST_REQUIRE_EQUAL("  <cim:BaseVoltage rdf:ID='_BV1'>", lines[0]);
  BOOST_REQUIRE_EQUAL("  </cim:BaseVoltage>", lines[1]);
  BOOST_REQUIRE_EQUAL("  <cim:BaseVoltage rdf:ID='_BV2'>", lines[2]);
  BOOST_REQUIRE_EQUAL("  </cim:BaseVoltage>", lines[3]);
  BOOST_REQUIRE_EQUAL("  <cim:BaseVoltage rdf:ID='_BV3'>", lines[4]);
  BOOST_REQUIRE_EQUAL("  </cim:BaseVoltage>", lines[5]);
  BOOST_REQUIRE_EQUAL("  <cim:BaseVoltage rdf:ID='_BV4'>", lines[6]);
  BOOST_REQUIRE_EQUAL("  </cim:BaseVoltage>", lines[7]);
}
