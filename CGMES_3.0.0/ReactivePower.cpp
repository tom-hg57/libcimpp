/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ReactivePower.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ReactivePower& ReactivePower::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ReactivePower::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ReactivePower::debugName[] = "ReactivePower";
const char* ReactivePower::debugString() const
{
	return ReactivePower::debugName;
}

ReactivePower& ReactivePower::operator+=(const ReactivePower& rhs)
{
	value += rhs.value;
	return *this;
}

ReactivePower& ReactivePower::operator-=(const ReactivePower& rhs)
{
	value -= rhs.value;
	return *this;
}

ReactivePower& ReactivePower::operator*=(const ReactivePower& rhs)
{
	value *= rhs.value;
	return *this;
}

ReactivePower& ReactivePower::operator/=(const ReactivePower& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ReactivePower& rop)
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
			std::cerr << "ReactivePower::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ReactivePower& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
