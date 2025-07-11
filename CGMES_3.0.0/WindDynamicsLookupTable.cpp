/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "WindDynamicsLookupTable.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "WindContCurrLimIEC.hpp"
#include "WindContPType3IEC.hpp"
#include "WindContQPQULimIEC.hpp"
#include "WindContRotorRIEC.hpp"
#include "WindGenType3bIEC.hpp"
#include "WindPitchContPowerIEC.hpp"
#include "WindPlantFreqPcontrolIEC.hpp"
#include "WindPlantReactiveControlIEC.hpp"
#include "WindProtectionIEC.hpp"

using namespace CIMPP;

WindDynamicsLookupTable::WindDynamicsLookupTable() : WindContCurrLimIEC(nullptr), WindContPType3IEC(nullptr), WindContQPQULimIEC(nullptr), WindContRotorRIEC(nullptr), WindGenType3bIEC(nullptr), WindPitchContPowerIEC(nullptr), WindPlantFreqPcontrolIEC(nullptr), WindPlantReactiveControlIEC(nullptr), WindProtectionIEC(nullptr) {}
WindDynamicsLookupTable::~WindDynamicsLookupTable() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:WindDynamicsLookupTable.WindContCurrLimIEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.WindContPType3IEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.WindContQPQULimIEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.WindContRotorRIEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.WindGenType3bIEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.WindPitchContPowerIEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.WindPlantFreqPcontrolIEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.WindPlantReactiveControlIEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.WindProtectionIEC", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.input", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.lookupTableFunctionType", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.output", { CGMESProfile::DY, } },
	{ "cim:WindDynamicsLookupTable.sequence", { CGMESProfile::DY, } },
};

