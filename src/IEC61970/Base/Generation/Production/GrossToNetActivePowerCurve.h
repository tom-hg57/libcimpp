///////////////////////////////////////////////////////////
//  GrossToNetActivePowerCurve.h
//  Implementation of the Class GrossToNetActivePowerCurve
//  Created on:      28-Jan-2016 12:45:16
///////////////////////////////////////////////////////////

#if !defined(EA_8F3756EB_E097_4126_B6DF_F9CDA2F36EC7__INCLUDED_)
#define EA_8F3756EB_E097_4126_B6DF_F9CDA2F36EC7__INCLUDED_

#include "IEC61970/Base/Core/Curve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Relationship between the generating unit's gross active power output on the X-
				 * axis (measured at the terminals of the machine(s)) and the generating unit's
				 * net active power output on the Y-axis (based on utility-defined measurements at
				 * the power station). Station service loads, when modeled, should be treated as
				 * non-conforming bus loads. There may be more than one curve, depending on the
				 * auxiliary equipment that is in service.
				 */
				class GrossToNetActivePowerCurve : public IEC61970::Base::Core::Curve
				{

				public:
					GrossToNetActivePowerCurve();
					virtual ~GrossToNetActivePowerCurve();

				};

			}

		}

	}

}
#endif // !defined(EA_8F3756EB_E097_4126_B6DF_F9CDA2F36EC7__INCLUDED_)
