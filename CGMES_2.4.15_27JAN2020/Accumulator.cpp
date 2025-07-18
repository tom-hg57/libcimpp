/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Accumulator.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AccumulatorLimitSet.hpp"
#include "AccumulatorValue.hpp"

using namespace CIMPP;

Accumulator::Accumulator() {}
Accumulator::~Accumulator() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Accumulator.AccumulatorValues", { CGMESProfile::EQ, } },
	{ "cim:Accumulator.LimitSets", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
Accumulator::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Accumulator::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = Measurement::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_AccumulatorValue_Accumulator(BaseClass*, BaseClass*);
bool assign_Accumulator_AccumulatorValues(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Accumulator* element = dynamic_cast<Accumulator*>(BaseClass_ptr1);
	AccumulatorValue* element2 = dynamic_cast<AccumulatorValue*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->AccumulatorValues.begin(), element->AccumulatorValues.end(), element2) == element->AccumulatorValues.end())
		{
			element->AccumulatorValues.push_back(element2);
			return assign_AccumulatorValue_Accumulator(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AccumulatorLimitSet_Measurements(BaseClass*, BaseClass*);
bool assign_Accumulator_LimitSets(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Accumulator* element = dynamic_cast<Accumulator*>(BaseClass_ptr1);
	AccumulatorLimitSet* element2 = dynamic_cast<AccumulatorLimitSet*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->LimitSets.begin(), element->LimitSets.end(), element2) == element->LimitSets.end())
		{
			element->LimitSets.push_back(element2);
			return assign_AccumulatorLimitSet_Measurements(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}



const char Accumulator::debugName[] = "Accumulator";
const char* Accumulator::debugString() const
{
	return Accumulator::debugName;
}

void Accumulator::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Accumulator", &Accumulator_factory);
}

void Accumulator::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Accumulator::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:Accumulator.AccumulatorValues", &assign_Accumulator_AccumulatorValues);
	assign_map.emplace("cim:Accumulator.LimitSets", &assign_Accumulator_LimitSets);
}

void Accumulator::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Measurement::addPrimitiveGetFnsToMap(get_map);
}

void Accumulator::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	Measurement::addClassGetFnsToMap(get_map);
}

void Accumulator::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	Measurement::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Accumulator::declare()
{
	return BaseClassDefiner(Accumulator::addConstructToMap, Accumulator::addPrimitiveAssignFnsToMap, Accumulator::addClassAssignFnsToMap, Accumulator::debugName);
}

namespace CIMPP
{
	BaseClass* Accumulator_factory()
	{
		return new Accumulator;
	}
}
