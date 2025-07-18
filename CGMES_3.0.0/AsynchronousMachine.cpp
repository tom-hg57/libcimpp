/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AsynchronousMachine.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "AsynchronousMachineDynamics.hpp"

using namespace CIMPP;

AsynchronousMachine::AsynchronousMachine() : AsynchronousMachineDynamics(nullptr) {}
AsynchronousMachine::~AsynchronousMachine() {}

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::DY,
	CGMESProfile::EQ,
	CGMESProfile::SC,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:AsynchronousMachine.AsynchronousMachineDynamics", { CGMESProfile::DY, } },
	{ "cim:AsynchronousMachine.asynchronousMachineType", { CGMESProfile::SSH, } },
	{ "cim:AsynchronousMachine.converterFedDrive", { CGMESProfile::SC, } },
	{ "cim:AsynchronousMachine.efficiency", { CGMESProfile::SC, } },
	{ "cim:AsynchronousMachine.iaIrRatio", { CGMESProfile::SC, } },
	{ "cim:AsynchronousMachine.nominalFrequency", { CGMESProfile::EQ, } },
	{ "cim:AsynchronousMachine.nominalSpeed", { CGMESProfile::EQ, } },
	{ "cim:AsynchronousMachine.polePairNumber", { CGMESProfile::SC, } },
	{ "cim:AsynchronousMachine.ratedMechanicalPower", { CGMESProfile::SC, } },
	{ "cim:AsynchronousMachine.reversible", { CGMESProfile::SC, } },
	{ "cim:AsynchronousMachine.rxLockedRotorRatio", { CGMESProfile::SC, } },
};

std::list<CGMESProfile>
AsynchronousMachine::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
AsynchronousMachine::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = RotatingMachine::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}

