/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RotationSpeed.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

RotationSpeed& RotationSpeed::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

RotationSpeed::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char RotationSpeed::debugName[] = "RotationSpeed";
const char* RotationSpeed::debugString() const
{
	return RotationSpeed::debugName;
}

RotationSpeed& RotationSpeed::operator+=(const RotationSpeed& rhs)
{
	value += rhs.value;
	return *this;
}

RotationSpeed& RotationSpeed::operator-=(const RotationSpeed& rhs)
{
	value -= rhs.value;
	return *this;
}

RotationSpeed& RotationSpeed::operator*=(const RotationSpeed& rhs)
{
	value *= rhs.value;
	return *this;
}

RotationSpeed& RotationSpeed::operator/=(const RotationSpeed& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, RotationSpeed& rop)
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
			std::cerr << "RotationSpeed::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const RotationSpeed& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
