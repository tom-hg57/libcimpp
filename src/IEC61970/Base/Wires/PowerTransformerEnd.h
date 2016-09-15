///////////////////////////////////////////////////////////
//  PowerTransformerEnd.h
//  Implementation of the Class PowerTransformerEnd
//  Created on:      28-Jan-2016 12:46:10
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#if !defined(EA_E23E6C56_24AD_444a_A3A7_2DF8E390293D__INCLUDED_)
#define EA_E23E6C56_24AD_444a_A3A7_2DF8E390293D__INCLUDED_

#include "IEC61970/Base/Domain/Susceptance.h"
#include "IEC61970/Base/Wires/WindingConnection.h"
#include "IEC61970/Base/Domain/Conductance.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Wires/TransformerEnd.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A PowerTransformerEnd is associated with each Terminal of a PowerTransformer.
			 * The impedance values r, r0, x, and x0 of a PowerTransformerEnd represents a
			 * star equivalent as follows
			 * 1) for a two Terminal PowerTransformer the high voltage PowerTransformerEnd has
			 * non zero values on r, r0, x, and x0 while the low voltage PowerTransformerEnd
			 * has zero values for r, r0, x, and x0.
			 * 2) for a three Terminal PowerTransformer the three PowerTransformerEnds
			 * represents a star equivalent with each leg in the star represented by r, r0, x,
			 * and x0 values.
			 * 3) for a PowerTransformer with more than three Terminals the
			 * PowerTransformerEnd impedance values cannot be used. Instead use the
			 * TransformerMeshImpedance or split the transformer into multiple
			 * PowerTransformers.
			 */
			class PowerTransformerEnd : public IEC61970::Base::Wires::TransformerEnd
			{

			public:
				PowerTransformerEnd();
				virtual ~PowerTransformerEnd();
				/**
				 * Magnetizing branch susceptance (B mag).  The value can be positive or negative.
				 */
				IEC61970::Base::Domain::Susceptance b;
				/**
				 * Zero sequence magnetizing branch susceptance.
				 */
				IEC61970::Base::Domain::Susceptance b0;
				/**
				 * Kind of connection.
				 */
				IEC61970::Base::Wires::WindingConnection connectionKind;
				/**
				 * Magnetizing branch conductance.
				 */
				IEC61970::Base::Domain::Conductance g;
				/**
				 * Zero sequence magnetizing branch conductance (star-model).
				 */
				IEC61970::Base::Domain::Conductance g0;
				/**
				 * Terminal voltage phase angle displacement where 360 degrees are represented
				 * with clock hours. The valid values are 0 to 11. For example, for the secondary
				 * side end of a transformer with vector group code of 'Dyn11', specify the
				 * connection kind as wye with neutral and specify the phase angle of the clock as
				 * 11.  The clock value of the transformer end number specified as 1, is assumed
				 * to be zero.  Note the transformer end number is not assumed to be the same as
				 * the terminal sequence number.
				 */
				IEC61970::Base::Domain::Integer phaseAngleClock;
				/**
				 * Resistance (star-model) of the transformer end.
				 * The attribute shall be equal or greater than zero for non-equivalent
				 * transformers.
				 */
				IEC61970::Base::Domain::Resistance r;
				/**
				 * Zero sequence series resistance (star-model) of the transformer end.
				 */
				IEC61970::Base::Domain::Resistance r0;
				/**
				 * Normal apparent power rating.
				 * The attribute shall be a positive value. For a two-winding transformer the
				 * values for the high and low voltage sides shall be identical. 
				 */
				IEC61970::Base::Domain::ApparentPower ratedS;
				/**
				 * Rated voltage: phase-phase for three-phase windings, and either phase-phase or
				 * phase-neutral for single-phase windings.
				 * A high voltage side, as given by TransformerEnd.endNumber, shall have a ratedU
				 * that is greater or equal than ratedU for the lower voltage sides.
				 */
				IEC61970::Base::Domain::Voltage ratedU;
				/**
				 * Positive sequence series reactance (star-model) of the transformer end.
				 */
				IEC61970::Base::Domain::Reactance x;
				/**
				 * Zero sequence series reactance of the transformer end.
				 */
				IEC61970::Base::Domain::Reactance x0;

			};

		}

	}

}
#endif // !defined(EA_E23E6C56_24AD_444a_A3A7_2DF8E390293D__INCLUDED_)
