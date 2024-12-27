/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovHydroDD.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "PU.hpp"
#include "PU.hpp"
#include "Frequency.hpp"
#include "ActivePower.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "ActivePower.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Seconds.hpp"
#include "Float.hpp"
#include "Float.hpp"

using namespace CIMPP;

GovHydroDD::GovHydroDD() {};
GovHydroDD::~GovHydroDD() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovHydroDD.aturb", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.bturb", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.db1", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.db2", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.eps", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.gmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.gmin", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.gv1", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.gv2", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.gv3", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.gv4", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.gv5", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.gv6", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.inputSignal", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.k1", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.k2", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.kg", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.ki", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.pgv1", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.pgv2", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.pgv3", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.pgv4", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.pgv5", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.pgv6", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.pmax", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.pmin", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.r", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.td", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.tf", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.tp", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.tt", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.tturb", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.velcl", { CGMESProfile::DY, } },
	{ "cim:GovHydroDD.velop", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovHydroDD::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovHydroDD::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_GovHydroDD_aturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->aturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_bturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->bturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_db1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->db1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_db2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->db2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_eps(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->eps;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_gv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->gv6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_inputSignal(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->inputSignal;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_k1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->k1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_k2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->k2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_kg(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->kg;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_ki(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->ki;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_mwbase(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->mwbase;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pgv1(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pgv1;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pgv2(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pgv2;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pgv3(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pgv3;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pgv4(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pgv4;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pgv5(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pgv5;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pgv6(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pgv6;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pmax(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pmax;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_pmin(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->pmin;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_r(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->r;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_td(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->td;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_tf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->tf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_tp(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->tp;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_tt(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->tt;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_tturb(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->tturb;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_velcl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->velcl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_GovHydroDD_velop(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (GovHydroDD* element = dynamic_cast<GovHydroDD*>(BaseClass_ptr1))
	{
		buffer >> element->velop;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}



bool get_GovHydroDD_aturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->aturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_bturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->bturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->db1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->db2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_eps(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->eps;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_gmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->gmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_gmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->gmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_gv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->gv1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_gv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->gv2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_gv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->gv3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_gv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->gv4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_gv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->gv5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_gv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->gv6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_inputSignal(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->inputSignal;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_k1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
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

bool get_GovHydroDD_k2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
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

bool get_GovHydroDD_kg(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->kg;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_ki(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
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

bool get_GovHydroDD_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
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

bool get_GovHydroDD_pgv1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->pgv1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_pgv2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->pgv2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_pgv3(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->pgv3;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_pgv4(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->pgv4;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_pgv5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->pgv5;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_pgv6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->pgv6;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
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

bool get_GovHydroDD_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
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

bool get_GovHydroDD_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->r;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_td(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
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

bool get_GovHydroDD_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
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

bool get_GovHydroDD_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->tp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_tt(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->tt;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_tturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->tturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_velcl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->velcl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovHydroDD_velop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const GovHydroDD* element = dynamic_cast<const GovHydroDD*>(BaseClass_ptr1))
	{
		buffer << element->velop;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}



const char GovHydroDD::debugName[] = "GovHydroDD";
const char* GovHydroDD::debugString() const
{
	return GovHydroDD::debugName;
}

void GovHydroDD::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:GovHydroDD"), &GovHydroDD_factory));
}

void GovHydroDD::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.aturb"), &assign_GovHydroDD_aturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.bturb"), &assign_GovHydroDD_bturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.db1"), &assign_GovHydroDD_db1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.db2"), &assign_GovHydroDD_db2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.eps"), &assign_GovHydroDD_eps));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gmax"), &assign_GovHydroDD_gmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gmin"), &assign_GovHydroDD_gmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gv1"), &assign_GovHydroDD_gv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gv2"), &assign_GovHydroDD_gv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gv3"), &assign_GovHydroDD_gv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gv4"), &assign_GovHydroDD_gv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gv5"), &assign_GovHydroDD_gv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.gv6"), &assign_GovHydroDD_gv6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.inputSignal"), &assign_GovHydroDD_inputSignal));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.k1"), &assign_GovHydroDD_k1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.k2"), &assign_GovHydroDD_k2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.kg"), &assign_GovHydroDD_kg));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.ki"), &assign_GovHydroDD_ki));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.mwbase"), &assign_GovHydroDD_mwbase));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pgv1"), &assign_GovHydroDD_pgv1));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pgv2"), &assign_GovHydroDD_pgv2));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pgv3"), &assign_GovHydroDD_pgv3));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pgv4"), &assign_GovHydroDD_pgv4));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pgv5"), &assign_GovHydroDD_pgv5));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pgv6"), &assign_GovHydroDD_pgv6));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pmax"), &assign_GovHydroDD_pmax));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.pmin"), &assign_GovHydroDD_pmin));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.r"), &assign_GovHydroDD_r));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.td"), &assign_GovHydroDD_td));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.tf"), &assign_GovHydroDD_tf));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.tp"), &assign_GovHydroDD_tp));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.tt"), &assign_GovHydroDD_tt));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.tturb"), &assign_GovHydroDD_tturb));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.velcl"), &assign_GovHydroDD_velcl));
	assign_map.insert(std::make_pair(std::string("cim:GovHydroDD.velop"), &assign_GovHydroDD_velop));
}

