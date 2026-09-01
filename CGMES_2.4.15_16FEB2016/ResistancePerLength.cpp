/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "ResistancePerLength.hpp"

#include <cmath>
#include <exception>
#include <iostream>
#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

ResistancePerLength& ResistancePerLength::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

ResistancePerLength::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char ResistancePerLength::debugName[] = "ResistancePerLength";
const char* ResistancePerLength::debugString() const
{
	return ResistancePerLength::debugName;
}

ResistancePerLength& ResistancePerLength::operator+=(const ResistancePerLength& rhs)
{
	value += rhs.value;
	return *this;
}

ResistancePerLength& ResistancePerLength::operator-=(const ResistancePerLength& rhs)
{
	value -= rhs.value;
	return *this;
}

ResistancePerLength& ResistancePerLength::operator*=(const ResistancePerLength& rhs)
{
	value *= rhs.value;
	return *this;
}

ResistancePerLength& ResistancePerLength::operator/=(const ResistancePerLength& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, ResistancePerLength& rop)
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
			std::cerr << "ResistancePerLength::operator>>: input='" << tmp << "' error=" << ex.what() << std::endl;
		}
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const ResistancePerLength& obj)
	{
		if (obj.initialized && std::isfinite(obj.value))
		{
			os << obj.value;
		}
		return os;
	}
}
