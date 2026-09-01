#ifndef InputSignalKind_H
#define InputSignalKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Types of input signals.  In dynamics modelling, commonly represented by the <i>j</i> parameter. */
	class InputSignalKind
	{
	public:
		enum InputSignalKind_ENUM
		{
			/** Input signal is rotor or shaft speed (angular frequency). */
			rotorSpeed,
			/** Input signal is rotor or shaft angular frequency deviation. */
			rotorAngularFrequencyDeviation,
			/** Input signal is bus voltage fr<font color="#0f0f0f">equency.  This could be a terminal frequency or remote frequency.</font> */
			busFrequency,
			/** Input signal is deviation of bus voltage frequ<font color="#0f0f0f">ency.  This could be a terminal frequency deviation or remote frequency deviation.</font> */
			busFrequencyDeviation,
			/** Input signal is generator electrical power on rated <i>S</i>. */
			generatorElectricalPower,
			/** Input signal is generator accelerating power. */
			generatorAcceleratingPower,
			/** Input signal <font color="#0f0f0f">is bus voltage.  This could be a terminal voltage or remote voltage.</font> */
			busVoltage,
			/** Input signal is derivative of bus voltag<font color="#0f0f0f">e.  This could be a terminal voltage derivative or remote voltage derivative.</font> */
			busVoltageDerivative,
			/** Input signal is amplitude of remote branch current. */
			branchCurrent,
			/** Input signal is generator field current. */
			fieldCurrent,
			/** Input signal is generator mechanical power. */
			generatorMechanicalPower,
		};

		InputSignalKind() : value(), initialized(false) {}
		InputSignalKind(InputSignalKind_ENUM value) : value(value), initialized(true) {}

		InputSignalKind& operator=(InputSignalKind_ENUM rop);
		operator InputSignalKind_ENUM() const;

		InputSignalKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, InputSignalKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const InputSignalKind& obj);
	};
}
#endif
