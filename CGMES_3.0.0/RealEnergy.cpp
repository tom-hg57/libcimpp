/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "RealEnergy.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

RealEnergy& RealEnergy::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

RealEnergy::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char RealEnergy::debugName[] = "RealEnergy";
const char* RealEnergy::debugString() const
{
	return RealEnergy::debugName;
}

RealEnergy& RealEnergy::operator+=(const RealEnergy& rhs)
{
	value += rhs.value;
	return *this;
}

RealEnergy& RealEnergy::operator-=(const RealEnergy& rhs)
{
	value -= rhs.value;
	return *this;
}

RealEnergy& RealEnergy::operator*=(const RealEnergy& rhs)
{
	value *= rhs.value;
	return *this;
}

RealEnergy& RealEnergy::operator/=(const RealEnergy& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, RealEnergy& rop)
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
			std::cerr << "RealEnergy::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const RealEnergy& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