bool assign_AsynchronousMachineDynamics_AsynchronousMachine(BaseClass*, BaseClass*);
bool assign_AsynchronousMachine_AsynchronousMachineDynamics(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1);
	AsynchronousMachineDynamics* element2 = dynamic_cast<AsynchronousMachineDynamics*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->AsynchronousMachineDynamics != element2)
		{
			element->AsynchronousMachineDynamics = element2;
			return assign_AsynchronousMachineDynamics_AsynchronousMachine(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool assign_AsynchronousMachine_asynchronousMachineType(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->asynchronousMachineType;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachine_converterFedDrive(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->converterFedDrive;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachine_efficiency(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->efficiency;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachine_iaIrRatio(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->iaIrRatio;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachine_nominalFrequency(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->nominalFrequency;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachine_nominalSpeed(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->nominalSpeed;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachine_polePairNumber(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->polePairNumber;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachine_ratedMechanicalPower(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->ratedMechanicalPower;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachine_reversible(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->reversible;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}

bool assign_AsynchronousMachine_rxLockedRotorRatio(std::stringstream& buffer, BaseClass* BaseClass_ptr1)
{
	AsynchronousMachine* element = dynamic_cast<AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer >> element->rxLockedRotorRatio;
		if (!buffer.fail())
		{
			return true;
		}
	}
	return false;
}


bool get_AsynchronousMachine_asynchronousMachineType(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachine* element = dynamic_cast<const AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->asynchronousMachineType;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachine_converterFedDrive(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachine* element = dynamic_cast<const AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->converterFedDrive;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachine_efficiency(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachine* element = dynamic_cast<const AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->efficiency;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachine_iaIrRatio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachine* element = dynamic_cast<const AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->iaIrRatio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachine_nominalFrequency(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachine* element = dynamic_cast<const AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->nominalFrequency;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachine_nominalSpeed(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachine* element = dynamic_cast<const AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->nominalSpeed;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachine_polePairNumber(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachine* element = dynamic_cast<const AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->polePairNumber;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachine_ratedMechanicalPower(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachine* element = dynamic_cast<const AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->ratedMechanicalPower;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachine_reversible(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachine* element = dynamic_cast<const AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->reversible;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_AsynchronousMachine_rxLockedRotorRatio(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	const AsynchronousMachine* element = dynamic_cast<const AsynchronousMachine*>(BaseClass_ptr1);
	if (element != nullptr)
	{
		buffer << element->rxLockedRotorRatio;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char AsynchronousMachine::debugName[] = "AsynchronousMachine";
const char* AsynchronousMachine::debugString() const
{
	return AsynchronousMachine::debugName;
}

void AsynchronousMachine::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.emplace("cim:AsynchronousMachine", &AsynchronousMachine_factory);
}

void AsynchronousMachine::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.emplace("cim:AsynchronousMachine.asynchronousMachineType", &assign_AsynchronousMachine_asynchronousMachineType);
	assign_map.emplace("cim:AsynchronousMachine.converterFedDrive", &assign_AsynchronousMachine_converterFedDrive);
	assign_map.emplace("cim:AsynchronousMachine.efficiency", &assign_AsynchronousMachine_efficiency);
	assign_map.emplace("cim:AsynchronousMachine.iaIrRatio", &assign_AsynchronousMachine_iaIrRatio);
	assign_map.emplace("cim:AsynchronousMachine.nominalFrequency", &assign_AsynchronousMachine_nominalFrequency);
	assign_map.emplace("cim:AsynchronousMachine.nominalSpeed", &assign_AsynchronousMachine_nominalSpeed);
	assign_map.emplace("cim:AsynchronousMachine.polePairNumber", &assign_AsynchronousMachine_polePairNumber);
	assign_map.emplace("cim:AsynchronousMachine.ratedMechanicalPower", &assign_AsynchronousMachine_ratedMechanicalPower);
	assign_map.emplace("cim:AsynchronousMachine.reversible", &assign_AsynchronousMachine_reversible);
	assign_map.emplace("cim:AsynchronousMachine.rxLockedRotorRatio", &assign_AsynchronousMachine_rxLockedRotorRatio);
}

void AsynchronousMachine::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.emplace("cim:AsynchronousMachine.AsynchronousMachineDynamics", &assign_AsynchronousMachine_AsynchronousMachineDynamics);
}

void AsynchronousMachine::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RotatingMachine::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:AsynchronousMachine.converterFedDrive", &get_AsynchronousMachine_converterFedDrive);
	get_map.emplace("cim:AsynchronousMachine.efficiency", &get_AsynchronousMachine_efficiency);
	get_map.emplace("cim:AsynchronousMachine.iaIrRatio", &get_AsynchronousMachine_iaIrRatio);
	get_map.emplace("cim:AsynchronousMachine.nominalFrequency", &get_AsynchronousMachine_nominalFrequency);
	get_map.emplace("cim:AsynchronousMachine.nominalSpeed", &get_AsynchronousMachine_nominalSpeed);
	get_map.emplace("cim:AsynchronousMachine.polePairNumber", &get_AsynchronousMachine_polePairNumber);
	get_map.emplace("cim:AsynchronousMachine.ratedMechanicalPower", &get_AsynchronousMachine_ratedMechanicalPower);
	get_map.emplace("cim:AsynchronousMachine.reversible", &get_AsynchronousMachine_reversible);
	get_map.emplace("cim:AsynchronousMachine.rxLockedRotorRatio", &get_AsynchronousMachine_rxLockedRotorRatio);
}

void AsynchronousMachine::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	RotatingMachine::addClassGetFnsToMap(get_map);
}

void AsynchronousMachine::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	RotatingMachine::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:AsynchronousMachine.asynchronousMachineType", &get_AsynchronousMachine_asynchronousMachineType);
}

const BaseClassDefiner AsynchronousMachine::declare()
{
	return BaseClassDefiner(AsynchronousMachine::addConstructToMap, AsynchronousMachine::addPrimitiveAssignFnsToMap, AsynchronousMachine::addClassAssignFnsToMap, AsynchronousMachine::debugName);
}

namespace CIMPP
{
	BaseClass* AsynchronousMachine_factory()
	{
		return new AsynchronousMachine;
	}
}
