/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "GovSteamEU.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

GovSteamEU::GovSteamEU() {}
GovSteamEU::~GovSteamEU() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:GovSteamEU.chc", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.cho", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.cic", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.cio", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.db1", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.db2", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.hhpmax", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.ke", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.kfcor", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.khp", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.klp", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.komegacor", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.mwbase", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.pmax", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.prhmax", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.simx", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.tb", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.tdp", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.ten", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.tf", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.tfp", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.thp", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.tip", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.tlp", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.tp", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.trh", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.tvhp", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.tvip", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.tw", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.wfmax", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.wfmin", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.wmax1", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.wmax2", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.wwmax", { CGMESProfile::DY, } },
	{ "cim:GovSteamEU.wwmin", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
GovSteamEU::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
GovSteamEU::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = TurbineGovernorDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_GovSteamEU_chc(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->chc;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_cho(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->cho;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_cic(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->cic;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_cio(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->cio;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_db1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->db1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_db2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->db2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_hhpmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->hhpmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_ke(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
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

bool assign_GovSteamEU_kfcor(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kfcor;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_khp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->khp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_klp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->klp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_komegacor(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->komegacor;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_mwbase(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
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

bool assign_GovSteamEU_pmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
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

bool assign_GovSteamEU_prhmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->prhmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_simx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->simx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_tb(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
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

bool assign_GovSteamEU_tdp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tdp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_ten(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ten;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_tf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
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

bool assign_GovSteamEU_tfp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tfp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_thp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->thp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_tip(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tip;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_tlp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tlp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_tp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_trh(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->trh;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_tvhp(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tvhp;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_tvip(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tvip;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_tw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_wfmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->wfmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_wfmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->wfmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_wmax1(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->wmax1;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_wmax2(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->wmax2;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_wwmax(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->wwmax;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_GovSteamEU_wwmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	GovSteamEU* element = dynamic_cast<GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->wwmin;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_GovSteamEU_chc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->chc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_cho(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->cho;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_cic(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->cic;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_cio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->cio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_db1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamEU_db2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamEU_hhpmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->hhpmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_ke(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
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

bool get_GovSteamEU_kfcor(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kfcor;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_khp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->khp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_klp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->klp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_komegacor(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->komegacor;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_mwbase(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
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

bool get_GovSteamEU_pmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
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

bool get_GovSteamEU_prhmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->prhmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_simx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->simx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_tb(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
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

bool get_GovSteamEU_tdp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tdp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_ten(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ten;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_tf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
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

bool get_GovSteamEU_tfp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tfp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_thp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->thp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_tip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tip;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_tlp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tlp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_tp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
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

bool get_GovSteamEU_trh(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->trh;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_tvhp(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tvhp;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_tvip(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tvip;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_tw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_wfmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->wfmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_wfmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->wfmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_wmax1(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->wmax1;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_wmax2(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->wmax2;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_wwmax(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->wwmax;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_GovSteamEU_wwmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const GovSteamEU* element = dynamic_cast<const GovSteamEU*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->wwmin;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char GovSteamEU::debugName[] = "GovSteamEU";
const char* GovSteamEU::debugString() const
{
	return GovSteamEU::debugName;
}

void GovSteamEU::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:GovSteamEU", &GovSteamEU_factory);
}

void GovSteamEU::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:GovSteamEU.chc", &assign_GovSteamEU_chc);
	assign_map.emplace("cim:GovSteamEU.cho", &assign_GovSteamEU_cho);
	assign_map.emplace("cim:GovSteamEU.cic", &assign_GovSteamEU_cic);
	assign_map.emplace("cim:GovSteamEU.cio", &assign_GovSteamEU_cio);
	assign_map.emplace("cim:GovSteamEU.db1", &assign_GovSteamEU_db1);
	assign_map.emplace("cim:GovSteamEU.db2", &assign_GovSteamEU_db2);
	assign_map.emplace("cim:GovSteamEU.hhpmax", &assign_GovSteamEU_hhpmax);
	assign_map.emplace("cim:GovSteamEU.ke", &assign_GovSteamEU_ke);
	assign_map.emplace("cim:GovSteamEU.kfcor", &assign_GovSteamEU_kfcor);
	assign_map.emplace("cim:GovSteamEU.khp", &assign_GovSteamEU_khp);
	assign_map.emplace("cim:GovSteamEU.klp", &assign_GovSteamEU_klp);
	assign_map.emplace("cim:GovSteamEU.komegacor", &assign_GovSteamEU_komegacor);
	assign_map.emplace("cim:GovSteamEU.mwbase", &assign_GovSteamEU_mwbase);
	assign_map.emplace("cim:GovSteamEU.pmax", &assign_GovSteamEU_pmax);
	assign_map.emplace("cim:GovSteamEU.prhmax", &assign_GovSteamEU_prhmax);
	assign_map.emplace("cim:GovSteamEU.simx", &assign_GovSteamEU_simx);
	assign_map.emplace("cim:GovSteamEU.tb", &assign_GovSteamEU_tb);
	assign_map.emplace("cim:GovSteamEU.tdp", &assign_GovSteamEU_tdp);
	assign_map.emplace("cim:GovSteamEU.ten", &assign_GovSteamEU_ten);
	assign_map.emplace("cim:GovSteamEU.tf", &assign_GovSteamEU_tf);
	assign_map.emplace("cim:GovSteamEU.tfp", &assign_GovSteamEU_tfp);
	assign_map.emplace("cim:GovSteamEU.thp", &assign_GovSteamEU_thp);
	assign_map.emplace("cim:GovSteamEU.tip", &assign_GovSteamEU_tip);
	assign_map.emplace("cim:GovSteamEU.tlp", &assign_GovSteamEU_tlp);
	assign_map.emplace("cim:GovSteamEU.tp", &assign_GovSteamEU_tp);
	assign_map.emplace("cim:GovSteamEU.trh", &assign_GovSteamEU_trh);
	assign_map.emplace("cim:GovSteamEU.tvhp", &assign_GovSteamEU_tvhp);
	assign_map.emplace("cim:GovSteamEU.tvip", &assign_GovSteamEU_tvip);
	assign_map.emplace("cim:GovSteamEU.tw", &assign_GovSteamEU_tw);
	assign_map.emplace("cim:GovSteamEU.wfmax", &assign_GovSteamEU_wfmax);
	assign_map.emplace("cim:GovSteamEU.wfmin", &assign_GovSteamEU_wfmin);
	assign_map.emplace("cim:GovSteamEU.wmax1", &assign_GovSteamEU_wmax1);
	assign_map.emplace("cim:GovSteamEU.wmax2", &assign_GovSteamEU_wmax2);
	assign_map.emplace("cim:GovSteamEU.wwmax", &assign_GovSteamEU_wwmax);
	assign_map.emplace("cim:GovSteamEU.wwmin", &assign_GovSteamEU_wwmin);
}

void GovSteamEU::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void GovSteamEU::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:GovSteamEU.chc", &get_GovSteamEU_chc);
	get_map.emplace("cim:GovSteamEU.cho", &get_GovSteamEU_cho);
	get_map.emplace("cim:GovSteamEU.cic", &get_GovSteamEU_cic);
	get_map.emplace("cim:GovSteamEU.cio", &get_GovSteamEU_cio);
	get_map.emplace("cim:GovSteamEU.db1", &get_GovSteamEU_db1);
	get_map.emplace("cim:GovSteamEU.db2", &get_GovSteamEU_db2);
	get_map.emplace("cim:GovSteamEU.hhpmax", &get_GovSteamEU_hhpmax);
	get_map.emplace("cim:GovSteamEU.ke", &get_GovSteamEU_ke);
	get_map.emplace("cim:GovSteamEU.kfcor", &get_GovSteamEU_kfcor);
	get_map.emplace("cim:GovSteamEU.khp", &get_GovSteamEU_khp);
	get_map.emplace("cim:GovSteamEU.klp", &get_GovSteamEU_klp);
	get_map.emplace("cim:GovSteamEU.komegacor", &get_GovSteamEU_komegacor);
	get_map.emplace("cim:GovSteamEU.mwbase", &get_GovSteamEU_mwbase);
	get_map.emplace("cim:GovSteamEU.pmax", &get_GovSteamEU_pmax);
	get_map.emplace("cim:GovSteamEU.prhmax", &get_GovSteamEU_prhmax);
	get_map.emplace("cim:GovSteamEU.simx", &get_GovSteamEU_simx);
	get_map.emplace("cim:GovSteamEU.tb", &get_GovSteamEU_tb);
	get_map.emplace("cim:GovSteamEU.tdp", &get_GovSteamEU_tdp);
	get_map.emplace("cim:GovSteamEU.ten", &get_GovSteamEU_ten);
	get_map.emplace("cim:GovSteamEU.tf", &get_GovSteamEU_tf);
	get_map.emplace("cim:GovSteamEU.tfp", &get_GovSteamEU_tfp);
	get_map.emplace("cim:GovSteamEU.thp", &get_GovSteamEU_thp);
	get_map.emplace("cim:GovSteamEU.tip", &get_GovSteamEU_tip);
	get_map.emplace("cim:GovSteamEU.tlp", &get_GovSteamEU_tlp);
	get_map.emplace("cim:GovSteamEU.tp", &get_GovSteamEU_tp);
	get_map.emplace("cim:GovSteamEU.trh", &get_GovSteamEU_trh);
	get_map.emplace("cim:GovSteamEU.tvhp", &get_GovSteamEU_tvhp);
	get_map.emplace("cim:GovSteamEU.tvip", &get_GovSteamEU_tvip);
	get_map.emplace("cim:GovSteamEU.tw", &get_GovSteamEU_tw);
	get_map.emplace("cim:GovSteamEU.wfmax", &get_GovSteamEU_wfmax);
	get_map.emplace("cim:GovSteamEU.wfmin", &get_GovSteamEU_wfmin);
	get_map.emplace("cim:GovSteamEU.wmax1", &get_GovSteamEU_wmax1);
	get_map.emplace("cim:GovSteamEU.wmax2", &get_GovSteamEU_wmax2);
	get_map.emplace("cim:GovSteamEU.wwmax", &get_GovSteamEU_wwmax);
	get_map.emplace("cim:GovSteamEU.wwmin", &get_GovSteamEU_wwmin);
}

void GovSteamEU::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	TurbineGovernorDynamics::addClassGetFnsToMap(get_map);
}

void GovSteamEU::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	TurbineGovernorDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner GovSteamEU::declare()
{
	return BaseClassDefiner(GovSteamEU::addConstructToMap, GovSteamEU::addPrimitiveAssignFnsToMap, GovSteamEU::addClassAssignFnsToMap, GovSteamEU::debugName);
}

namespace CIMPP
{
	BaseClass* GovSteamEU_factory()
	{
		return new GovSteamEU;
	}
}
