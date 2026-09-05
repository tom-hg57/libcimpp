#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test042)
{
  // Check handling link lists in which the first links to not existing object
  // (causing an error log entry)
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test042.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("TopologicalIsland.N", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("N1", model.Objects[1]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("TopologicalIsland", obj->debugString());
  const auto* topologicalIsland = dynamic_cast<const CIMPP::TopologicalIsland*>(obj);
  BOOST_REQUIRE_NE(nullptr, topologicalIsland);
  BOOST_REQUIRE_EQUAL("TopologicalIsland.N", topologicalIsland->getRdfid());

  obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("TopologicalNode", obj->debugString());
  const auto* topologicalNode2 = dynamic_cast<const CIMPP::TopologicalNode*>(obj);
  BOOST_REQUIRE_NE(nullptr, topologicalNode2);
  BOOST_REQUIRE_EQUAL("N1", topologicalNode2->getRdfid());

  const auto& topologicalNodes = topologicalIsland->TopologicalNodes;
  BOOST_REQUIRE_EQUAL(1, topologicalNodes.size());

  auto it = std::find(topologicalNodes.begin(), topologicalNodes.end(), topologicalNode2);
  BOOST_REQUIRE(it != topologicalNodes.end());

  BOOST_REQUIRE_EQUAL(topologicalIsland, topologicalNode2->TopologicalIsland);
}
