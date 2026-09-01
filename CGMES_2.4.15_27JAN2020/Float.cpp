/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Float.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Float& Float::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Float::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Float::debugName[] = "Float";
const char* Float::debugString() const
{
	return Float::debugName;
}

Float& Float::operator+=(const Float& rhs)
{
	value += rhs.value;
	return *this;
}

Float& Float::operator-=(const Float& rhs)
{
	value -= rhs.value;
	return *this;
}

Float& Float::operator*=(const Float& rhs)
{
	value *= rhs.value;
	return *this;
}

Float& Float::operator/=(const Float& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Float& rop)
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
			std::cerr << "Float::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Float& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
