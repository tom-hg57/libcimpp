#include <boost/test/unit_test.hpp>

#include <limits>
#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test048)
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

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("BaseVoltage", obj->debugString());
  const auto* baseVoltage = dynamic_cast<const CIMPP::BaseVoltage*>(obj);
  BOOST_REQUIRE_NE(nullptr, baseVoltage);
  BOOST_REQUIRE_EQUAL("_BV1", baseVoltage->getRdfid());
  BOOST_REQUIRE_EQUAL(baseVoltage, model.Objects[0]);
  BOOST_REQUIRE(!baseVoltage->nominalVoltage.initialized);

  obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("BaseVoltage", obj->debugString());
  baseVoltage = dynamic_cast<const CIMPP::BaseVoltage*>(obj);
  BOOST_REQUIRE_NE(nullptr, baseVoltage);
  BOOST_REQUIRE_EQUAL("_BV2", baseVoltage->getRdfid());
  BOOST_REQUIRE_EQUAL(baseVoltage, model.Objects[1]);
  BOOST_REQUIRE(!baseVoltage->nominalVoltage.initialized);

  obj = model.Objects[2];
  BOOST_REQUIRE_EQUAL("BaseVoltage", obj->debugString());
  baseVoltage = dynamic_cast<const CIMPP::BaseVoltage*>(obj);
  BOOST_REQUIRE_NE(nullptr, baseVoltage);
  BOOST_REQUIRE_EQUAL("_BV3", baseVoltage->getRdfid());
  BOOST_REQUIRE_EQUAL(baseVoltage, model.Objects[2]);
  BOOST_REQUIRE(!baseVoltage->nominalVoltage.initialized);

  obj = model.Objects[3];
  BOOST_REQUIRE_EQUAL("BaseVoltage", obj->debugString());
  baseVoltage = dynamic_cast<const CIMPP::BaseVoltage*>(obj);
  BOOST_REQUIRE_NE(nullptr, baseVoltage);
  BOOST_REQUIRE_EQUAL("_BV4", baseVoltage->getRdfid());
  BOOST_REQUIRE_EQUAL(baseVoltage, model.Objects[3]);
  BOOST_REQUIRE(!baseVoltage->nominalVoltage.initialized);
}
