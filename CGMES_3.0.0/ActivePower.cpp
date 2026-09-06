/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ActivePower.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ActivePower& ActivePower::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ActivePower::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ActivePower::debugName[] = "ActivePower";
const char* ActivePower::debugString() const
{
	return ActivePower::debugName;
}

ActivePower& ActivePower::operator+=(const ActivePower& rhs)
{
	value += rhs.value;
	return *this;
}

ActivePower& ActivePower::operator-=(const ActivePower& rhs)
{
	value -= rhs.value;
	return *this;
}

ActivePower& ActivePower::operator*=(const ActivePower& rhs)
{
	value *= rhs.value;
	return *this;
}

ActivePower& ActivePower::operator/=(const ActivePower& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ActivePower& rop)
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
			std::cerr << "ActivePower::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ActivePower& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
