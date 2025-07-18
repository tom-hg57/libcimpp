/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Pss1.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>


using namespace CIMPP;

Pss1::Pss1() {}
Pss1::~Pss1() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:Pss1.kf", { CGMESProfile::DY, } },
	{ "cim:Pss1.kpe", { CGMESProfile::DY, } },
	{ "cim:Pss1.ks", { CGMESProfile::DY, } },
	{ "cim:Pss1.kw", { CGMESProfile::DY, } },
	{ "cim:Pss1.pmin", { CGMESProfile::DY, } },
	{ "cim:Pss1.t10", { CGMESProfile::DY, } },
	{ "cim:Pss1.t5", { CGMESProfile::DY, } },
	{ "cim:Pss1.t6", { CGMESProfile::DY, } },
	{ "cim:Pss1.t7", { CGMESProfile::DY, } },
	{ "cim:Pss1.t8", { CGMESProfile::DY, } },
	{ "cim:Pss1.t9", { CGMESProfile::DY, } },
	{ "cim:Pss1.tpe", { CGMESProfile::DY, } },
	{ "cim:Pss1.vadat", { CGMESProfile::DY, } },
	{ "cim:Pss1.vsmn", { CGMESProfile::DY, } },
	{ "cim:Pss1.vsmx", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
Pss1::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
Pss1::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = PowerSystemStabilizerDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_Pss1_kf(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
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

bool assign_Pss1_kpe(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kpe;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss1_ks(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
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

bool assign_Pss1_kw(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->kw;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss1_pmin(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
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

bool assign_Pss1_t10(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t10;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss1_t5(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
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

bool assign_Pss1_t6(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
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

bool assign_Pss1_t7(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
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

bool assign_Pss1_t8(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t8;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss1_t9(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->t9;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss1_tpe(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->tpe;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss1_vadat(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vadat;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss1_vsmn(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsmn;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_Pss1_vsmx(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	Pss1* element = dynamic_cast<Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->vsmx;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_Pss1_kf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
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

bool get_Pss1_kpe(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kpe;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss1_ks(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
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

bool get_Pss1_kw(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->kw;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss1_pmin(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
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

bool get_Pss1_t10(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t10;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss1_t5(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
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

bool get_Pss1_t6(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
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

bool get_Pss1_t7(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
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

bool get_Pss1_t8(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t8;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss1_t9(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->t9;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss1_tpe(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->tpe;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss1_vadat(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vadat;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss1_vsmn(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsmn;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_Pss1_vsmx(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const Pss1* element = dynamic_cast<const Pss1*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->vsmx;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char Pss1::debugName[] = "Pss1";
const char* Pss1::debugString() const
{
	return Pss1::debugName;
}

void Pss1::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:Pss1", &Pss1_factory);
}

void Pss1::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:Pss1.kf", &assign_Pss1_kf);
	assign_map.emplace("cim:Pss1.kpe", &assign_Pss1_kpe);
	assign_map.emplace("cim:Pss1.ks", &assign_Pss1_ks);
	assign_map.emplace("cim:Pss1.kw", &assign_Pss1_kw);
	assign_map.emplace("cim:Pss1.pmin", &assign_Pss1_pmin);
	assign_map.emplace("cim:Pss1.t10", &assign_Pss1_t10);
	assign_map.emplace("cim:Pss1.t5", &assign_Pss1_t5);
	assign_map.emplace("cim:Pss1.t6", &assign_Pss1_t6);
	assign_map.emplace("cim:Pss1.t7", &assign_Pss1_t7);
	assign_map.emplace("cim:Pss1.t8", &assign_Pss1_t8);
	assign_map.emplace("cim:Pss1.t9", &assign_Pss1_t9);
	assign_map.emplace("cim:Pss1.tpe", &assign_Pss1_tpe);
	assign_map.emplace("cim:Pss1.vadat", &assign_Pss1_vadat);
	assign_map.emplace("cim:Pss1.vsmn", &assign_Pss1_vsmn);
	assign_map.emplace("cim:Pss1.vsmx", &assign_Pss1_vsmx);
}

void Pss1::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
}

void Pss1::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:Pss1.kf", &get_Pss1_kf);
	get_map.emplace("cim:Pss1.kpe", &get_Pss1_kpe);
	get_map.emplace("cim:Pss1.ks", &get_Pss1_ks);
	get_map.emplace("cim:Pss1.kw", &get_Pss1_kw);
	get_map.emplace("cim:Pss1.pmin", &get_Pss1_pmin);
	get_map.emplace("cim:Pss1.t10", &get_Pss1_t10);
	get_map.emplace("cim:Pss1.t5", &get_Pss1_t5);
	get_map.emplace("cim:Pss1.t6", &get_Pss1_t6);
	get_map.emplace("cim:Pss1.t7", &get_Pss1_t7);
	get_map.emplace("cim:Pss1.t8", &get_Pss1_t8);
	get_map.emplace("cim:Pss1.t9", &get_Pss1_t9);
	get_map.emplace("cim:Pss1.tpe", &get_Pss1_tpe);
	get_map.emplace("cim:Pss1.vadat", &get_Pss1_vadat);
	get_map.emplace("cim:Pss1.vsmn", &get_Pss1_vsmn);
	get_map.emplace("cim:Pss1.vsmx", &get_Pss1_vsmx);
}

void Pss1::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addClassGetFnsToMap(get_map);
}

void Pss1::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	PowerSystemStabilizerDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner Pss1::declare()
{
	return BaseClassDefiner(Pss1::addConstructToMap, Pss1::addPrimitiveAssignFnsToMap, Pss1::addClassAssignFnsToMap, Pss1::debugName);
}

namespace CIMPP
{
	BaseClass* Pss1_factory()
	{
		return new Pss1;
	}
}
