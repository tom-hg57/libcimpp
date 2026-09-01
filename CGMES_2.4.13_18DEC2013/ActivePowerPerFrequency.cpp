/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ActivePowerPerFrequency.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ActivePowerPerFrequency& ActivePowerPerFrequency::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ActivePowerPerFrequency::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ActivePowerPerFrequency::debugName[] = "ActivePowerPerFrequency";
const char* ActivePowerPerFrequency::debugString() const
{
	return ActivePowerPerFrequency::debugName;
}

ActivePowerPerFrequency& ActivePowerPerFrequency::operator+=(const ActivePowerPerFrequency& rhs)
{
	value += rhs.value;
	return *this;
}

ActivePowerPerFrequency& ActivePowerPerFrequency::operator-=(const ActivePowerPerFrequency& rhs)
{
	value -= rhs.value;
	return *this;
}

ActivePowerPerFrequency& ActivePowerPerFrequency::operator*=(const ActivePowerPerFrequency& rhs)
{
	value *= rhs.value;
	return *this;
}

ActivePowerPerFrequency& ActivePowerPerFrequency::operator/=(const ActivePowerPerFrequency& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ActivePowerPerFrequency& rop)
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
			std::cerr << "ActivePowerPerFrequency::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ActivePowerPerFrequency& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
