/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Decimal.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Decimal& Decimal::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Decimal::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Decimal::debugName[] = "Decimal";
const char* Decimal::debugString() const
{
	return Decimal::debugName;
}

Decimal& Decimal::operator+=(const Decimal& rhs)
{
	value += rhs.value;
	return *this;
}

Decimal& Decimal::operator-=(const Decimal& rhs)
{
	value -= rhs.value;
	return *this;
}

Decimal& Decimal::operator*=(const Decimal& rhs)
{
	value *= rhs.value;
	return *this;
}

Decimal& Decimal::operator/=(const Decimal& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Decimal& rop)
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
			std::cerr << "Decimal::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Decimal& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
