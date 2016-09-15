///////////////////////////////////////////////////////////
//  FrequencyConverter.h
//  Implementation of the Class FrequencyConverter
//  Created on:      28-Jan-2016 12:44:54
///////////////////////////////////////////////////////////

#if !defined(EA_439EF181_CA9A_44b7_A831_31902486421B__INCLUDED_)
#define EA_439EF181_CA9A_44b7_A831_31902486421B__INCLUDED_

#include "IEC61970/Base/Domain/Frequency.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Wires/RegulatingCondEq.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A device to convert from one frequency to another (e.g., frequency F1 to F2)
			 * comprises a pair of FrequencyConverter instances. One converts from F1 to DC,
			 * the other converts the DC to F2.
			 */
			class FrequencyConverter : public IEC61970::Base::Wires::RegulatingCondEq
			{

			public:
				FrequencyConverter();
				virtual ~FrequencyConverter();
				/**
				 * Frequency on the AC side.
				 */
				IEC61970::Base::Domain::Frequency frequency;
				/**
				 * The maximum active power on the DC side at which the frequence converter should
				 * operate.
				 */
				IEC61970::Base::Domain::ActivePower maxP;
				/**
				 * The maximum voltage on the DC side at which the frequency converter should
				 * operate.
				 */
				IEC61970::Base::Domain::Voltage maxU;
				/**
				 * The minimum active power on the DC side at which the frequence converter should
				 * operate.
				 */
				IEC61970::Base::Domain::ActivePower minP;
				/**
				 * The minimum voltage on the DC side at which the frequency converter should
				 * operate.
				 */
				IEC61970::Base::Domain::Voltage minU;

			};

		}

	}

}
#endif // !defined(EA_439EF181_CA9A_44b7_A831_31902486421B__INCLUDED_)
