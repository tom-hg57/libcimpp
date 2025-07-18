/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEDC4B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcIEEEDC4B::ExcIEEEDC4B() {}
ExcIEEEDC4B::~ExcIEEEDC4B() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEDC4B.efd1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.efd2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.ka", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.kd", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.ke", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.kf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.ki", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.kp", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.oelin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.seefd1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.seefd2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.ta", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.td", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.te", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.tf", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.uelin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.vemin", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEDC4B.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEDC4B::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEDC4B::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcIEEEDC4B_efd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efd1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_efd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efd2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ka;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ke;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ki;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_oelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->oelin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_seefd1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seefd1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_seefd2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seefd2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ta;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_td(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->td;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->te;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_uelin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uelin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_vemin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vemin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEDC4B_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEDC4B* element = dynamic_cast<ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vrmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcIEEEDC4B_efd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_efd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efd2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ka;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ke;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ki;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_oelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->oelin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_seefd1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seefd1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_seefd2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seefd2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->td;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->te;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_uelin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uelin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_vemin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vemin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEDC4B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEDC4B* element = dynamic_cast<const ExcIEEEDC4B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vrmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcIEEEDC4B::debugName[] = "ExcIEEEDC4B";
const char* ExcIEEEDC4B::debugString() const
{
	return ExcIEEEDC4B::debugName;
}

void ExcIEEEDC4B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcIEEEDC4B", &ExcIEEEDC4B_factory);
}

void ExcIEEEDC4B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcIEEEDC4B.efd1", &assign_ExcIEEEDC4B_efd1);
	assign_map.emplace("cim:ExcIEEEDC4B.efd2", &assign_ExcIEEEDC4B_efd2);
	assign_map.emplace("cim:ExcIEEEDC4B.ka", &assign_ExcIEEEDC4B_ka);
	assign_map.emplace("cim:ExcIEEEDC4B.kd", &assign_ExcIEEEDC4B_kd);
	assign_map.emplace("cim:ExcIEEEDC4B.ke", &assign_ExcIEEEDC4B_ke);
	assign_map.emplace("cim:ExcIEEEDC4B.kf", &assign_ExcIEEEDC4B_kf);
	assign_map.emplace("cim:ExcIEEEDC4B.ki", &assign_ExcIEEEDC4B_ki);
	assign_map.emplace("cim:ExcIEEEDC4B.kp", &assign_ExcIEEEDC4B_kp);
	assign_map.emplace("cim:ExcIEEEDC4B.oelin", &assign_ExcIEEEDC4B_oelin);
	assign_map.emplace("cim:ExcIEEEDC4B.seefd1", &assign_ExcIEEEDC4B_seefd1);
	assign_map.emplace("cim:ExcIEEEDC4B.seefd2", &assign_ExcIEEEDC4B_seefd2);
	assign_map.emplace("cim:ExcIEEEDC4B.ta", &assign_ExcIEEEDC4B_ta);
	assign_map.emplace("cim:ExcIEEEDC4B.td", &assign_ExcIEEEDC4B_td);
	assign_map.emplace("cim:ExcIEEEDC4B.te", &assign_ExcIEEEDC4B_te);
	assign_map.emplace("cim:ExcIEEEDC4B.tf", &assign_ExcIEEEDC4B_tf);
	assign_map.emplace("cim:ExcIEEEDC4B.uelin", &assign_ExcIEEEDC4B_uelin);
	assign_map.emplace("cim:ExcIEEEDC4B.vemin", &assign_ExcIEEEDC4B_vemin);
	assign_map.emplace("cim:ExcIEEEDC4B.vrmax", &assign_ExcIEEEDC4B_vrmax);
	assign_map.emplace("cim:ExcIEEEDC4B.vrmin", &assign_ExcIEEEDC4B_vrmin);
}

void ExcIEEEDC4B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEDC4B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEDC4B.efd1", &get_ExcIEEEDC4B_efd1);
	get_map.emplace("cim:ExcIEEEDC4B.efd2", &get_ExcIEEEDC4B_efd2);
	get_map.emplace("cim:ExcIEEEDC4B.ka", &get_ExcIEEEDC4B_ka);
	get_map.emplace("cim:ExcIEEEDC4B.kd", &get_ExcIEEEDC4B_kd);
	get_map.emplace("cim:ExcIEEEDC4B.ke", &get_ExcIEEEDC4B_ke);
	get_map.emplace("cim:ExcIEEEDC4B.kf", &get_ExcIEEEDC4B_kf);
	get_map.emplace("cim:ExcIEEEDC4B.ki", &get_ExcIEEEDC4B_ki);
	get_map.emplace("cim:ExcIEEEDC4B.kp", &get_ExcIEEEDC4B_kp);
	get_map.emplace("cim:ExcIEEEDC4B.oelin", &get_ExcIEEEDC4B_oelin);
	get_map.emplace("cim:ExcIEEEDC4B.seefd1", &get_ExcIEEEDC4B_seefd1);
	get_map.emplace("cim:ExcIEEEDC4B.seefd2", &get_ExcIEEEDC4B_seefd2);
	get_map.emplace("cim:ExcIEEEDC4B.ta", &get_ExcIEEEDC4B_ta);
	get_map.emplace("cim:ExcIEEEDC4B.td", &get_ExcIEEEDC4B_td);
	get_map.emplace("cim:ExcIEEEDC4B.te", &get_ExcIEEEDC4B_te);
	get_map.emplace("cim:ExcIEEEDC4B.tf", &get_ExcIEEEDC4B_tf);
	get_map.emplace("cim:ExcIEEEDC4B.uelin", &get_ExcIEEEDC4B_uelin);
	get_map.emplace("cim:ExcIEEEDC4B.vemin", &get_ExcIEEEDC4B_vemin);
	get_map.emplace("cim:ExcIEEEDC4B.vrmax", &get_ExcIEEEDC4B_vrmax);
	get_map.emplace("cim:ExcIEEEDC4B.vrmin", &get_ExcIEEEDC4B_vrmin);
}

void ExcIEEEDC4B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEDC4B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcIEEEDC4B::declare()
{
	return BaseClassDefiner(ExcIEEEDC4B::addConstructToMap, ExcIEEEDC4B::addPrimitiveAssignFnsToMap, ExcIEEEDC4B::addClassAssignFnsToMap, ExcIEEEDC4B::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEDC4B_factory()
	{
		return new ExcIEEEDC4B;
	}
}
