#ifndef WindQcontrolModeKind_H
#define WindQcontrolModeKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief General wind turbine Q control modes <i>M</i><i><sub>qG</sub></i><i>.</i> */
	class WindQcontrolModeKind
	{
	public:
		enum WindQcontrolModeKind_ENUM
		{
			/** Voltage control (<i>M</i><i><sub>qG</sub></i> equals 0). */
			voltage,
			/** Reactive power control (<i>M</i><i><sub>qG</sub></i> equals 1). */
			reactivePower,
			/** Open loop reactive power control (only used with closed loop at plant level) (<i>M</i><i><sub>qG</sub></i><sub> </sub>equals 2). */
			openLoopReactivePower,
			/** Power factor control (<i>M</i><i><sub>qG</sub></i><sub> </sub>equals 3). */
			powerFactor,
			/** Open loop power factor control (<i>M</i><i><sub>qG</sub></i><sub> </sub>equals 4). */
			openLooppowerFactor,
		};

		WindQcontrolModeKind() : value(), initialized(false) {}
		WindQcontrolModeKind(WindQcontrolModeKind_ENUM value) : value(value), initialized(true) {}

		WindQcontrolModeKind& operator=(WindQcontrolModeKind_ENUM rop);
		operator WindQcontrolModeKind_ENUM() const;

		WindQcontrolModeKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, WindQcontrolModeKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const WindQcontrolModeKind& obj);
	};
}
#endif
