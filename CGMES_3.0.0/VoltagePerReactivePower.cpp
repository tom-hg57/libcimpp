/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltagePerReactivePower.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

VoltagePerReactivePower& VoltagePerReactivePower::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

VoltagePerReactivePower::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char VoltagePerReactivePower::debugName[] = "VoltagePerReactivePower";
const char* VoltagePerReactivePower::debugString() const
{
	return VoltagePerReactivePower::debugName;
}

VoltagePerReactivePower& VoltagePerReactivePower::operator+=(const VoltagePerReactivePower& rhs)
{
	value += rhs.value;
	return *this;
}

VoltagePerReactivePower& VoltagePerReactivePower::operator-=(const VoltagePerReactivePower& rhs)
{
	value -= rhs.value;
	return *this;
}

VoltagePerReactivePower& VoltagePerReactivePower::operator*=(const VoltagePerReactivePower& rhs)
{
	value *= rhs.value;
	return *this;
}

VoltagePerReactivePower& VoltagePerReactivePower::operator/=(const VoltagePerReactivePower& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, VoltagePerReactivePower& rop)
	{
		std::string tmp;
		lop >> tmp;
		try
		{
			rop.value = std::stold(tmp);
			rop.initialized = std::isfinite(rop.value);
		}
		catch (const std::exception& ex)
		{
			rop.initialized = false;
			std::cerr << "VoltagePerReactivePower::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const VoltagePerReactivePower& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
