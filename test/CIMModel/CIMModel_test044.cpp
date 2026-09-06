#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test044)
{
  // Check list attributes with inverse list (ManyToMany)
  // from VisibilityLayer to DiagramObject
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test044.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(6, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_DO1", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("_DO2", model.Objects[1]->getRdfid());
  BOOST_REQUIRE_EQUAL("_DO3", model.Objects[2]->getRdfid());
  BOOST_REQUIRE_EQUAL("_VL1", model.Objects[3]->getRdfid());
  BOOST_REQUIRE_EQUAL("_VL2", model.Objects[4]->getRdfid());
  BOOST_REQUIRE_EQUAL("_VL3", model.Objects[5]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("DiagramObject", obj->debugString());
  const auto* diagramObject1 = dynamic_cast<const CIMPP::DiagramObject*>(obj);
  BOOST_REQUIRE_NE(nullptr, diagramObject1);
  BOOST_REQUIRE_EQUAL("_DO1", diagramObject1->getRdfid());

  obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("DiagramObject", obj->debugString());
  const auto* diagramObject2 = dynamic_cast<const CIMPP::DiagramObject*>(obj);
  BOOST_REQUIRE_NE(nullptr, diagramObject2);
  BOOST_REQUIRE_EQUAL("_DO2", diagramObject2->getRdfid());

  obj = model.Objects[2];
  BOOST_REQUIRE_EQUAL("DiagramObject", obj->debugString());
  const auto* diagramObject3 = dynamic_cast<const CIMPP::DiagramObject*>(obj);
  BOOST_REQUIRE_NE(nullptr, diagramObject3);
  BOOST_REQUIRE_EQUAL("_DO3", diagramObject3->getRdfid());

  obj = model.Objects[3];
  BOOST_REQUIRE_EQUAL("VisibilityLayer", obj->debugString());
  const auto* visibilityLayer1 = dynamic_cast<const CIMPP::VisibilityLayer*>(obj);
  BOOST_REQUIRE_NE(nullptr, visibilityLayer1);
  BOOST_REQUIRE_EQUAL("_VL1", visibilityLayer1->getRdfid());

  obj = model.Objects[4];
  BOOST_REQUIRE_EQUAL("VisibilityLayer", obj->debugString());
  const auto* visibilityLayer2 = dynamic_cast<const CIMPP::VisibilityLayer*>(obj);
  BOOST_REQUIRE_NE(nullptr, visibilityLayer2);
  BOOST_REQUIRE_EQUAL("_VL2", visibilityLayer2->getRdfid());

  obj = model.Objects[5];
  BOOST_REQUIRE_EQUAL("VisibilityLayer", obj->debugString());
  const auto* visibilityLayer3 = dynamic_cast<const CIMPP::VisibilityLayer*>(obj);
  BOOST_REQUIRE_NE(nullptr, visibilityLayer3);
  BOOST_REQUIRE_EQUAL("_VL3", visibilityLayer3->getRdfid());

  {
    const auto& visibilityLayers = diagramObject1->VisibilityLayers;
    BOOST_REQUIRE_EQUAL(2, visibilityLayers.size());
    auto it = std::find(visibilityLayers.begin(), visibilityLayers.end(), visibilityLayer1);
    BOOST_REQUIRE(it != visibilityLayers.end());
    it = std::find(visibilityLayers.begin(), visibilityLayers.end(), visibilityLayer3);
    BOOST_REQUIRE(it != visibilityLayers.end());
  }

  {
    const auto& visibilityLayers = diagramObject2->VisibilityLayers;
    BOOST_REQUIRE_EQUAL(2, visibilityLayers.size());
    auto it = std::find(visibilityLayers.begin(), visibilityLayers.end(), visibilityLayer1);
    BOOST_REQUIRE(it != visibilityLayers.end());
    it = std::find(visibilityLayers.begin(), visibilityLayers.end(), visibilityLayer2);
    BOOST_REQUIRE(it != visibilityLayers.end());
  }

  {
    const auto& visibilityLayers = diagramObject3->VisibilityLayers;
    BOOST_REQUIRE_EQUAL(2, visibilityLayers.size());
    auto it = std::find(visibilityLayers.begin(), visibilityLayers.end(), visibilityLayer2);
    BOOST_REQUIRE(it != visibilityLayers.end());
    it = std::find(visibilityLayers.begin(), visibilityLayers.end(), visibilityLayer3);
    BOOST_REQUIRE(it != visibilityLayers.end());
  }

  {
    const auto& visibleObjects = visibilityLayer1->VisibleObjects;
    BOOST_REQUIRE_EQUAL(2, visibleObjects.size());
    auto it = std::find(visibleObjects.begin(), visibleObjects.end(), diagramObject1);
    BOOST_REQUIRE(it != visibleObjects.end());
    it = std::find(visibleObjects.begin(), visibleObjects.end(), diagramObject2);
    BOOST_REQUIRE(it != visibleObjects.end());
  }

  {
    const auto& visibleObjects = visibilityLayer2->VisibleObjects;
    BOOST_REQUIRE_EQUAL(2, visibleObjects.size());
    auto it = std::find(visibleObjects.begin(), visibleObjects.end(), diagramObject2);
    BOOST_REQUIRE(it != visibleObjects.end());
    it = std::find(visibleObjects.begin(), visibleObjects.end(), diagramObject3);
    BOOST_REQUIRE(it != visibleObjects.end());
  }

  {
    const auto& visibleObjects = visibilityLayer3->VisibleObjects;
    BOOST_REQUIRE_EQUAL(2, visibleObjects.size());
    auto it = std::find(visibleObjects.begin(), visibleObjects.end(), diagramObject1);
    BOOST_REQUIRE(it != visibleObjects.end());
    it = std::find(visibleObjects.begin(), visibleObjects.end(), diagramObject3);
    BOOST_REQUIRE(it != visibleObjects.end());
  }
}
