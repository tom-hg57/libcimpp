/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Switch.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "SwitchSchedule.hpp"
#include "Boolean.hpp"
#include "Boolean.hpp"
#include "CurrentFlow.hpp"
#include "Boolean.hpp"

using namespace CIMPP;

Switch::Switch() {};
Switch::~Switch() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Switch.SwitchSchedules", { CGMESProfile::EQ, } },
	{ "cim:Switch.normalOpen", { CGMESProfile::EQ, } },
	{ "cim:Switch.open", { CGMESProfile::SSH, } },
	{ "cim:Switch.ratedCurrent", { CGMESProfile::EQ, } },
	{ "cim:Switch.retained", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
Switch::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Switch::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ConductingEquipment::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_Switch_normalOpen(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1))
	{
		buffer >> element->normalOpen;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Switch_open(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1))
	{
		buffer >> element->open;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Switch_ratedCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1))
	{
		buffer >> element->ratedCurrent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_Switch_retained(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1))
	{
		buffer >> element->retained;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_SwitchSchedule_Switch(BaseClass*, BaseClass*);
bool assign_Switch_SwitchSchedules(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Switch* element = dynamic_cast<Switch*>(BaseClass_ptr1);
	SwitchSchedule* element2 = dynamic_cast<SwitchSchedule*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->SwitchSchedules.begin(), element->SwitchSchedules.end(), element2) == element->SwitchSchedules.end())
		{
			element->SwitchSchedules.push_back(element2);
			return assign_SwitchSchedule_Switch(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_Switch_normalOpen(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const Switch* element = dynamic_cast<const Switch*>(BaseClass_ptr1))
	{
		buffer << element->normalOpen;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Switch_open(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const Switch* element = dynamic_cast<const Switch*>(BaseClass_ptr1))
	{
		buffer << element->open;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Switch_ratedCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const Switch* element = dynamic_cast<const Switch*>(BaseClass_ptr1))
	{
		buffer << element->ratedCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Switch_retained(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const Switch* element = dynamic_cast<const Switch*>(BaseClass_ptr1))
	{
		buffer << element->retained;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char Switch::debugName[] = "Switch";
const char* Switch::debugString() const
{
	return Switch::debugName;
}

void Switch::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:Switch"), &Switch_factory));
}

void Switch::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Switch.normalOpen"), &assign_Switch_normalOpen));
	assign_map.insert(std::make_pair(std::string("cim:Switch.open"), &assign_Switch_open));
	assign_map.insert(std::make_pair(std::string("cim:Switch.ratedCurrent"), &assign_Switch_ratedCurrent));
	assign_map.insert(std::make_pair(std::string("cim:Switch.retained"), &assign_Switch_retained));
}

void Switch::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:Switch.SwitchSchedules"), &assign_Switch_SwitchSchedules));
}

void Switch::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Switch.normalOpen", &get_Switch_normalOpen);
	get_map.emplace("cim:Switch.open", &get_Switch_open);
	get_map.emplace("cim:Switch.ratedCurrent", &get_Switch_ratedCurrent);
	get_map.emplace("cim:Switch.retained", &get_Switch_retained);
}

void Switch::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ConductingEquipment::addClassGetFnsToMap(get_map);
}

void Switch::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ConductingEquipment::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Switch::declare()
{
	return BaseClassDefiner(Switch::addConstructToMap, Switch::addPrimitiveAssignFnsToMap, Switch::addClassAssignFnsToMap, Switch::debugName);
}

namespace CIMPP
{
	BaseClass* Switch_factory()
	{
		return new Switch;
	}
}