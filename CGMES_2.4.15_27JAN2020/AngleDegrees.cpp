/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "AngleDegrees.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

AngleDegrees& AngleDegrees::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

AngleDegrees::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char AngleDegrees::debugName[] = "AngleDegrees";
const char* AngleDegrees::debugString() const
{
	return AngleDegrees::debugName;
}

AngleDegrees& AngleDegrees::operator+=(const AngleDegrees& rhs)
{
	value += rhs.value;
	return *this;
}

AngleDegrees& AngleDegrees::operator-=(const AngleDegrees& rhs)
{
	value -= rhs.value;
	return *this;
}

AngleDegrees& AngleDegrees::operator*=(const AngleDegrees& rhs)
{
	value *= rhs.value;
	return *this;
}

AngleDegrees& AngleDegrees::operator/=(const AngleDegrees& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, AngleDegrees& rop)
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
			std::cerr << "AngleDegrees::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const AngleDegrees& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
