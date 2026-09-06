/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "PerCent.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

PerCent& PerCent::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

PerCent::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char PerCent::debugName[] = "PerCent";
const char* PerCent::debugString() const
{
	return PerCent::debugName;
}

PerCent& PerCent::operator+=(const PerCent& rhs)
{
	value += rhs.value;
	return *this;
}

PerCent& PerCent::operator-=(const PerCent& rhs)
{
	value -= rhs.value;
	return *this;
}

PerCent& PerCent::operator*=(const PerCent& rhs)
{
	value *= rhs.value;
	return *this;
}

PerCent& PerCent::operator/=(const PerCent& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, PerCent& rop)
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
			std::cerr << "PerCent::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const PerCent& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
