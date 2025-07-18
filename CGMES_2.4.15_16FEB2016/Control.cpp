/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Control.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PowerSystemResource.hpp"

using namespace CIMPP;

Control::Control() : PowerSystemResource(nullptr) {}
Control::~Control() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Control.PowerSystemResource", { CGMESProfile::EQ, } },
	{ "cim:Control.controlType", { CGMESProfile::EQ, } },
	{ "cim:Control.operationInProgress", { CGMESProfile::EQ, } },
	{ "cim:Control.timeStamp", { CGMESProfile::EQ, } },
	{ "cim:Control.unitMultiplier", { CGMESProfile::EQ, } },
	{ "cim:Control.unitSymbol", { CGMESProfile::EQ, } },
};

std::list<CGMESProfile>
Control::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Control::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_PowerSystemResource_Controls(BaseClass*, BaseClass*);
bool assign_Control_PowerSystemResource(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	Control* element = dynamic_cast<Control*>(BaseClass_ptr1);
	PowerSystemResource* element2 = dynamic_cast<PowerSystemResource*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->PowerSystemResource != element2)
		{
			element->PowerSystemResource = element2;
			return assign_PowerSystemResource_Controls(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_Control_controlType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Control* element = dynamic_cast<Control*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->controlType = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Control_operationInProgress(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Control* element = dynamic_cast<Control*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->operationInProgress;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Control_timeStamp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Control* element = dynamic_cast<Control*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		element->timeStamp = buffer.str();
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Control_unitMultiplier(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Control* element = dynamic_cast<Control*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->unitMultiplier;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Control_unitSymbol(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Control* element = dynamic_cast<Control*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->unitSymbol;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Control_PowerSystemResource(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const Control* element = dynamic_cast<const Control*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->PowerSystemResource != 0)
		{
			BaseClass_list.push_back(element->PowerSystemResource);
			return true;
		}
	}
	return false;
}

bool get_Control_controlType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Control* element = dynamic_cast<const Control*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->controlType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Control_operationInProgress(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Control* element = dynamic_cast<const Control*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->operationInProgress;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Control_timeStamp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Control* element = dynamic_cast<const Control*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->timeStamp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Control_unitMultiplier(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Control* element = dynamic_cast<const Control*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->unitMultiplier;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Control_unitSymbol(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Control* element = dynamic_cast<const Control*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->unitSymbol;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Control::debugName[] = "Control";
const char* Control::debugString() const
{
	return Control::debugName;
}

void Control::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Control", &Control_factory);
}

void Control::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:Control.controlType", &assign_Control_controlType);
	assign_map.emplace("cim:Control.operationInProgress", &assign_Control_operationInProgress);
	assign_map.emplace("cim:Control.timeStamp", &assign_Control_timeStamp);
	assign_map.emplace("cim:Control.unitMultiplier", &assign_Control_unitMultiplier);
	assign_map.emplace("cim:Control.unitSymbol", &assign_Control_unitSymbol);
}

void Control::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:Control.PowerSystemResource", &assign_Control_PowerSystemResource);
}

void Control::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Control.controlType", &get_Control_controlType);
	get_map.emplace("cim:Control.operationInProgress", &get_Control_operationInProgress);
	get_map.emplace("cim:Control.timeStamp", &get_Control_timeStamp);
}

void Control::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:Control.PowerSystemResource", &get_Control_PowerSystemResource);
}

void Control::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:Control.unitMultiplier", &get_Control_unitMultiplier);
	get_map.emplace("cim:Control.unitSymbol", &get_Control_unitSymbol);
}

const BaseClassDefiner Control::declare()
{
	return BaseClassDefiner(Control::addConstructToMap, Control::addPrimitiveAssignFnsToMap, Control::addClassAssignFnsToMap, Control::debugName);
}

namespace CIMPP
{
	BaseClass* Control_factory()
	{
		return new Control;
	}
}
