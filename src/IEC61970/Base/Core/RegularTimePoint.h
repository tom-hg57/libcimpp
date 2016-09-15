///////////////////////////////////////////////////////////
//  RegularTimePoint.h
//  Implementation of the Class RegularTimePoint
//  Created on:      28-Jan-2016 12:46:28
///////////////////////////////////////////////////////////

#if !defined(EA_4E1E33BB_4F1F_40c7_8C98_FC718F538FC9__INCLUDED_)
#define EA_4E1E33BB_4F1F_40c7_8C98_FC718F538FC9__INCLUDED_

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Float.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * Time point for a schedule where the time between the consecutive points is
			 * constant.
			 */
			class RegularTimePoint : public BaseClass
			{

			public:
				RegularTimePoint();
				virtual ~RegularTimePoint();
				/**
				 * The position of the regular time point in the sequence. Note that time points
				 * don't have to be sequential, i.e. time points may be omitted. The actual time
				 * for a RegularTimePoint is computed by multiplying the associated regular
				 * interval schedule's time step with the regular time point sequence number and
				 * adding the associated schedules start time.
				 */
				IEC61970::Base::Domain::Integer sequenceNumber;
				/**
				 * The first value at the time. The meaning of the value is defined by the derived
				 * type of the associated schedule.
				 */
				IEC61970::Base::Domain::Float value1;
				/**
				 * The second value at the time. The meaning of the value is defined by the
				 * derived type of the associated schedule.
				 */
				IEC61970::Base::Domain::Float value2;

			};

		}

	}

}
#endif // !defined(EA_4E1E33BB_4F1F_40c7_8C98_FC718F538FC9__INCLUDED_)
