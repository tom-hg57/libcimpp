/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Simple_Float.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Simple_Float& Simple_Float::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Simple_Float::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Simple_Float::debugName[] = "Simple_Float";
const char* Simple_Float::debugString() const
{
	return Simple_Float::debugName;
}

Simple_Float& Simple_Float::operator+=(const Simple_Float& rhs)
{
	value += rhs.value;
	return *this;
}

Simple_Float& Simple_Float::operator-=(const Simple_Float& rhs)
{
	value -= rhs.value;
	return *this;
}

Simple_Float& Simple_Float::operator*=(const Simple_Float& rhs)
{
	value *= rhs.value;
	return *this;
}

Simple_Float& Simple_Float::operator/=(const Simple_Float& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Simple_Float& rop)
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
			std::cerr << "Simple_Float::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Simple_Float& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