std::list<CGMESProfile>
WindDynamicsLookupTable::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
WindDynamicsLookupTable::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = IdentifiedObject::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_WindContCurrLimIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindContCurrLimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindContCurrLimIEC* element2 = dynamic_cast<WindContCurrLimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContCurrLimIEC != element2)
		{
			element->WindContCurrLimIEC = element2;
			return assign_WindContCurrLimIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContPType3IEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindContPType3IEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindContPType3IEC* element2 = dynamic_cast<WindContPType3IEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContPType3IEC != element2)
		{
			element->WindContPType3IEC = element2;
			return assign_WindContPType3IEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContQPQULimIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindContQPQULimIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindContQPQULimIEC* element2 = dynamic_cast<WindContQPQULimIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContQPQULimIEC != element2)
		{
			element->WindContQPQULimIEC = element2;
			return assign_WindContQPQULimIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindContRotorRIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindContRotorRIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindContRotorRIEC* element2 = dynamic_cast<WindContRotorRIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindContRotorRIEC != element2)
		{
			element->WindContRotorRIEC = element2;
			return assign_WindContRotorRIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindGenType3bIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindGenType3bIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindGenType3bIEC* element2 = dynamic_cast<WindGenType3bIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindGenType3bIEC != element2)
		{
			element->WindGenType3bIEC = element2;
			return assign_WindGenType3bIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPitchContPowerIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindPitchContPowerIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindPitchContPowerIEC* element2 = dynamic_cast<WindPitchContPowerIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPitchContPowerIEC != element2)
		{
			element->WindPitchContPowerIEC = element2;
			return assign_WindPitchContPowerIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantFreqPcontrolIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindPlantFreqPcontrolIEC* element2 = dynamic_cast<WindPlantFreqPcontrolIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantFreqPcontrolIEC != element2)
		{
			element->WindPlantFreqPcontrolIEC = element2;
			return assign_WindPlantFreqPcontrolIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindPlantReactiveControlIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindPlantReactiveControlIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindPlantReactiveControlIEC* element2 = dynamic_cast<WindPlantReactiveControlIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindPlantReactiveControlIEC != element2)
		{
			element->WindPlantReactiveControlIEC = element2;
			return assign_WindPlantReactiveControlIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindProtectionIEC_WindDynamicsLookupTable(BaseClass*, BaseClass*);
bool assign_WindDynamicsLookupTable_WindProtectionIEC(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	WindProtectionIEC* element2 = dynamic_cast<WindProtectionIEC*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->WindProtectionIEC != element2)
		{
			element->WindProtectionIEC = element2;
			return assign_WindProtectionIEC_WindDynamicsLookupTable(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_WindDynamicsLookupTable_input(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->input;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindDynamicsLookupTable_lookupTableFunctionType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->lookupTableFunctionType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindDynamicsLookupTable_output(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->output;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_WindDynamicsLookupTable_sequence(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	WindDynamicsLookupTable* element = dynamic_cast<WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->sequence;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_WindContCurrLimIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContCurrLimIEC != 0)
		{
			BaseClass_list.push_back(element->WindContCurrLimIEC);
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_WindContPType3IEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContPType3IEC != 0)
		{
			BaseClass_list.push_back(element->WindContPType3IEC);
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_WindContQPQULimIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContQPQULimIEC != 0)
		{
			BaseClass_list.push_back(element->WindContQPQULimIEC);
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_WindContRotorRIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindContRotorRIEC != 0)
		{
			BaseClass_list.push_back(element->WindContRotorRIEC);
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_WindGenType3bIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindGenType3bIEC != 0)
		{
			BaseClass_list.push_back(element->WindGenType3bIEC);
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_WindPitchContPowerIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindPitchContPowerIEC != 0)
		{
			BaseClass_list.push_back(element->WindPitchContPowerIEC);
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindPlantFreqPcontrolIEC != 0)
		{
			BaseClass_list.push_back(element->WindPlantFreqPcontrolIEC);
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_WindPlantReactiveControlIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindPlantReactiveControlIEC != 0)
		{
			BaseClass_list.push_back(element->WindPlantReactiveControlIEC);
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_WindProtectionIEC(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		if (element->WindProtectionIEC != 0)
		{
			BaseClass_list.push_back(element->WindProtectionIEC);
			return true;
		}
	}
	return false;
}

bool get_WindDynamicsLookupTable_input(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->input;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindDynamicsLookupTable_lookupTableFunctionType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->lookupTableFunctionType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindDynamicsLookupTable_output(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->output;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_WindDynamicsLookupTable_sequence(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const WindDynamicsLookupTable* element = dynamic_cast<const WindDynamicsLookupTable*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->sequence;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char WindDynamicsLookupTable::debugName[] = "WindDynamicsLookupTable";
const char* WindDynamicsLookupTable::debugString() const
{
	return WindDynamicsLookupTable::debugName;
}

void WindDynamicsLookupTable::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:WindDynamicsLookupTable", &WindDynamicsLookupTable_factory);
}

void WindDynamicsLookupTable::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:WindDynamicsLookupTable.input", &assign_WindDynamicsLookupTable_input);
	assign_map.emplace("cim:WindDynamicsLookupTable.lookupTableFunctionType", &assign_WindDynamicsLookupTable_lookupTableFunctionType);
	assign_map.emplace("cim:WindDynamicsLookupTable.output", &assign_WindDynamicsLookupTable_output);
	assign_map.emplace("cim:WindDynamicsLookupTable.sequence", &assign_WindDynamicsLookupTable_sequence);
}

void WindDynamicsLookupTable::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:WindDynamicsLookupTable.WindContCurrLimIEC", &assign_WindDynamicsLookupTable_WindContCurrLimIEC);
	assign_map.emplace("cim:WindDynamicsLookupTable.WindContPType3IEC", &assign_WindDynamicsLookupTable_WindContPType3IEC);
	assign_map.emplace("cim:WindDynamicsLookupTable.WindContQPQULimIEC", &assign_WindDynamicsLookupTable_WindContQPQULimIEC);
	assign_map.emplace("cim:WindDynamicsLookupTable.WindContRotorRIEC", &assign_WindDynamicsLookupTable_WindContRotorRIEC);
	assign_map.emplace("cim:WindDynamicsLookupTable.WindGenType3bIEC", &assign_WindDynamicsLookupTable_WindGenType3bIEC);
	assign_map.emplace("cim:WindDynamicsLookupTable.WindPitchContPowerIEC", &assign_WindDynamicsLookupTable_WindPitchContPowerIEC);
	assign_map.emplace("cim:WindDynamicsLookupTable.WindPlantFreqPcontrolIEC", &assign_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC);
	assign_map.emplace("cim:WindDynamicsLookupTable.WindPlantReactiveControlIEC", &assign_WindDynamicsLookupTable_WindPlantReactiveControlIEC);
	assign_map.emplace("cim:WindDynamicsLookupTable.WindProtectionIEC", &assign_WindDynamicsLookupTable_WindProtectionIEC);
}

void WindDynamicsLookupTable::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:WindDynamicsLookupTable.input", &get_WindDynamicsLookupTable_input);
	get_map.emplace("cim:WindDynamicsLookupTable.output", &get_WindDynamicsLookupTable_output);
	get_map.emplace("cim:WindDynamicsLookupTable.sequence", &get_WindDynamicsLookupTable_sequence);
}

void WindDynamicsLookupTable::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	IdentifiedObject::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:WindDynamicsLookupTable.WindContCurrLimIEC", &get_WindDynamicsLookupTable_WindContCurrLimIEC);
	get_map.emplace("cim:WindDynamicsLookupTable.WindContPType3IEC", &get_WindDynamicsLookupTable_WindContPType3IEC);
	get_map.emplace("cim:WindDynamicsLookupTable.WindContQPQULimIEC", &get_WindDynamicsLookupTable_WindContQPQULimIEC);
	get_map.emplace("cim:WindDynamicsLookupTable.WindContRotorRIEC", &get_WindDynamicsLookupTable_WindContRotorRIEC);
	get_map.emplace("cim:WindDynamicsLookupTable.WindGenType3bIEC", &get_WindDynamicsLookupTable_WindGenType3bIEC);
	get_map.emplace("cim:WindDynamicsLookupTable.WindPitchContPowerIEC", &get_WindDynamicsLookupTable_WindPitchContPowerIEC);
	get_map.emplace("cim:WindDynamicsLookupTable.WindPlantFreqPcontrolIEC", &get_WindDynamicsLookupTable_WindPlantFreqPcontrolIEC);
	get_map.emplace("cim:WindDynamicsLookupTable.WindPlantReactiveControlIEC", &get_WindDynamicsLookupTable_WindPlantReactiveControlIEC);
	get_map.emplace("cim:WindDynamicsLookupTable.WindProtectionIEC", &get_WindDynamicsLookupTable_WindProtectionIEC);
}

void WindDynamicsLookupTable::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	IdentifiedObject::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:WindDynamicsLookupTable.lookupTableFunctionType", &get_WindDynamicsLookupTable_lookupTableFunctionType);
}

const BaseClassDefiner WindDynamicsLookupTable::declare()
{
	return BaseClassDefiner(WindDynamicsLookupTable::addConstructToMap, WindDynamicsLookupTable::addPrimitiveAssignFnsToMap, WindDynamicsLookupTable::addClassAssignFnsToMap, WindDynamicsLookupTable::debugName);
}

namespace CIMPP
{
	BaseClass* WindDynamicsLookupTable_factory()
	{
		return new WindDynamicsLookupTable;
	}
}
