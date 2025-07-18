/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindProtectionIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType1or2IEC.hpp"
#include "WindTurbineType3or4IEC.hpp"

using namespace CIMPP;

WindProtectionIEC::WindProtectionIEC() : WindTurbineType1or2IEC(nullptr), WindTurbineType3or4IEC(nullptr) {}
WindProtectionIEC::~WindProtectionIEC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindProtectionIEC.WindTurbineType1or2IEC", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.WindTurbineType3or4IEC", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.fover", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.funder", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.tfover", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.tfunder", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.tuover", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.tuunder", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.uover", { CGMESProfile::DY, } },
	{ "cim:WindProtectionIEC.uunder", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindProtectionIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindProtectionIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_WindTurbineType1or2IEC_WindProtectionIEC(BaseClass*, BaseClass*);
bool assign_WindProtectionIEC_WindTurbineType1or2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	WindTurbineType1or2IEC* element2 = dynamic_cast<WindTurbineType1or2IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType1or2IEC != element2)
		{
			element->WindTurbineType1or2IEC = element2;
			return assign_WindTurbineType1or2IEC_WindProtectionIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindTurbineType3or4IEC_WindProtectionIEC(BaseClass*, BaseClass*);
bool assign_WindProtectionIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	WindTurbineType3or4IEC* element2 = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4IEC != element2)
		{
			element->WindTurbineType3or4IEC = element2;
			return assign_WindTurbineType3or4IEC_WindProtectionIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindProtectionIEC_fover(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->fover;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_funder(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->funder;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_tfover(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tfover;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_tfunder(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tfunder;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_tuover(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tuover;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_tuunder(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tuunder;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_uover(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uover;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindProtectionIEC_uunder(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindProtectionIEC* element = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uunder;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}



bool get_WindProtectionIEC_fover(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->fover;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_funder(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->funder;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_tfover(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tfover;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_tfunder(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tfunder;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_tuover(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tuover;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_tuunder(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tuunder;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_uover(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uover;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindProtectionIEC_uunder(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindProtectionIEC* element = dynamic_cast<const WindProtectionIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uunder;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindProtectionIEC::debugName[] = "WindProtectionIEC";
const char* WindProtectionIEC::debugString() const
{
	return WindProtectionIEC::debugName;
}

void WindProtectionIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindProtectionIEC", &WindProtectionIEC_factory);
}

void WindProtectionIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:WindProtectionIEC.fover", &assign_WindProtectionIEC_fover);
	assign_map.emplace("cim:WindProtectionIEC.funder", &assign_WindProtectionIEC_funder);
	assign_map.emplace("cim:WindProtectionIEC.tfover", &assign_WindProtectionIEC_tfover);
	assign_map.emplace("cim:WindProtectionIEC.tfunder", &assign_WindProtectionIEC_tfunder);
	assign_map.emplace("cim:WindProtectionIEC.tuover", &assign_WindProtectionIEC_tuover);
	assign_map.emplace("cim:WindProtectionIEC.tuunder", &assign_WindProtectionIEC_tuunder);
	assign_map.emplace("cim:WindProtectionIEC.uover", &assign_WindProtectionIEC_uover);
	assign_map.emplace("cim:WindProtectionIEC.uunder", &assign_WindProtectionIEC_uunder);
}

void WindProtectionIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindProtectionIEC.WindTurbineType1or2IEC", &assign_WindProtectionIEC_WindTurbineType1or2IEC);
	assign_map.emplace("cim:WindProtectionIEC.WindTurbineType3or4IEC", &assign_WindProtectionIEC_WindTurbineType3or4IEC);
}

void WindProtectionIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindProtectionIEC.fover", &get_WindProtectionIEC_fover);
	get_map.emplace("cim:WindProtectionIEC.funder", &get_WindProtectionIEC_funder);
	get_map.emplace("cim:WindProtectionIEC.tfover", &get_WindProtectionIEC_tfover);
	get_map.emplace("cim:WindProtectionIEC.tfunder", &get_WindProtectionIEC_tfunder);
	get_map.emplace("cim:WindProtectionIEC.tuover", &get_WindProtectionIEC_tuover);
	get_map.emplace("cim:WindProtectionIEC.tuunder", &get_WindProtectionIEC_tuunder);
	get_map.emplace("cim:WindProtectionIEC.uover", &get_WindProtectionIEC_uover);
	get_map.emplace("cim:WindProtectionIEC.uunder", &get_WindProtectionIEC_uunder);
}

void WindProtectionIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindProtectionIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindProtectionIEC::declare()
{
	return BaseClassDefiner(WindProtectionIEC::addConstructToMap, WindProtectionIEC::addPrimitiveAssignFnsToMap, WindProtectionIEC::addClassAssignFnsToMap, WindProtectionIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindProtectionIEC_factory()
	{
		return new WindProtectionIEC;
	}
}