void GovHydroDD::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovHydroDD::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovHydroDD.aturb", &get_GovHydroDD_aturb);
	get_map.emplace("cim:GovHydroDD.bturb", &get_GovHydroDD_bturb);
	get_map.emplace("cim:GovHydroDD.db1", &get_GovHydroDD_db1);
	get_map.emplace("cim:GovHydroDD.db2", &get_GovHydroDD_db2);
	get_map.emplace("cim:GovHydroDD.eps", &get_GovHydroDD_eps);
	get_map.emplace("cim:GovHydroDD.gmax", &get_GovHydroDD_gmax);
	get_map.emplace("cim:GovHydroDD.gmin", &get_GovHydroDD_gmin);
	get_map.emplace("cim:GovHydroDD.gv1", &get_GovHydroDD_gv1);
	get_map.emplace("cim:GovHydroDD.gv2", &get_GovHydroDD_gv2);
	get_map.emplace("cim:GovHydroDD.gv3", &get_GovHydroDD_gv3);
	get_map.emplace("cim:GovHydroDD.gv4", &get_GovHydroDD_gv4);
	get_map.emplace("cim:GovHydroDD.gv5", &get_GovHydroDD_gv5);
	get_map.emplace("cim:GovHydroDD.gv6", &get_GovHydroDD_gv6);
	get_map.emplace("cim:GovHydroDD.inputSignal", &get_GovHydroDD_inputSignal);
	get_map.emplace("cim:GovHydroDD.k1", &get_GovHydroDD_k1);
	get_map.emplace("cim:GovHydroDD.k2", &get_GovHydroDD_k2);
	get_map.emplace("cim:GovHydroDD.kg", &get_GovHydroDD_kg);
	get_map.emplace("cim:GovHydroDD.ki", &get_GovHydroDD_ki);
	get_map.emplace("cim:GovHydroDD.mwbase", &get_GovHydroDD_mwbase);
	get_map.emplace("cim:GovHydroDD.pgv1", &get_GovHydroDD_pgv1);
	get_map.emplace("cim:GovHydroDD.pgv2", &get_GovHydroDD_pgv2);
	get_map.emplace("cim:GovHydroDD.pgv3", &get_GovHydroDD_pgv3);
	get_map.emplace("cim:GovHydroDD.pgv4", &get_GovHydroDD_pgv4);
	get_map.emplace("cim:GovHydroDD.pgv5", &get_GovHydroDD_pgv5);
	get_map.emplace("cim:GovHydroDD.pgv6", &get_GovHydroDD_pgv6);
	get_map.emplace("cim:GovHydroDD.pmax", &get_GovHydroDD_pmax);
	get_map.emplace("cim:GovHydroDD.pmin", &get_GovHydroDD_pmin);
	get_map.emplace("cim:GovHydroDD.r", &get_GovHydroDD_r);
	get_map.emplace("cim:GovHydroDD.td", &get_GovHydroDD_td);
	get_map.emplace("cim:GovHydroDD.tf", &get_GovHydroDD_tf);
	get_map.emplace("cim:GovHydroDD.tp", &get_GovHydroDD_tp);
	get_map.emplace("cim:GovHydroDD.tt", &get_GovHydroDD_tt);
	get_map.emplace("cim:GovHydroDD.tturb", &get_GovHydroDD_tturb);
	get_map.emplace("cim:GovHydroDD.velcl", &get_GovHydroDD_velcl);
	get_map.emplace("cim:GovHydroDD.velop", &get_GovHydroDD_velop);
}

void GovHydroDD::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovHydroDD::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovHydroDD::declare()
{
	return BaseClassDefiner(GovHydroDD::addConstructToMap, GovHydroDD::addPrimitiveAssignFnsToMap, GovHydroDD::addClassAssignFnsToMap, GovHydroDD::debugName);
}

namespace CIMPP
{
	BaseClass* GovHydroDD_factory()
	{
		return new GovHydroDD;
	}
}
