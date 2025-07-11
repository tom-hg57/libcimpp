/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ExcAC8B.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

ExcAC8B::ExcAC8B() {}
ExcAC8B::~ExcAC8B() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:ExcAC8B.inlim", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.ka", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.kc", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.kd", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.kdr", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.ke", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.kir", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.kpr", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.ks", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.pidlim", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.seve1", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.seve2", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.ta", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.tdr", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.te", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.telim", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.ve1", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.ve2", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.vemin", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.vfemax", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.vimax", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.vimin", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.vpidmax", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.vpidmin", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.vrmax", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.vrmin", { CGMESProfile::DY, } },
	{ "cim:ExcAC8B.vtmult", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
ExcAC8B::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
ExcAC8B::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ExcitationSystemDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_ExcAC8B_inlim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->inlim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
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

bool assign_ExcAC8B_kc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
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

bool assign_ExcAC8B_kd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
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

bool assign_ExcAC8B_kdr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kdr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
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

bool assign_ExcAC8B_kir(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kir;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_kpr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ks;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_pidlim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->pidlim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_seve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seve1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_seve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->seve2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
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

bool assign_ExcAC8B_tdr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tdr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_te(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
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

bool assign_ExcAC8B_telim(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->telim;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_ve1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ve1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_ve2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ve2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_vemin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
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

bool assign_ExcAC8B_vfemax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vfemax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_vimax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vimax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_vimin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vimin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_vpidmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vpidmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_vpidmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vpidmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_ExcAC8B_vrmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
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

bool assign_ExcAC8B_vrmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
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

bool assign_ExcAC8B_vtmult(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	ExcAC8B* element = dynamic_cast<ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vtmult;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_ExcAC8B_inlim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->inlim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
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

bool get_ExcAC8B_kc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
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

bool get_ExcAC8B_kd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
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

bool get_ExcAC8B_kdr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kdr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
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

bool get_ExcAC8B_kir(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kir;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_kpr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ks;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_pidlim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->pidlim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_seve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seve1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_seve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->seve2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
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

bool get_ExcAC8B_tdr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tdr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_te(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
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

bool get_ExcAC8B_telim(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->telim;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_ve1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ve1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_ve2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ve2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_vemin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
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

bool get_ExcAC8B_vfemax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vfemax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_vimax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vimax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_vimin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vimin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_vpidmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vpidmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_vpidmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vpidmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_ExcAC8B_vrmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
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

bool get_ExcAC8B_vrmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
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

bool get_ExcAC8B_vtmult(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const ExcAC8B* element = dynamic_cast<const ExcAC8B*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vtmult;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char ExcAC8B::debugName[] = "ExcAC8B";
const char* ExcAC8B::debugString() const
{
	return ExcAC8B::debugName;
}

void ExcAC8B::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:ExcAC8B", &ExcAC8B_factory);
}

void ExcAC8B::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:ExcAC8B.inlim", &assign_ExcAC8B_inlim);
	assign_map.emplace("cim:ExcAC8B.ka", &assign_ExcAC8B_ka);
	assign_map.emplace("cim:ExcAC8B.kc", &assign_ExcAC8B_kc);
	assign_map.emplace("cim:ExcAC8B.kd", &assign_ExcAC8B_kd);
	assign_map.emplace("cim:ExcAC8B.kdr", &assign_ExcAC8B_kdr);
	assign_map.emplace("cim:ExcAC8B.ke", &assign_ExcAC8B_ke);
	assign_map.emplace("cim:ExcAC8B.kir", &assign_ExcAC8B_kir);
	assign_map.emplace("cim:ExcAC8B.kpr", &assign_ExcAC8B_kpr);
	assign_map.emplace("cim:ExcAC8B.ks", &assign_ExcAC8B_ks);
	assign_map.emplace("cim:ExcAC8B.pidlim", &assign_ExcAC8B_pidlim);
	assign_map.emplace("cim:ExcAC8B.seve1", &assign_ExcAC8B_seve1);
	assign_map.emplace("cim:ExcAC8B.seve2", &assign_ExcAC8B_seve2);
	assign_map.emplace("cim:ExcAC8B.ta", &assign_ExcAC8B_ta);
	assign_map.emplace("cim:ExcAC8B.tdr", &assign_ExcAC8B_tdr);
	assign_map.emplace("cim:ExcAC8B.te", &assign_ExcAC8B_te);
	assign_map.emplace("cim:ExcAC8B.telim", &assign_ExcAC8B_telim);
	assign_map.emplace("cim:ExcAC8B.ve1", &assign_ExcAC8B_ve1);
	assign_map.emplace("cim:ExcAC8B.ve2", &assign_ExcAC8B_ve2);
	assign_map.emplace("cim:ExcAC8B.vemin", &assign_ExcAC8B_vemin);
	assign_map.emplace("cim:ExcAC8B.vfemax", &assign_ExcAC8B_vfemax);
	assign_map.emplace("cim:ExcAC8B.vimax", &assign_ExcAC8B_vimax);
	assign_map.emplace("cim:ExcAC8B.vimin", &assign_ExcAC8B_vimin);
	assign_map.emplace("cim:ExcAC8B.vpidmax", &assign_ExcAC8B_vpidmax);
	assign_map.emplace("cim:ExcAC8B.vpidmin", &assign_ExcAC8B_vpidmin);
	assign_map.emplace("cim:ExcAC8B.vrmax", &assign_ExcAC8B_vrmax);
	assign_map.emplace("cim:ExcAC8B.vrmin", &assign_ExcAC8B_vrmin);
	assign_map.emplace("cim:ExcAC8B.vtmult", &assign_ExcAC8B_vtmult);
}

void ExcAC8B::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void ExcAC8B::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:ExcAC8B.inlim", &get_ExcAC8B_inlim);
	get_map.emplace("cim:ExcAC8B.ka", &get_ExcAC8B_ka);
	get_map.emplace("cim:ExcAC8B.kc", &get_ExcAC8B_kc);
	get_map.emplace("cim:ExcAC8B.kd", &get_ExcAC8B_kd);
	get_map.emplace("cim:ExcAC8B.kdr", &get_ExcAC8B_kdr);
	get_map.emplace("cim:ExcAC8B.ke", &get_ExcAC8B_ke);
	get_map.emplace("cim:ExcAC8B.kir", &get_ExcAC8B_kir);
	get_map.emplace("cim:ExcAC8B.kpr", &get_ExcAC8B_kpr);
	get_map.emplace("cim:ExcAC8B.ks", &get_ExcAC8B_ks);
	get_map.emplace("cim:ExcAC8B.pidlim", &get_ExcAC8B_pidlim);
	get_map.emplace("cim:ExcAC8B.seve1", &get_ExcAC8B_seve1);
	get_map.emplace("cim:ExcAC8B.seve2", &get_ExcAC8B_seve2);
	get_map.emplace("cim:ExcAC8B.ta", &get_ExcAC8B_ta);
	get_map.emplace("cim:ExcAC8B.tdr", &get_ExcAC8B_tdr);
	get_map.emplace("cim:ExcAC8B.te", &get_ExcAC8B_te);
	get_map.emplace("cim:ExcAC8B.telim", &get_ExcAC8B_telim);
	get_map.emplace("cim:ExcAC8B.ve1", &get_ExcAC8B_ve1);
	get_map.emplace("cim:ExcAC8B.ve2", &get_ExcAC8B_ve2);
	get_map.emplace("cim:ExcAC8B.vemin", &get_ExcAC8B_vemin);
	get_map.emplace("cim:ExcAC8B.vfemax", &get_ExcAC8B_vfemax);
	get_map.emplace("cim:ExcAC8B.vimax", &get_ExcAC8B_vimax);
	get_map.emplace("cim:ExcAC8B.vimin", &get_ExcAC8B_vimin);
	get_map.emplace("cim:ExcAC8B.vpidmax", &get_ExcAC8B_vpidmax);
	get_map.emplace("cim:ExcAC8B.vpidmin", &get_ExcAC8B_vpidmin);
	get_map.emplace("cim:ExcAC8B.vrmax", &get_ExcAC8B_vrmax);
	get_map.emplace("cim:ExcAC8B.vrmin", &get_ExcAC8B_vrmin);
	get_map.emplace("cim:ExcAC8B.vtmult", &get_ExcAC8B_vtmult);
}

void ExcAC8B::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ExcitationSystemDynamics::addClassGetFnsToMap(get_map);
}

void ExcAC8B::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ExcitationSystemDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner ExcAC8B::declare()
{
	return BaseClassDefiner(ExcAC8B::addConstructToMap, ExcAC8B::addPrimitiveAssignFnsToMap, ExcAC8B::addClassAssignFnsToMap, ExcAC8B::debugName);
}

namespace CIMPP
{
	BaseClass* ExcAC8B_factory()
	{
		return new ExcAC8B;
	}
}
