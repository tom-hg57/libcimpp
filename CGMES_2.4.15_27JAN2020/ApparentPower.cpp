/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ApparentPower.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ApparentPower& ApparentPower::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ApparentPower::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ApparentPower::debugName[] = "ApparentPower";
const char* ApparentPower::debugString() const
{
	return ApparentPower::debugName;
}

ApparentPower& ApparentPower::operator+=(const ApparentPower& rhs)
{
	value += rhs.value;
	return *this;
}

ApparentPower& ApparentPower::operator-=(const ApparentPower& rhs)
{
	value -= rhs.value;
	return *this;
}

ApparentPower& ApparentPower::operator*=(const ApparentPower& rhs)
{
	value *= rhs.value;
	return *this;
}

ApparentPower& ApparentPower::operator/=(const ApparentPower& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ApparentPower& rop)
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
			std::cerr << "ApparentPower::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ApparentPower& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
