///////////////////////////////////////////////////////////
//  IEC61970CIMVersion.cpp
//  Implementation of the Class IEC61970CIMVersion
///////////////////////////////////////////////////////////

#include "IEC61970CIMVersion.h"

using namespace CIMPP;

const Date& IEC61970CIMVersion::getDate()
{
	static const Date date("2017-07-26");
	return date;
}

const String& IEC61970CIMVersion::getVersion()
{
	static const String version("IEC61970CIM17v23");
	return version;
}
