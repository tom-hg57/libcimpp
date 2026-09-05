#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test041)
{
  // Check handling link lists in which the last links to not existing object
  // (causing an error log entry)
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test041.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("TopologicalIsland.N", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("N0", model.Objects[1]->getRdfid());

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
  BOOST_REQUIRE_EQUAL(7, lines.size());

  BOOST_REQUIRE_EQUAL("  <cim:TopologicalIsland rdf:ID='TopologicalIsland.N'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:TopologicalIsland.TopologicalNodes rdf:resource='#N0' />", lines[1]);
  BOOST_REQUIRE_EQUAL("  </cim:TopologicalIsland>", lines[2]);
  BOOST_REQUIRE_EQUAL("  <cim:TopologicalNode rdf:ID='N0'>", lines[3]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>N0</cim:IdentifiedObject.name>", lines[4]);
  BOOST_REQUIRE_EQUAL("  </cim:TopologicalNode>", lines[5]);
}
