/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindContQIEC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindTurbineType3or4IEC.hpp"

using namespace CIMPP;

WindContQIEC::WindContQIEC() : WindTurbineType3or4IEC(nullptr) {}
WindContQIEC::~WindContQIEC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindContQIEC.WindTurbineType3or4IEC", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.iqh1", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.iqmax", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.iqmin", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.iqpost", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.kiq", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.kiu", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.kpq", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.kpu", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.kqv", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.qmax", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.qmin", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.rdroop", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.tiq", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.tpfilt", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.tpost", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.tqord", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.tufilt", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.udb1", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.udb2", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.umax", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.umin", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.uqdip", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.uref0", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.windLVRTQcontrolModesType", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.windQcontrolModesType", { CGMESProfile::DY, } },
	{ "cim:WindContQIEC.xdroop", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindContQIEC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindContQIEC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_WindTurbineType3or4IEC_WIndContQIEC(BaseClass*, BaseClass*);
bool assign_WindContQIEC_WindTurbineType3or4IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	WindTurbineType3or4IEC* element2 = dynamic_cast<WindTurbineType3or4IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindTurbineType3or4IEC != element2)
		{
			element->WindTurbineType3or4IEC = element2;
			return assign_WindTurbineType3or4IEC_WIndContQIEC(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContQIEC_iqh1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->iqh1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_iqmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->iqmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_iqmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->iqmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_iqpost(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->iqpost;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_kiq(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kiq;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_kiu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kiu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_kpq(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpq;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_kpu(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpu;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_kqv(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kqv;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_qmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_qmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->qmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_rdroop(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rdroop;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_tiq(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tiq;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_tpfilt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpfilt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_tpost(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpost;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_tqord(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tqord;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_tufilt(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tufilt;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_udb1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->udb1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_udb2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->udb2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_umax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->umax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_umin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->umin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_uqdip(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uqdip;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_uref0(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uref0;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_windLVRTQcontrolModesType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->windLVRTQcontrolModesType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_windQcontrolModesType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->windQcontrolModesType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindContQIEC_xdroop(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindContQIEC* element = dynamic_cast<WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->xdroop;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_WindContQIEC_iqh1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->iqh1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_iqmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->iqmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_iqmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->iqmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_iqpost(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->iqpost;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_kiq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kiq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_kiu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kiu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_kpq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_kpu(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpu;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_kqv(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kqv;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_qmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_qmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->qmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_rdroop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rdroop;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_tiq(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tiq;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_tpfilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_WindContQIEC_tpost(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpost;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_tqord(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tqord;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_tufilt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tufilt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_udb1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->udb1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_udb2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->udb2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_umax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->umax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_umin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->umin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_uqdip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uqdip;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_uref0(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uref0;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_windLVRTQcontrolModesType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->windLVRTQcontrolModesType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_windQcontrolModesType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->windQcontrolModesType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindContQIEC_xdroop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindContQIEC* element = dynamic_cast<const WindContQIEC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->xdroop;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindContQIEC::debugName[] = "WindContQIEC";
const char* WindContQIEC::debugString() const
{
	return WindContQIEC::debugName;
}

void WindContQIEC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindContQIEC", &WindContQIEC_factory);
}

void WindContQIEC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:WindContQIEC.iqh1", &assign_WindContQIEC_iqh1);
	assign_map.emplace("cim:WindContQIEC.iqmax", &assign_WindContQIEC_iqmax);
	assign_map.emplace("cim:WindContQIEC.iqmin", &assign_WindContQIEC_iqmin);
	assign_map.emplace("cim:WindContQIEC.iqpost", &assign_WindContQIEC_iqpost);
	assign_map.emplace("cim:WindContQIEC.kiq", &assign_WindContQIEC_kiq);
	assign_map.emplace("cim:WindContQIEC.kiu", &assign_WindContQIEC_kiu);
	assign_map.emplace("cim:WindContQIEC.kpq", &assign_WindContQIEC_kpq);
	assign_map.emplace("cim:WindContQIEC.kpu", &assign_WindContQIEC_kpu);
	assign_map.emplace("cim:WindContQIEC.kqv", &assign_WindContQIEC_kqv);
	assign_map.emplace("cim:WindContQIEC.qmax", &assign_WindContQIEC_qmax);
	assign_map.emplace("cim:WindContQIEC.qmin", &assign_WindContQIEC_qmin);
	assign_map.emplace("cim:WindContQIEC.rdroop", &assign_WindContQIEC_rdroop);
	assign_map.emplace("cim:WindContQIEC.tiq", &assign_WindContQIEC_tiq);
	assign_map.emplace("cim:WindContQIEC.tpfilt", &assign_WindContQIEC_tpfilt);
	assign_map.emplace("cim:WindContQIEC.tpost", &assign_WindContQIEC_tpost);
	assign_map.emplace("cim:WindContQIEC.tqord", &assign_WindContQIEC_tqord);
	assign_map.emplace("cim:WindContQIEC.tufilt", &assign_WindContQIEC_tufilt);
	assign_map.emplace("cim:WindContQIEC.udb1", &assign_WindContQIEC_udb1);
	assign_map.emplace("cim:WindContQIEC.udb2", &assign_WindContQIEC_udb2);
	assign_map.emplace("cim:WindContQIEC.umax", &assign_WindContQIEC_umax);
	assign_map.emplace("cim:WindContQIEC.umin", &assign_WindContQIEC_umin);
	assign_map.emplace("cim:WindContQIEC.uqdip", &assign_WindContQIEC_uqdip);
	assign_map.emplace("cim:WindContQIEC.uref0", &assign_WindContQIEC_uref0);
	assign_map.emplace("cim:WindContQIEC.windLVRTQcontrolModesType", &assign_WindContQIEC_windLVRTQcontrolModesType);
	assign_map.emplace("cim:WindContQIEC.windQcontrolModesType", &assign_WindContQIEC_windQcontrolModesType);
	assign_map.emplace("cim:WindContQIEC.xdroop", &assign_WindContQIEC_xdroop);
}

void WindContQIEC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindContQIEC.WindTurbineType3or4IEC", &assign_WindContQIEC_WindTurbineType3or4IEC);
}

void WindContQIEC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindContQIEC.iqh1", &get_WindContQIEC_iqh1);
	get_map.emplace("cim:WindContQIEC.iqmax", &get_WindContQIEC_iqmax);
	get_map.emplace("cim:WindContQIEC.iqmin", &get_WindContQIEC_iqmin);
	get_map.emplace("cim:WindContQIEC.iqpost", &get_WindContQIEC_iqpost);
	get_map.emplace("cim:WindContQIEC.kiq", &get_WindContQIEC_kiq);
	get_map.emplace("cim:WindContQIEC.kiu", &get_WindContQIEC_kiu);
	get_map.emplace("cim:WindContQIEC.kpq", &get_WindContQIEC_kpq);
	get_map.emplace("cim:WindContQIEC.kpu", &get_WindContQIEC_kpu);
	get_map.emplace("cim:WindContQIEC.kqv", &get_WindContQIEC_kqv);
	get_map.emplace("cim:WindContQIEC.qmax", &get_WindContQIEC_qmax);
	get_map.emplace("cim:WindContQIEC.qmin", &get_WindContQIEC_qmin);
	get_map.emplace("cim:WindContQIEC.rdroop", &get_WindContQIEC_rdroop);
	get_map.emplace("cim:WindContQIEC.tiq", &get_WindContQIEC_tiq);
	get_map.emplace("cim:WindContQIEC.tpfilt", &get_WindContQIEC_tpfilt);
	get_map.emplace("cim:WindContQIEC.tpost", &get_WindContQIEC_tpost);
	get_map.emplace("cim:WindContQIEC.tqord", &get_WindContQIEC_tqord);
	get_map.emplace("cim:WindContQIEC.tufilt", &get_WindContQIEC_tufilt);
	get_map.emplace("cim:WindContQIEC.udb1", &get_WindContQIEC_udb1);
	get_map.emplace("cim:WindContQIEC.udb2", &get_WindContQIEC_udb2);
	get_map.emplace("cim:WindContQIEC.umax", &get_WindContQIEC_umax);
	get_map.emplace("cim:WindContQIEC.umin", &get_WindContQIEC_umin);
	get_map.emplace("cim:WindContQIEC.uqdip", &get_WindContQIEC_uqdip);
	get_map.emplace("cim:WindContQIEC.uref0", &get_WindContQIEC_uref0);
	get_map.emplace("cim:WindContQIEC.xdroop", &get_WindContQIEC_xdroop);
}

void WindContQIEC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
}

void WindContQIEC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:WindContQIEC.windLVRTQcontrolModesType", &get_WindContQIEC_windLVRTQcontrolModesType);
	get_map.emplace("cim:WindContQIEC.windQcontrolModesType", &get_WindContQIEC_windQcontrolModesType);
}

const BaseClassDefiner WindContQIEC::declare()
{
	return BaseClassDefiner(WindContQIEC::addConstructToMap, WindContQIEC::addPrimitiveAssignFnsToMap, WindContQIEC::addClassAssignFnsToMap, WindContQIEC::debugName);
}

namespace CIMPP
{
	BaseClass* WindContQIEC_factory()
	{
		return new WindContQIEC;
	}
}
