/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "CSCDynamics.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "CsConverter.hpp"

using namespace CIMPP;

CSCDynamics::CSCDynamics() : CSConverter(nullptr) {}
CSCDynamics::~CSCDynamics() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:CSCDynamics.CSConverter", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
CSCDynamics::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
CSCDynamics::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = HVDCDynamics::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_CsConverter_CSCDynamics(BaseClass*, BaseClass*);
bool assign_CSCDynamics_CSConverter(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	CSCDynamics* element = dynamic_cast<CSCDynamics*>(BaseClass_ptr1);
	CsConverter* element2 = dynamic_cast<CsConverter*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CSConverter != element2)
		{
			element->CSConverter = element2;
			return assign_CsConverter_CSCDynamics(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_CSCDynamics_CSConverter(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const CSCDynamics* element = dynamic_cast<const CSCDynamics*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->CSConverter != 0)
		{
			BaseClass_list.push_back(element->CSConverter);
			return true;
		}
	}
	return false;
}

const char CSCDynamics::debugName[] = "CSCDynamics";
const char* CSCDynamics::debugString() const
{
	return CSCDynamics::debugName;
}

void CSCDynamics::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:CSCDynamics", &CSCDynamics_factory);
}

void CSCDynamics::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
}

void CSCDynamics::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:CSCDynamics.CSConverter", &assign_CSCDynamics_CSConverter);
}

void CSCDynamics::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	HVDCDynamics::addPrimitiveGetFnsToMap(get_map);
}

void CSCDynamics::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	HVDCDynamics::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:CSCDynamics.CSConverter", &get_CSCDynamics_CSConverter);
}

void CSCDynamics::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	HVDCDynamics::addEnumGetFnsToMap(get_map);
}

const BaseClassDefiner CSCDynamics::declare()
{
	return BaseClassDefiner(CSCDynamics::addConstructToMap, CSCDynamics::addPrimitiveAssignFnsToMap, CSCDynamics::addClassAssignFnsToMap, CSCDynamics::debugName);
}

namespace CIMPP
{
	BaseClass* CSCDynamics_factory()
	{
		return new CSCDynamics;
	}
}
