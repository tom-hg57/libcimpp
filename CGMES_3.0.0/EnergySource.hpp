#ifndef EnergySource_H
#define EnergySource_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "EnergyConnection.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "AngleRadians.hpp"
#include "Reactance.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class EnergySchedulingType;

	/** \brief A generic equivalent for an energy supplier on a transmission or distribution voltage level. */
	class EnergySource : public EnergyConnection
	{
	public:
		/* constructor initialising all attributes to null */
		EnergySource();
		~EnergySource() override;

		/** \brief Energy Scheduling Type of an Energy Source. Default: 0 */
		CIMPP::EnergySchedulingType* EnergySchedulingType;

		/** \brief High voltage source active injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::ActivePower activePower;

		/** \brief Phase-to-phase nominal voltage. Default: nullptr */
		CIMPP::Voltage nominalVoltage;

		/** \brief This is the maximum active power that can be produced by the source. Load sign convention is used, i.e. positive sign means flow out from a TopologicalNode (bus) into the conducting equipment. Default: nullptr */
		CIMPP::ActivePower pMax;

		/** \brief This is the minimum active power that can be produced by the source. Load sign convention is used, i.e. positive sign means flow out from a TopologicalNode (bus) into the conducting equipment. Default: nullptr */
		CIMPP::ActivePower pMin;

		/** \brief Positive sequence Thevenin resistance. Default: nullptr */
		CIMPP::Resistance r;

		/** \brief Zero sequence Thevenin resistance. Default: nullptr */
		CIMPP::Resistance r0;

		/** \brief High voltage source reactive injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::ReactivePower reactivePower;

		/** \brief Negative sequence Thevenin resistance. Default: nullptr */
		CIMPP::Resistance rn;

		/** \brief Phase angle of a-phase open circuit used when voltage characteristics need to be imposed at the node associated with the terminal of the energy source, such as when voltages and angles from the transmission level are used as input to the distribution network. The attribute shall be a positive value or zero. Default: nullptr */
		CIMPP::AngleRadians voltageAngle;

		/** \brief Phase-to-phase open circuit voltage magnitude used when voltage characteristics need to be imposed at the node associated with the terminal of the energy source, such as when voltages and angles from the transmission level are used as input to the distribution network. The attribute shall be a positive value or zero. Default: nullptr */
		CIMPP::Voltage voltageMagnitude;

		/** \brief Positive sequence Thevenin reactance. Default: nullptr */
		CIMPP::Reactance x;

		/** \brief Zero sequence Thevenin reactance. Default: nullptr */
		CIMPP::Reactance x0;

		/** \brief Negative sequence Thevenin reactance. Default: nullptr */
		CIMPP::Reactance xn;

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

	BaseClass* EnergySource_factory();
}
#endif
