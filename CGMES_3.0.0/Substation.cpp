/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Substation.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "DCConverterUnit.hpp"
#include "SubGeographicalRegion.hpp"
#include "VoltageLevel.hpp"

using namespace CIMPP;

Substation::Substation() : Region(nullptr) {}
Substation::~Substation() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::EQBD,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Substation.DCConverterUnit", { CGMESProfile::EQ, } },
	{ "cim:Substation.Region", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
	{ "cim:Substation.VoltageLevels", { CGMESProfile::EQ, CGMESProfile::EQBD, } },
};

std::list<CGMESProfile>
Substation::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Substation::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = EquipmentContainer::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_DCConverterUnit_Substation(BaseClass*, BaseClass*);
bool assign_Substation_DCConverterUnit(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Substation* element = dynamic_cast<Substation*>(BaseClass_ptr1);
	DCConverterUnit* element2 = dynamic_cast<DCConverterUnit*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->DCConverterUnit.begin(), element->DCConverterUnit.end(), element2) == element->DCConverterUnit.end())
		{
			element->DCConverterUnit.push_back(element2);
			return assign_DCConverterUnit_Substation(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_SubGeographicalRegion_Substations(BaseClass*, BaseClass*);
bool assign_Substation_Region(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Substation* element = dynamic_cast<Substation*>(BaseClass_ptr1);
	SubGeographicalRegion* element2 = dynamic_cast<SubGeographicalRegion*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->Region != element2)
		{
			element->Region = element2;
			return assign_SubGeographicalRegion_Substations(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_VoltageLevel_Substation(BaseClass*, BaseClass*);
bool assign_Substation_VoltageLevels(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Substation* element = dynamic_cast<Substation*>(BaseClass_ptr1);
	VoltageLevel* element2 = dynamic_cast<VoltageLevel*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->VoltageLevels.begin(), element->VoltageLevels.end(), element2) == element->VoltageLevels.end())
		{
			element->VoltageLevels.push_back(element2);
			return assign_VoltageLevel_Substation(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}


bool get_Substation_Region(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Substation* element = dynamic_cast<const Substation*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->Region != 0)
		{
			BaseClass_list.push_back(element->Region);
			return true;
		}
	}
	return false;
}


const char Substation::debugName[] = "Substation";
const char* Substation::debugString() const
{
	return Substation::debugName;
}

void Substation::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Substation", &Substation_factory);
}

void Substation::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void Substation::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:Substation.DCConverterUnit", &assign_Substation_DCConverterUnit);
	assign_map.emplace("cim:Substation.Region", &assign_Substation_Region);
	assign_map.emplace("cim:Substation.VoltageLevels", &assign_Substation_VoltageLevels);
}

void Substation::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addPrimitiveGetFnsToMap(get_map);
}

void Substation::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	EquipmentContainer::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:Substation.Region", &get_Substation_Region);
}

void Substation::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	EquipmentContainer::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Substation::declare()
{
	return BaseClassDefiner(Substation::addConstructToMap, Substation::addPrimitiveAssignFnsToMap, Substation::addClassAssignFnsToMap, Substation::debugName);
}

namespace CIMPP
{
	BaseClass* Substation_factory()
	{
		return new Substation;
	}
}
