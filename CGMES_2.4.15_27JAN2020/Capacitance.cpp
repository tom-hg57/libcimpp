/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Capacitance.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Capacitance& Capacitance::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Capacitance::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Capacitance::debugName[] = "Capacitance";
const char* Capacitance::debugString() const
{
	return Capacitance::debugName;
}

Capacitance& Capacitance::operator+=(const Capacitance& rhs)
{
	value += rhs.value;
	return *this;
}

Capacitance& Capacitance::operator-=(const Capacitance& rhs)
{
	value -= rhs.value;
	return *this;
}

Capacitance& Capacitance::operator*=(const Capacitance& rhs)
{
	value *= rhs.value;
	return *this;
}

Capacitance& Capacitance::operator/=(const Capacitance& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Capacitance& rop)
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
			std::cerr << "Capacitance::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Capacitance& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
