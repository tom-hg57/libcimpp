/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VolumeFlowRate.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

VolumeFlowRate& VolumeFlowRate::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

VolumeFlowRate::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char VolumeFlowRate::debugName[] = "VolumeFlowRate";
const char* VolumeFlowRate::debugString() const
{
	return VolumeFlowRate::debugName;
}

VolumeFlowRate& VolumeFlowRate::operator+=(const VolumeFlowRate& rhs)
{
	value += rhs.value;
	return *this;
}

VolumeFlowRate& VolumeFlowRate::operator-=(const VolumeFlowRate& rhs)
{
	value -= rhs.value;
	return *this;
}

VolumeFlowRate& VolumeFlowRate::operator*=(const VolumeFlowRate& rhs)
{
	value *= rhs.value;
	return *this;
}

VolumeFlowRate& VolumeFlowRate::operator/=(const VolumeFlowRate& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, VolumeFlowRate& rop)
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
			std::cerr << "VolumeFlowRate::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const VolumeFlowRate& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
