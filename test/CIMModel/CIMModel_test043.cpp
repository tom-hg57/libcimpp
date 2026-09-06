#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test043)
{
  // Check handling links on not used side to not existing objects
  // (causing an error log entry)
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test043.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(1, model.Objects.size());

  BOOST_REQUIRE_EQUAL("BaseVoltage.20", model.Objects[0]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("BaseVoltage", obj->debugString());
  const auto* baseVoltage = dynamic_cast<const CIMPP::BaseVoltage*>(obj);
  BOOST_REQUIRE_NE(nullptr, baseVoltage);
  BOOST_REQUIRE_EQUAL("BaseVoltage.20", baseVoltage->getRdfid());

  const auto& voltageLevels = baseVoltage->VoltageLevel;
  BOOST_REQUIRE_EQUAL(0, voltageLevels.size());
}
