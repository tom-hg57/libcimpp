#ifndef PetersenCoil_H
#define PetersenCoil_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "EarthFaultCompensator.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CurrentFlow.hpp"
#include "PetersenCoilModeKind.hpp"
#include "Reactance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{

	/** \brief A variable impedance device normally used to offset line charging during single line faults in an ungrounded section of network. */
	class PetersenCoil : public EarthFaultCompensator
	{
	public:
		/* constructor initialising all attributes to null */
		PetersenCoil();
		~PetersenCoil() override;

		/** \brief The mode of operation of the Petersen coil. Default: 0 */
		CIMPP::PetersenCoilModeKind mode;

		/** \brief The nominal voltage for which the coil is designed. Default: nullptr */
		CIMPP::Voltage nominalU;

		/** \brief The offset current that the Petersen coil controller is operating from the resonant point.  This is normally a fixed amount for which the controller is configured and could be positive or negative.  Typically 0 to 60 A depending on voltage and resonance conditions. Default: nullptr */
		CIMPP::CurrentFlow offsetCurrent;

		/** \brief The control current used to control the Petersen coil also known as the position current.  Typically in the range of 20 mA to 200 mA. Default: nullptr */
		CIMPP::CurrentFlow positionCurrent;

		/** \brief The maximum reactance. Default: nullptr */
		CIMPP::Reactance xGroundMax;

		/** \brief The minimum reactance. Default: nullptr */
		CIMPP::Reactance xGroundMin;

		/** \brief The nominal reactance.  This is the operating point (normally over compensation) that is defined based on the resonance point in the healthy network condition.  The impedance is calculated based on nominal voltage divided by position current. Default: nullptr */
		CIMPP::Reactance xGroundNominal;

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* PetersenCoil_factory();
}
#endif
