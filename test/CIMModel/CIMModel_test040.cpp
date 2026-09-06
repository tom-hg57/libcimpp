#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test040)
{
  // Check handling link lists with links to not existing objects
  // (causing an error log entry)
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test040.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(1, model.Objects.size());

  BOOST_REQUIRE_EQUAL("TopologicalIsland.N", model.Objects[0]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("TopologicalIsland", obj->debugString());
  const auto* topologicalIsland = dynamic_cast<const CIMPP::TopologicalIsland*>(obj);
  BOOST_REQUIRE_NE(nullptr, topologicalIsland);
  BOOST_REQUIRE_EQUAL("TopologicalIsland.N", topologicalIsland->getRdfid());

  const auto& topologicalNodes = topologicalIsland->TopologicalNodes;
  BOOST_REQUIRE_EQUAL(0, topologicalNodes.size());
}
