/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Reactance.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Reactance& Reactance::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Reactance::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Reactance::debugName[] = "Reactance";
const char* Reactance::debugString() const
{
	return Reactance::debugName;
}

Reactance& Reactance::operator+=(const Reactance& rhs)
{
	value += rhs.value;
	return *this;
}

Reactance& Reactance::operator-=(const Reactance& rhs)
{
	value -= rhs.value;
	return *this;
}

Reactance& Reactance::operator*=(const Reactance& rhs)
{
	value *= rhs.value;
	return *this;
}

Reactance& Reactance::operator/=(const Reactance& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Reactance& rop)
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
			std::cerr << "Reactance::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Reactance& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
