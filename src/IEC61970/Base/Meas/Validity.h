///////////////////////////////////////////////////////////
//  Validity.h
//  Implementation of the Class Validity
//  Created on:      28-Jan-2016 12:47:31
///////////////////////////////////////////////////////////

#if !defined(EA_B9C21A00_3802_4388_AC09_592E2782F735__INCLUDED_)
#define EA_B9C21A00_3802_4388_AC09_592E2782F735__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Validity for MeasurementValue.
			 */
			enum class Validity
			{
				/**
				 * The value is marked good if no abnormal condition of the acquisition function
				 * or the information source is detected.
				 */
				GOOD,
				/**
				 * The value is marked questionable if a supervision function detects an abnormal
				 * behaviour, however the value could still be valid. The client is responsible
				 * for determining whether or not values marked "questionable" should be used.
				 */
				QUESTIONABLE,
				/**
				 * The value is marked invalid when a supervision function recognises abnormal
				 * conditions of the acquisition function or the information source (missing or
				 * non-operating updating devices). The value is not defined under this condition.
				 * The mark invalid is used to indicate to the client that the value may be
				 * incorrect and shall not be used.
				 */
				INVALID
			};

		}

	}

}
#endif // !defined(EA_B9C21A00_3802_4388_AC09_592E2782F735__INCLUDED_)
