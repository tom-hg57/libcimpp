/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContRotorRIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindDynamicsLookupTable.hpp"
#include "WindGenTurbineType2IEC.hpp"
#include "PU.hpp"
#include "Simple_Float.hpp"
#include "Simple_Float.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"

using namespace CIMPP;

WindContRotorRIEC::WindContRotorRIEC() : WindGenTurbineType2IEC(nullptr) {};
WindContRotorRIEC::~WindContRotorRIEC() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindContRotorRIEC.WindDynamicsLookupTable", { CGMESProfile::DY, } },
	{ "cim:WindContRotorRIEC.WindGenTurbineType2IEC", { CGMESProfile::DY, } },
	{ "cim:WindContRotorRIEC.kirr", { CGMESProfile::DY, } },
	{ "cim:WindContRotorRIEC.komegafilt", { CGMESProfile::DY, } },
	{ "cim:WindContRotorRIEC.kpfilt", { CGMESProfile::DY, } },
	{ "cim:WindContRotorRIEC.kprr", { CGMESProfile::DY, } },
	{ "cim:WindContRotorRIEC.rmax", { CGMESProfile::DY, } },
	{ "cim:WindContRotorRIEC.rmin", { CGMESProfile::DY, } },
	{ "cim:WindContRotorRIEC.tomegafilt", { CGMESProfile::DY, } },
	{ "cim:WindContRotorRIEC.tpfilt", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindContRotorRIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindContRotorRIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_WindContRotorRIEC_kirr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kirr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContRotorRIEC_komegafilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer >> element->komegafilt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContRotorRIEC_kpfilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kpfilt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContRotorRIEC_kprr(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer >> element->kprr;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContRotorRIEC_rmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer >> element->rmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContRotorRIEC_rmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer >> element->rmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContRotorRIEC_tomegafilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tomegafilt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_WindContRotorRIEC_tpfilt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer >> element->tpfilt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_WindDynamicsLookupTable_WindContRotorRIEC(BaseClass*, BaseClass*);
bool assign_WindContRotorRIEC_WindDynamicsLookupTable(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1);
	WindDynamicsLookupTable* element2 = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (std::find(element->WindDynamicsLookupTable.begin(), element->WindDynamicsLookupTable.end(), element2) == element->WindDynamicsLookupTable.end())
		{
			element->WindDynamicsLookupTable.push_back(element2);
			return assign_WindDynamicsLookupTable_WindContRotorRIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}
bool assign_WindGenTurbineType2IEC_WindContRotorRIEC(BaseClass*, BaseClass*);
bool assign_WindContRotorRIEC_WindGenTurbineType2IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContRotorRIEC* element = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr1);
	WindGenTurbineType2IEC* element2 = dynamic_cast<WindGenTurbineType2IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenTurbineType2IEC != element2)
		{
			element->WindGenTurbineType2IEC = element2;
			return assign_WindGenTurbineType2IEC_WindContRotorRIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_WindContRotorRIEC_kirr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer << element->kirr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_komegafilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer << element->komegafilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_kpfilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer << element->kpfilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_kprr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer << element->kprr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_rmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer << element->rmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_rmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer << element->rmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_tomegafilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer << element->tomegafilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContRotorRIEC_tpfilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const WindContRotorRIEC* element = dynamic_cast<const WindContRotorRIEC*>(BaseClass_ptr1))
	{
		buffer << element->tpfilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char WindContRotorRIEC::debugName[] = "WindContRotorRIEC";
const char* WindContRotorRIEC::debugString() const
{
	return WindContRotorRIEC::debugName;
}

void WindContRotorRIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:WindContRotorRIEC"), &WindContRotorRIEC_factory));
}

void WindContRotorRIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContRotorRIEC.kirr"), &assign_WindContRotorRIEC_kirr));
	assign_map.insert(std::make_pair(std::string("cim:WindContRotorRIEC.komegafilt"), &assign_WindContRotorRIEC_komegafilt));
	assign_map.insert(std::make_pair(std::string("cim:WindContRotorRIEC.kpfilt"), &assign_WindContRotorRIEC_kpfilt));
	assign_map.insert(std::make_pair(std::string("cim:WindContRotorRIEC.kprr"), &assign_WindContRotorRIEC_kprr));
	assign_map.insert(std::make_pair(std::string("cim:WindContRotorRIEC.rmax"), &assign_WindContRotorRIEC_rmax));
	assign_map.insert(std::make_pair(std::string("cim:WindContRotorRIEC.rmin"), &assign_WindContRotorRIEC_rmin));
	assign_map.insert(std::make_pair(std::string("cim:WindContRotorRIEC.tomegafilt"), &assign_WindContRotorRIEC_tomegafilt));
	assign_map.insert(std::make_pair(std::string("cim:WindContRotorRIEC.tpfilt"), &assign_WindContRotorRIEC_tpfilt));
}

void WindContRotorRIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:WindContRotorRIEC.WindDynamicsLookupTable"), &assign_WindContRotorRIEC_WindDynamicsLookupTable));
	assign_map.insert(std::make_pair(std::string("cim:WindContRotorRIEC.WindGenTurbineType2IEC"), &assign_WindContRotorRIEC_WindGenTurbineType2IEC));
}

void WindContRotorRIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindContRotorRIEC.kirr", &get_WindContRotorRIEC_kirr);
	get_map.emplace("cim:WindContRotorRIEC.komegafilt", &get_WindContRotorRIEC_komegafilt);
	get_map.emplace("cim:WindContRotorRIEC.kpfilt", &get_WindContRotorRIEC_kpfilt);
	get_map.emplace("cim:WindContRotorRIEC.kprr", &get_WindContRotorRIEC_kprr);
	get_map.emplace("cim:WindContRotorRIEC.rmax", &get_WindContRotorRIEC_rmax);
	get_map.emplace("cim:WindContRotorRIEC.rmin", &get_WindContRotorRIEC_rmin);
	get_map.emplace("cim:WindContRotorRIEC.tomegafilt", &get_WindContRotorRIEC_tomegafilt);
	get_map.emplace("cim:WindContRotorRIEC.tpfilt", &get_WindContRotorRIEC_tpfilt);
}

void WindContRotorRIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindContRotorRIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner WindContRotorRIEC::declare()
{
	return BaseClassDefiner(WindContRotorRIEC::addConstructToMap, WindContRotorRIEC::addPrimitiveAssignFnsToMap, WindContRotorRIEC::addClassAssignFnsToMap, WindContRotorRIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindContRotorRIEC_factory()
	{
		return new WindContRotorRIEC;
	}
}
