/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Voltage.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Voltage& Voltage::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Voltage::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Voltage::debugName[] = "Voltage";
const char* Voltage::debugString() const
{
	return Voltage::debugName;
}

Voltage& Voltage::operator+=(const Voltage& rhs)
{
	value += rhs.value;
	return *this;
}

Voltage& Voltage::operator-=(const Voltage& rhs)
{
	value -= rhs.value;
	return *this;
}

Voltage& Voltage::operator*=(const Voltage& rhs)
{
	value *= rhs.value;
	return *this;
}

Voltage& Voltage::operator/=(const Voltage& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Voltage& rop)
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
			std::cerr << "Voltage::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Voltage& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
