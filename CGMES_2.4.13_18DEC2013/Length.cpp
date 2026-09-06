/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Length.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Length& Length::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Length::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Length::debugName[] = "Length";
const char* Length::debugString() const
{
	return Length::debugName;
}

Length& Length::operator+=(const Length& rhs)
{
	value += rhs.value;
	return *this;
}

Length& Length::operator-=(const Length& rhs)
{
	value -= rhs.value;
	return *this;
}

Length& Length::operator*=(const Length& rhs)
{
	value *= rhs.value;
	return *this;
}

Length& Length::operator/=(const Length& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Length& rop)
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
			std::cerr << "Length::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Length& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
