/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Conductance.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Conductance& Conductance::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Conductance::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Conductance::debugName[] = "Conductance";
const char* Conductance::debugString() const
{
	return Conductance::debugName;
}

Conductance& Conductance::operator+=(const Conductance& rhs)
{
	value += rhs.value;
	return *this;
}

Conductance& Conductance::operator-=(const Conductance& rhs)
{
	value -= rhs.value;
	return *this;
}

Conductance& Conductance::operator*=(const Conductance& rhs)
{
	value *= rhs.value;
	return *this;
}

Conductance& Conductance::operator/=(const Conductance& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Conductance& rop)
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
			std::cerr << "Conductance::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Conductance& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
