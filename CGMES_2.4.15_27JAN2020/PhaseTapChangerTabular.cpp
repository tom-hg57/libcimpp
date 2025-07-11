/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PhaseTapChangerTabular.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PhaseTapChangerTable.hpp"

using namespace CIMPP;

PhaseTapChangerTabular::PhaseTapChangerTabular() : PhaseTapChangerTable(nullptr) {}
PhaseTapChangerTabular::~PhaseTapChangerTabular() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:PhaseTapChangerTabular.PhaseTapChangerTable", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
PhaseTapChangerTabular::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
PhaseTapChangerTabular::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PhaseTapChanger::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_PhaseTapChangerTable_PhaseTapChangerTabular(BaseClass*, BaseClass*);
bool assign_PhaseTapChangerTabular_PhaseTapChangerTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	PhaseTapChangerTabular* element = dynamic_cast<PhaseTapChangerTabular*>(BaseClass_ptr1);
	PhaseTapChangerTable* element2 = dynamic_cast<PhaseTapChangerTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PhaseTapChangerTable != element2)
		{
			element->PhaseTapChangerTable = element2;
			return assign_PhaseTapChangerTable_PhaseTapChangerTabular(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_PhaseTapChangerTabular_PhaseTapChangerTable(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const PhaseTapChangerTabular* element = dynamic_cast<const PhaseTapChangerTabular*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PhaseTapChangerTable != 0)
		{
			BaseClass_list.push_back(element->PhaseTapChangerTable);
			return true;
		}
	}
	return false;
}

const char PhaseTapChangerTabular::debugName[] = "PhaseTapChangerTabular";
const char* PhaseTapChangerTabular::debugString() const
{
	return PhaseTapChangerTabular::debugName;
}

void PhaseTapChangerTabular::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:PhaseTapChangerTabular", &PhaseTapChangerTabular_factory);
}

void PhaseTapChangerTabular::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void PhaseTapChangerTabular::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:PhaseTapChangerTabular.PhaseTapChangerTable", &assign_PhaseTapChangerTabular_PhaseTapChangerTable);
}

void PhaseTapChangerTabular::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChanger::addPrimitiveGetFnsToMap(get_map);
}

void PhaseTapChangerTabular::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PhaseTapChanger::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:PhaseTapChangerTabular.PhaseTapChangerTable", &get_PhaseTapChangerTabular_PhaseTapChangerTable);
}

void PhaseTapChangerTabular::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PhaseTapChanger::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner PhaseTapChangerTabular::declare()
{
	return BaseClassDefiner(PhaseTapChangerTabular::addConstructToMap, PhaseTapChangerTabular::addPrimitiveAssignFnsToMap, PhaseTapChangerTabular::addClassAssignFnsToMap, PhaseTapChangerTabular::debugName);
}

namespace CIMPP
{
	BaseClass* PhaseTapChangerTabular_factory()
	{
		return new PhaseTapChangerTabular;
	}
}
