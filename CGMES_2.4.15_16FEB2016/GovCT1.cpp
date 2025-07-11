/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovCT1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovCT1::GovCT1() {}
GovCT1::~GovCT1() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovCT1.aset", { CGMESProfile::DY, } },
	{ "cim:GovCT1.db", { CGMESProfile::DY, } },
	{ "cim:GovCT1.dm", { CGMESProfile::DY, } },
	{ "cim:GovCT1.ka", { CGMESProfile::DY, } },
	{ "cim:GovCT1.kdgov", { CGMESProfile::DY, } },
	{ "cim:GovCT1.kigov", { CGMESProfile::DY, } },
	{ "cim:GovCT1.kiload", { CGMESProfile::DY, } },
	{ "cim:GovCT1.kimw", { CGMESProfile::DY, } },
	{ "cim:GovCT1.kpgov", { CGMESProfile::DY, } },
	{ "cim:GovCT1.kpload", { CGMESProfile::DY, } },
	{ "cim:GovCT1.kturb", { CGMESProfile::DY, } },
	{ "cim:GovCT1.ldref", { CGMESProfile::DY, } },
	{ "cim:GovCT1.maxerr", { CGMESProfile::DY, } },
	{ "cim:GovCT1.minerr", { CGMESProfile::DY, } },
	{ "cim:GovCT1.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovCT1.r", { CGMESProfile::DY, } },
	{ "cim:GovCT1.rclose", { CGMESProfile::DY, } },
	{ "cim:GovCT1.rdown", { CGMESProfile::DY, } },
	{ "cim:GovCT1.ropen", { CGMESProfile::DY, } },
	{ "cim:GovCT1.rselect", { CGMESProfile::DY, } },
	{ "cim:GovCT1.rup", { CGMESProfile::DY, } },
	{ "cim:GovCT1.ta", { CGMESProfile::DY, } },
	{ "cim:GovCT1.tact", { CGMESProfile::DY, } },
	{ "cim:GovCT1.tb", { CGMESProfile::DY, } },
	{ "cim:GovCT1.tc", { CGMESProfile::DY, } },
	{ "cim:GovCT1.tdgov", { CGMESProfile::DY, } },
	{ "cim:GovCT1.teng", { CGMESProfile::DY, } },
	{ "cim:GovCT1.tfload", { CGMESProfile::DY, } },
	{ "cim:GovCT1.tpelec", { CGMESProfile::DY, } },
	{ "cim:GovCT1.tsa", { CGMESProfile::DY, } },
	{ "cim:GovCT1.tsb", { CGMESProfile::DY, } },
	{ "cim:GovCT1.vmax", { CGMESProfile::DY, } },
	{ "cim:GovCT1.vmin", { CGMESProfile::DY, } },
	{ "cim:GovCT1.wfnl", { CGMESProfile::DY, } },
	{ "cim:GovCT1.wfspd", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovCT1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovCT1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovCT1_aset(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->aset;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_db(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->db;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_dm(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->dm;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_ka(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
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

bool assign_GovCT1_kdgov(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kdgov;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_kigov(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kigov;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_kiload(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kiload;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_kimw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kimw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_kpgov(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpgov;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_kpload(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpload;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_kturb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kturb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_ldref(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ldref;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_maxerr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->maxerr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_minerr(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->minerr;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
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

bool assign_GovCT1_r(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->r;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_rclose(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rclose;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_rdown(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rdown;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_ropen(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ropen;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_rselect(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rselect;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_rup(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rup;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_ta(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
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

bool assign_GovCT1_tact(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tact;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_tc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_tdgov(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tdgov;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_teng(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->teng;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_tfload(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tfload;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_tpelec(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpelec;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_tsa(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tsa;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_tsb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tsb;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_vmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_vmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_wfnl(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->wfnl;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovCT1_wfspd(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovCT1* element = dynamic_cast<GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->wfspd;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovCT1_aset(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->aset;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_db(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->db;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_dm(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->dm;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_ka(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
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

bool get_GovCT1_kdgov(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kdgov;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_kigov(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kigov;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_kiload(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kiload;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_kimw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kimw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_kpgov(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpgov;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_kpload(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpload;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_kturb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kturb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_ldref(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ldref;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_maxerr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->maxerr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_minerr(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->minerr;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
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

bool get_GovCT1_r(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovCT1_rclose(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rclose;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_rdown(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rdown;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_ropen(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ropen;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_rselect(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rselect;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_rup(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rup;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_ta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
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

bool get_GovCT1_tact(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tact;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_tc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_tdgov(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tdgov;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_teng(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->teng;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_tfload(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tfload;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_tpelec(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpelec;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_tsa(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tsa;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_tsb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tsb;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_vmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_vmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_wfnl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->wfnl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovCT1_wfspd(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovCT1* element = dynamic_cast<const GovCT1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->wfspd;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovCT1::debugName[] = "GovCT1";
const char* GovCT1::debugString() const
{
	return GovCT1::debugName;
}

void GovCT1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovCT1", &GovCT1_factory);
}

void GovCT1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovCT1.aset", &assign_GovCT1_aset);
	assign_map.emplace("cim:GovCT1.db", &assign_GovCT1_db);
	assign_map.emplace("cim:GovCT1.dm", &assign_GovCT1_dm);
	assign_map.emplace("cim:GovCT1.ka", &assign_GovCT1_ka);
	assign_map.emplace("cim:GovCT1.kdgov", &assign_GovCT1_kdgov);
	assign_map.emplace("cim:GovCT1.kigov", &assign_GovCT1_kigov);
	assign_map.emplace("cim:GovCT1.kiload", &assign_GovCT1_kiload);
	assign_map.emplace("cim:GovCT1.kimw", &assign_GovCT1_kimw);
	assign_map.emplace("cim:GovCT1.kpgov", &assign_GovCT1_kpgov);
	assign_map.emplace("cim:GovCT1.kpload", &assign_GovCT1_kpload);
	assign_map.emplace("cim:GovCT1.kturb", &assign_GovCT1_kturb);
	assign_map.emplace("cim:GovCT1.ldref", &assign_GovCT1_ldref);
	assign_map.emplace("cim:GovCT1.maxerr", &assign_GovCT1_maxerr);
	assign_map.emplace("cim:GovCT1.minerr", &assign_GovCT1_minerr);
	assign_map.emplace("cim:GovCT1.mwbase", &assign_GovCT1_mwbase);
	assign_map.emplace("cim:GovCT1.r", &assign_GovCT1_r);
	assign_map.emplace("cim:GovCT1.rclose", &assign_GovCT1_rclose);
	assign_map.emplace("cim:GovCT1.rdown", &assign_GovCT1_rdown);
	assign_map.emplace("cim:GovCT1.ropen", &assign_GovCT1_ropen);
	assign_map.emplace("cim:GovCT1.rselect", &assign_GovCT1_rselect);
	assign_map.emplace("cim:GovCT1.rup", &assign_GovCT1_rup);
	assign_map.emplace("cim:GovCT1.ta", &assign_GovCT1_ta);
	assign_map.emplace("cim:GovCT1.tact", &assign_GovCT1_tact);
	assign_map.emplace("cim:GovCT1.tb", &assign_GovCT1_tb);
	assign_map.emplace("cim:GovCT1.tc", &assign_GovCT1_tc);
	assign_map.emplace("cim:GovCT1.tdgov", &assign_GovCT1_tdgov);
	assign_map.emplace("cim:GovCT1.teng", &assign_GovCT1_teng);
	assign_map.emplace("cim:GovCT1.tfload", &assign_GovCT1_tfload);
	assign_map.emplace("cim:GovCT1.tpelec", &assign_GovCT1_tpelec);
	assign_map.emplace("cim:GovCT1.tsa", &assign_GovCT1_tsa);
	assign_map.emplace("cim:GovCT1.tsb", &assign_GovCT1_tsb);
	assign_map.emplace("cim:GovCT1.vmax", &assign_GovCT1_vmax);
	assign_map.emplace("cim:GovCT1.vmin", &assign_GovCT1_vmin);
	assign_map.emplace("cim:GovCT1.wfnl", &assign_GovCT1_wfnl);
	assign_map.emplace("cim:GovCT1.wfspd", &assign_GovCT1_wfspd);
}

void GovCT1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovCT1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovCT1.aset", &get_GovCT1_aset);
	get_map.emplace("cim:GovCT1.db", &get_GovCT1_db);
	get_map.emplace("cim:GovCT1.dm", &get_GovCT1_dm);
	get_map.emplace("cim:GovCT1.ka", &get_GovCT1_ka);
	get_map.emplace("cim:GovCT1.kdgov", &get_GovCT1_kdgov);
	get_map.emplace("cim:GovCT1.kigov", &get_GovCT1_kigov);
	get_map.emplace("cim:GovCT1.kiload", &get_GovCT1_kiload);
	get_map.emplace("cim:GovCT1.kimw", &get_GovCT1_kimw);
	get_map.emplace("cim:GovCT1.kpgov", &get_GovCT1_kpgov);
	get_map.emplace("cim:GovCT1.kpload", &get_GovCT1_kpload);
	get_map.emplace("cim:GovCT1.kturb", &get_GovCT1_kturb);
	get_map.emplace("cim:GovCT1.ldref", &get_GovCT1_ldref);
	get_map.emplace("cim:GovCT1.maxerr", &get_GovCT1_maxerr);
	get_map.emplace("cim:GovCT1.minerr", &get_GovCT1_minerr);
	get_map.emplace("cim:GovCT1.mwbase", &get_GovCT1_mwbase);
	get_map.emplace("cim:GovCT1.r", &get_GovCT1_r);
	get_map.emplace("cim:GovCT1.rclose", &get_GovCT1_rclose);
	get_map.emplace("cim:GovCT1.rdown", &get_GovCT1_rdown);
	get_map.emplace("cim:GovCT1.ropen", &get_GovCT1_ropen);
	get_map.emplace("cim:GovCT1.rup", &get_GovCT1_rup);
	get_map.emplace("cim:GovCT1.ta", &get_GovCT1_ta);
	get_map.emplace("cim:GovCT1.tact", &get_GovCT1_tact);
	get_map.emplace("cim:GovCT1.tb", &get_GovCT1_tb);
	get_map.emplace("cim:GovCT1.tc", &get_GovCT1_tc);
	get_map.emplace("cim:GovCT1.tdgov", &get_GovCT1_tdgov);
	get_map.emplace("cim:GovCT1.teng", &get_GovCT1_teng);
	get_map.emplace("cim:GovCT1.tfload", &get_GovCT1_tfload);
	get_map.emplace("cim:GovCT1.tpelec", &get_GovCT1_tpelec);
	get_map.emplace("cim:GovCT1.tsa", &get_GovCT1_tsa);
	get_map.emplace("cim:GovCT1.tsb", &get_GovCT1_tsb);
	get_map.emplace("cim:GovCT1.vmax", &get_GovCT1_vmax);
	get_map.emplace("cim:GovCT1.vmin", &get_GovCT1_vmin);
	get_map.emplace("cim:GovCT1.wfnl", &get_GovCT1_wfnl);
	get_map.emplace("cim:GovCT1.wfspd", &get_GovCT1_wfspd);
}

void GovCT1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovCT1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:GovCT1.rselect", &get_GovCT1_rselect);
}

const BaseClassDefiner GovCT1::declare()
{
	return BaseClassDefiner(GovCT1::addConstructToMap, GovCT1::addPrimitiveAssignFnsToMap, GovCT1::addClassAssignFnsToMap, GovCT1::debugName);
}

namespace CIMPP
{
	BaseClass* GovCT1_factory()
	{
		return new GovCT1;
	}
}
