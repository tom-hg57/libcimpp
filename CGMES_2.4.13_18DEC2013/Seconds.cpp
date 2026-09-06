/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Seconds.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Seconds& Seconds::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Seconds::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Seconds::debugName[] = "Seconds";
const char* Seconds::debugString() const
{
	return Seconds::debugName;
}

Seconds& Seconds::operator+=(const Seconds& rhs)
{
	value += rhs.value;
	return *this;
}

Seconds& Seconds::operator-=(const Seconds& rhs)
{
	value -= rhs.value;
	return *this;
}

Seconds& Seconds::operator*=(const Seconds& rhs)
{
	value *= rhs.value;
	return *this;
}

Seconds& Seconds::operator/=(const Seconds& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Seconds& rop)
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
			std::cerr << "Seconds::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Seconds& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
