/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "Temperature.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

Temperature& Temperature::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

Temperature::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char Temperature::debugName[] = "Temperature";
const char* Temperature::debugString() const
{
	return Temperature::debugName;
}

Temperature& Temperature::operator+=(const Temperature& rhs)
{
	value += rhs.value;
	return *this;
}

Temperature& Temperature::operator-=(const Temperature& rhs)
{
	value -= rhs.value;
	return *this;
}

Temperature& Temperature::operator*=(const Temperature& rhs)
{
	value *= rhs.value;
	return *this;
}

Temperature& Temperature::operator/=(const Temperature& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, Temperature& rop)
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
			std::cerr << "Temperature::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const Temperature& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
