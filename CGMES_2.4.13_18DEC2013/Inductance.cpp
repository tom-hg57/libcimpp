/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Inductance.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Inductance& Inductance::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Inductance::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Inductance::debugName[] = "Inductance";
const char* Inductance::debugString() const
{
	return Inductance::debugName;
}

Inductance& Inductance::operator+=(const Inductance& rhs)
{
	value += rhs.value;
	return *this;
}

Inductance& Inductance::operator-=(const Inductance& rhs)
{
	value -= rhs.value;
	return *this;
}

Inductance& Inductance::operator*=(const Inductance& rhs)
{
	value *= rhs.value;
	return *this;
}

Inductance& Inductance::operator/=(const Inductance& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Inductance& rop)
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
			std::cerr << "Inductance::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Inductance& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
