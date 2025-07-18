/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcIEEEST5B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcIEEEST5B::ExcIEEEST5B() {}
ExcIEEEST5B::~ExcIEEEST5B() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcIEEEST5B.kc", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.kr", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.t1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.tb1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.tb2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.tc1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.tc2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.tob1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.tob2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.toc1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.toc2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.tub1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.tub2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.tuc1", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.tuc2", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcIEEEST5B.vrmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcIEEEST5B::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcIEEEST5B::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcIEEEST5B_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST5B_kr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tb1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tb2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tc1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tc2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tob1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tob1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tob2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tob2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_toc1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->toc1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_toc2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->toc2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tub1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tub1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tub2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tub2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tuc1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tuc1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_tuc2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tuc2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcIEEEST5B_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
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

bool assign_ExcIEEEST5B_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcIEEEST5B* element = dynamic_cast<ExcIEEEST5B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST5B_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST5B_kr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tb1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tb2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tc1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tc2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tob1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tob1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tob2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tob2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_toc1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->toc1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_toc2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->toc2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tub1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tub1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tub2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tub2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tuc1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tuc1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_tuc2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tuc2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcIEEEST5B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
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

bool get_ExcIEEEST5B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcIEEEST5B* element = dynamic_cast<const ExcIEEEST5B*>(BaseClass_ptr1);
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

const char ExcIEEEST5B::debugName[] = "ExcIEEEST5B";
const char* ExcIEEEST5B::debugString() const
{
	return ExcIEEEST5B::debugName;
}

void ExcIEEEST5B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcIEEEST5B", &ExcIEEEST5B_factory);
}

void ExcIEEEST5B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcIEEEST5B.kc", &assign_ExcIEEEST5B_kc);
	assign_map.emplace("cim:ExcIEEEST5B.kr", &assign_ExcIEEEST5B_kr);
	assign_map.emplace("cim:ExcIEEEST5B.t1", &assign_ExcIEEEST5B_t1);
	assign_map.emplace("cim:ExcIEEEST5B.tb1", &assign_ExcIEEEST5B_tb1);
	assign_map.emplace("cim:ExcIEEEST5B.tb2", &assign_ExcIEEEST5B_tb2);
	assign_map.emplace("cim:ExcIEEEST5B.tc1", &assign_ExcIEEEST5B_tc1);
	assign_map.emplace("cim:ExcIEEEST5B.tc2", &assign_ExcIEEEST5B_tc2);
	assign_map.emplace("cim:ExcIEEEST5B.tob1", &assign_ExcIEEEST5B_tob1);
	assign_map.emplace("cim:ExcIEEEST5B.tob2", &assign_ExcIEEEST5B_tob2);
	assign_map.emplace("cim:ExcIEEEST5B.toc1", &assign_ExcIEEEST5B_toc1);
	assign_map.emplace("cim:ExcIEEEST5B.toc2", &assign_ExcIEEEST5B_toc2);
	assign_map.emplace("cim:ExcIEEEST5B.tub1", &assign_ExcIEEEST5B_tub1);
	assign_map.emplace("cim:ExcIEEEST5B.tub2", &assign_ExcIEEEST5B_tub2);
	assign_map.emplace("cim:ExcIEEEST5B.tuc1", &assign_ExcIEEEST5B_tuc1);
	assign_map.emplace("cim:ExcIEEEST5B.tuc2", &assign_ExcIEEEST5B_tuc2);
	assign_map.emplace("cim:ExcIEEEST5B.vrmax", &assign_ExcIEEEST5B_vrmax);
	assign_map.emplace("cim:ExcIEEEST5B.vrmin", &assign_ExcIEEEST5B_vrmin);
}

void ExcIEEEST5B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcIEEEST5B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcIEEEST5B.kc", &get_ExcIEEEST5B_kc);
	get_map.emplace("cim:ExcIEEEST5B.kr", &get_ExcIEEEST5B_kr);
	get_map.emplace("cim:ExcIEEEST5B.t1", &get_ExcIEEEST5B_t1);
	get_map.emplace("cim:ExcIEEEST5B.tb1", &get_ExcIEEEST5B_tb1);
	get_map.emplace("cim:ExcIEEEST5B.tb2", &get_ExcIEEEST5B_tb2);
	get_map.emplace("cim:ExcIEEEST5B.tc1", &get_ExcIEEEST5B_tc1);
	get_map.emplace("cim:ExcIEEEST5B.tc2", &get_ExcIEEEST5B_tc2);
	get_map.emplace("cim:ExcIEEEST5B.tob1", &get_ExcIEEEST5B_tob1);
	get_map.emplace("cim:ExcIEEEST5B.tob2", &get_ExcIEEEST5B_tob2);
	get_map.emplace("cim:ExcIEEEST5B.toc1", &get_ExcIEEEST5B_toc1);
	get_map.emplace("cim:ExcIEEEST5B.toc2", &get_ExcIEEEST5B_toc2);
	get_map.emplace("cim:ExcIEEEST5B.tub1", &get_ExcIEEEST5B_tub1);
	get_map.emplace("cim:ExcIEEEST5B.tub2", &get_ExcIEEEST5B_tub2);
	get_map.emplace("cim:ExcIEEEST5B.tuc1", &get_ExcIEEEST5B_tuc1);
	get_map.emplace("cim:ExcIEEEST5B.tuc2", &get_ExcIEEEST5B_tuc2);
	get_map.emplace("cim:ExcIEEEST5B.vrmax", &get_ExcIEEEST5B_vrmax);
	get_map.emplace("cim:ExcIEEEST5B.vrmin", &get_ExcIEEEST5B_vrmin);
}

void ExcIEEEST5B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcIEEEST5B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcIEEEST5B::declare()
{
	return BaseClassDefiner(ExcIEEEST5B::addConstructToMap, ExcIEEEST5B::addPrimitiveAssignFnsToMap, ExcIEEEST5B::addClassAssignFnsToMap, ExcIEEEST5B::debugName);
}

namespace CIMPP
{
	BaseClass* ExcIEEEST5B_factory()
	{
		return new ExcIEEEST5B;
	}
}
