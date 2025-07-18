/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcPIC.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcPIC::ExcPIC() {}
ExcPIC::~ExcPIC() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcPIC.e1", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.e2", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.efdmax", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.efdmin", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.ka", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.kc", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.ke", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.kf", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.ki", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.kp", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.se1", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.se2", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.ta1", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.ta2", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.ta3", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.ta4", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.te", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.tf1", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.tf2", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.vr1", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.vr2", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcPIC.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcPIC::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcPIC::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcPIC_e1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->e1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_e2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->e2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_efdmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_efdmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efdmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
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

bool assign_ExcPIC_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
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

bool assign_ExcPIC_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
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

bool assign_ExcPIC_ki(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
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

bool assign_ExcPIC_kp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
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

bool assign_ExcPIC_se1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->se1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_se2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->se2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_ta1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ta1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_ta2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ta2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_ta3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ta3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_ta4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ta4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
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

bool assign_ExcPIC_tf1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_tf2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tf2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_vr1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vr1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_vr2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vr2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcPIC_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
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

bool assign_ExcPIC_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcPIC* element = dynamic_cast<ExcPIC*>(BaseClass_ptr1);
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

bool get_ExcPIC_e1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->e1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_e2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->e2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_efdmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_efdmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efdmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
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

bool get_ExcPIC_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
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

bool get_ExcPIC_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
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

bool get_ExcPIC_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
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

bool get_ExcPIC_kp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
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

bool get_ExcPIC_se1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->se1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_se2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->se2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_ta1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ta1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_ta2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ta2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_ta3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ta3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_ta4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ta4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
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

bool get_ExcPIC_tf1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_tf2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tf2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_vr1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vr1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_vr2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vr2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcPIC_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
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

bool get_ExcPIC_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcPIC* element = dynamic_cast<const ExcPIC*>(BaseClass_ptr1);
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

const char ExcPIC::debugName[] = "ExcPIC";
const char* ExcPIC::debugString() const
{
	return ExcPIC::debugName;
}

void ExcPIC::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcPIC", &ExcPIC_factory);
}

void ExcPIC::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcPIC.e1", &assign_ExcPIC_e1);
	assign_map.emplace("cim:ExcPIC.e2", &assign_ExcPIC_e2);
	assign_map.emplace("cim:ExcPIC.efdmax", &assign_ExcPIC_efdmax);
	assign_map.emplace("cim:ExcPIC.efdmin", &assign_ExcPIC_efdmin);
	assign_map.emplace("cim:ExcPIC.ka", &assign_ExcPIC_ka);
	assign_map.emplace("cim:ExcPIC.kc", &assign_ExcPIC_kc);
	assign_map.emplace("cim:ExcPIC.ke", &assign_ExcPIC_ke);
	assign_map.emplace("cim:ExcPIC.kf", &assign_ExcPIC_kf);
	assign_map.emplace("cim:ExcPIC.ki", &assign_ExcPIC_ki);
	assign_map.emplace("cim:ExcPIC.kp", &assign_ExcPIC_kp);
	assign_map.emplace("cim:ExcPIC.se1", &assign_ExcPIC_se1);
	assign_map.emplace("cim:ExcPIC.se2", &assign_ExcPIC_se2);
	assign_map.emplace("cim:ExcPIC.ta1", &assign_ExcPIC_ta1);
	assign_map.emplace("cim:ExcPIC.ta2", &assign_ExcPIC_ta2);
	assign_map.emplace("cim:ExcPIC.ta3", &assign_ExcPIC_ta3);
	assign_map.emplace("cim:ExcPIC.ta4", &assign_ExcPIC_ta4);
	assign_map.emplace("cim:ExcPIC.te", &assign_ExcPIC_te);
	assign_map.emplace("cim:ExcPIC.tf1", &assign_ExcPIC_tf1);
	assign_map.emplace("cim:ExcPIC.tf2", &assign_ExcPIC_tf2);
	assign_map.emplace("cim:ExcPIC.vr1", &assign_ExcPIC_vr1);
	assign_map.emplace("cim:ExcPIC.vr2", &assign_ExcPIC_vr2);
	assign_map.emplace("cim:ExcPIC.vrmax", &assign_ExcPIC_vrmax);
	assign_map.emplace("cim:ExcPIC.vrmin", &assign_ExcPIC_vrmin);
}

void ExcPIC::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcPIC::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcPIC.e1", &get_ExcPIC_e1);
	get_map.emplace("cim:ExcPIC.e2", &get_ExcPIC_e2);
	get_map.emplace("cim:ExcPIC.efdmax", &get_ExcPIC_efdmax);
	get_map.emplace("cim:ExcPIC.efdmin", &get_ExcPIC_efdmin);
	get_map.emplace("cim:ExcPIC.ka", &get_ExcPIC_ka);
	get_map.emplace("cim:ExcPIC.kc", &get_ExcPIC_kc);
	get_map.emplace("cim:ExcPIC.ke", &get_ExcPIC_ke);
	get_map.emplace("cim:ExcPIC.kf", &get_ExcPIC_kf);
	get_map.emplace("cim:ExcPIC.ki", &get_ExcPIC_ki);
	get_map.emplace("cim:ExcPIC.kp", &get_ExcPIC_kp);
	get_map.emplace("cim:ExcPIC.se1", &get_ExcPIC_se1);
	get_map.emplace("cim:ExcPIC.se2", &get_ExcPIC_se2);
	get_map.emplace("cim:ExcPIC.ta1", &get_ExcPIC_ta1);
	get_map.emplace("cim:ExcPIC.ta2", &get_ExcPIC_ta2);
	get_map.emplace("cim:ExcPIC.ta3", &get_ExcPIC_ta3);
	get_map.emplace("cim:ExcPIC.ta4", &get_ExcPIC_ta4);
	get_map.emplace("cim:ExcPIC.te", &get_ExcPIC_te);
	get_map.emplace("cim:ExcPIC.tf1", &get_ExcPIC_tf1);
	get_map.emplace("cim:ExcPIC.tf2", &get_ExcPIC_tf2);
	get_map.emplace("cim:ExcPIC.vr1", &get_ExcPIC_vr1);
	get_map.emplace("cim:ExcPIC.vr2", &get_ExcPIC_vr2);
	get_map.emplace("cim:ExcPIC.vrmax", &get_ExcPIC_vrmax);
	get_map.emplace("cim:ExcPIC.vrmin", &get_ExcPIC_vrmin);
}

void ExcPIC::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcPIC::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcPIC::declare()
{
	return BaseClassDefiner(ExcPIC::addConstructToMap, ExcPIC::addPrimitiveAssignFnsToMap, ExcPIC::addClassAssignFnsToMap, ExcPIC::debugName);
}

namespace CIMPP
{
	BaseClass* ExcPIC_factory()
	{
		return new ExcPIC;
	}
}
