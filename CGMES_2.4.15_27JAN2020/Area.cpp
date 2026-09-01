/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Area.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Area& Area::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Area::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Area::debugName[] = "Area";
const char* Area::debugString() const
{
	return Area::debugName;
}

Area& Area::operator+=(const Area& rhs)
{
	value += rhs.value;
	return *this;
}

Area& Area::operator-=(const Area& rhs)
{
	value -= rhs.value;
	return *this;
}

Area& Area::operator*=(const Area& rhs)
{
	value *= rhs.value;
	return *this;
}

Area& Area::operator/=(const Area& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Area& rop)
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
			std::cerr << "Area::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Area& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
