/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteamIEEE1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovSteamIEEE1::GovSteamIEEE1() {}
GovSteamIEEE1::~GovSteamIEEE1() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovSteamIEEE1.k", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.k1", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.k2", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.k3", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.k4", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.k5", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.k6", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.k7", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.k8", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.pmax", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.pmin", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.t1", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.t2", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.t3", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.t4", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.t5", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.t6", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.t7", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.uc", { CGMESProfile::DY, } },
	{ "cim:GovSteamIEEE1.uo", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovSteamIEEE1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovSteamIEEE1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovSteamIEEE1_k(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_k1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_k2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_k3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_k4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_k5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_k6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_k7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_k8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->k8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->mwbase;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_t1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
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

bool assign_GovSteamIEEE1_t2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_t3(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t3;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_t4(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t4;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t5;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t6;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_t7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t7;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_uc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamIEEE1_uo(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamIEEE1* element = dynamic_cast<GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->uo;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovSteamIEEE1_k(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_k3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_k4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_k5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_k6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_k7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_k8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->k8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->mwbase;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_t1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
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

bool get_GovSteamIEEE1_t2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_t3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_t4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_t7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t7;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_uc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamIEEE1_uo(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamIEEE1* element = dynamic_cast<const GovSteamIEEE1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->uo;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovSteamIEEE1::debugName[] = "GovSteamIEEE1";
const char* GovSteamIEEE1::debugString() const
{
	return GovSteamIEEE1::debugName;
}

void GovSteamIEEE1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovSteamIEEE1", &GovSteamIEEE1_factory);
}

void GovSteamIEEE1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovSteamIEEE1.k", &assign_GovSteamIEEE1_k);
	assign_map.emplace("cim:GovSteamIEEE1.k1", &assign_GovSteamIEEE1_k1);
	assign_map.emplace("cim:GovSteamIEEE1.k2", &assign_GovSteamIEEE1_k2);
	assign_map.emplace("cim:GovSteamIEEE1.k3", &assign_GovSteamIEEE1_k3);
	assign_map.emplace("cim:GovSteamIEEE1.k4", &assign_GovSteamIEEE1_k4);
	assign_map.emplace("cim:GovSteamIEEE1.k5", &assign_GovSteamIEEE1_k5);
	assign_map.emplace("cim:GovSteamIEEE1.k6", &assign_GovSteamIEEE1_k6);
	assign_map.emplace("cim:GovSteamIEEE1.k7", &assign_GovSteamIEEE1_k7);
	assign_map.emplace("cim:GovSteamIEEE1.k8", &assign_GovSteamIEEE1_k8);
	assign_map.emplace("cim:GovSteamIEEE1.mwbase", &assign_GovSteamIEEE1_mwbase);
	assign_map.emplace("cim:GovSteamIEEE1.pmax", &assign_GovSteamIEEE1_pmax);
	assign_map.emplace("cim:GovSteamIEEE1.pmin", &assign_GovSteamIEEE1_pmin);
	assign_map.emplace("cim:GovSteamIEEE1.t1", &assign_GovSteamIEEE1_t1);
	assign_map.emplace("cim:GovSteamIEEE1.t2", &assign_GovSteamIEEE1_t2);
	assign_map.emplace("cim:GovSteamIEEE1.t3", &assign_GovSteamIEEE1_t3);
	assign_map.emplace("cim:GovSteamIEEE1.t4", &assign_GovSteamIEEE1_t4);
	assign_map.emplace("cim:GovSteamIEEE1.t5", &assign_GovSteamIEEE1_t5);
	assign_map.emplace("cim:GovSteamIEEE1.t6", &assign_GovSteamIEEE1_t6);
	assign_map.emplace("cim:GovSteamIEEE1.t7", &assign_GovSteamIEEE1_t7);
	assign_map.emplace("cim:GovSteamIEEE1.uc", &assign_GovSteamIEEE1_uc);
	assign_map.emplace("cim:GovSteamIEEE1.uo", &assign_GovSteamIEEE1_uo);
}

void GovSteamIEEE1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteamIEEE1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovSteamIEEE1.k", &get_GovSteamIEEE1_k);
	get_map.emplace("cim:GovSteamIEEE1.k1", &get_GovSteamIEEE1_k1);
	get_map.emplace("cim:GovSteamIEEE1.k2", &get_GovSteamIEEE1_k2);
	get_map.emplace("cim:GovSteamIEEE1.k3", &get_GovSteamIEEE1_k3);
	get_map.emplace("cim:GovSteamIEEE1.k4", &get_GovSteamIEEE1_k4);
	get_map.emplace("cim:GovSteamIEEE1.k5", &get_GovSteamIEEE1_k5);
	get_map.emplace("cim:GovSteamIEEE1.k6", &get_GovSteamIEEE1_k6);
	get_map.emplace("cim:GovSteamIEEE1.k7", &get_GovSteamIEEE1_k7);
	get_map.emplace("cim:GovSteamIEEE1.k8", &get_GovSteamIEEE1_k8);
	get_map.emplace("cim:GovSteamIEEE1.mwbase", &get_GovSteamIEEE1_mwbase);
	get_map.emplace("cim:GovSteamIEEE1.pmax", &get_GovSteamIEEE1_pmax);
	get_map.emplace("cim:GovSteamIEEE1.pmin", &get_GovSteamIEEE1_pmin);
	get_map.emplace("cim:GovSteamIEEE1.t1", &get_GovSteamIEEE1_t1);
	get_map.emplace("cim:GovSteamIEEE1.t2", &get_GovSteamIEEE1_t2);
	get_map.emplace("cim:GovSteamIEEE1.t3", &get_GovSteamIEEE1_t3);
	get_map.emplace("cim:GovSteamIEEE1.t4", &get_GovSteamIEEE1_t4);
	get_map.emplace("cim:GovSteamIEEE1.t5", &get_GovSteamIEEE1_t5);
	get_map.emplace("cim:GovSteamIEEE1.t6", &get_GovSteamIEEE1_t6);
	get_map.emplace("cim:GovSteamIEEE1.t7", &get_GovSteamIEEE1_t7);
	get_map.emplace("cim:GovSteamIEEE1.uc", &get_GovSteamIEEE1_uc);
	get_map.emplace("cim:GovSteamIEEE1.uo", &get_GovSteamIEEE1_uo);
}

void GovSteamIEEE1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteamIEEE1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovSteamIEEE1::declare()
{
	return BaseClassDefiner(GovSteamIEEE1::addConstructToMap, GovSteamIEEE1::addPrimitiveAssignFnsToMap, GovSteamIEEE1::addClassAssignFnsToMap, GovSteamIEEE1::debugName);
}

namespace CIMPP
{
	BaseClass* GovSteamIEEE1_factory()
	{
		return new GovSteamIEEE1;
	}
}
