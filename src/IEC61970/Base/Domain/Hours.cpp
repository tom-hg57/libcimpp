///////////////////////////////////////////////////////////
//  Hours.cpp
//  Implementation of the Class Hours
//  Created on:      28-Jan-2016 12:45:19
///////////////////////////////////////////////////////////

#include "Hours.h"

using IEC61970::Base::Domain::Hours;


Hours::Hours(){

}



Hours::~Hours(){

}


const IEC61970::Base::Domain::UnitMultiplier Hours::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol Hours::unit = IEC61970::Base::Domain::UnitSymbol::h;
