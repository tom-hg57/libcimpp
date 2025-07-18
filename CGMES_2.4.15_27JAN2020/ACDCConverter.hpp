#ifndef ACDCConverter_H
#define ACDCConverter_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "ActivePowerPerCurrentFlow.hpp"
#include "ApparentPower.hpp"
#include "CurrentFlow.hpp"
#include "Integer.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class ACDCConverterDCTerminal;
	class Terminal;

	/** \brief A unit with valves for three phases, together with unit control equipment, essential protective and switching devices, DC storage capacitors, phase reactors and auxiliaries, if any, used for conversion. */
	class ACDCConverter : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		ACDCConverter();
		~ACDCConverter() override;

		/** \brief  Default: 0 */
		std::list<CIMPP::ACDCConverterDCTerminal*> DCTerminals;

		/** \brief All converters` DC sides linked to this point of common coupling terminal. Default: 0 */
		CIMPP::Terminal* PccTerminal;

		/** \brief Base apparent power of the converter pole. Default: nullptr */
		CIMPP::ApparentPower baseS;

		/** \brief Converter DC current, also called Id. Converter state variable, result from power flow. Default: nullptr */
		CIMPP::CurrentFlow idc;

		/** \brief Active power loss in pole at no power transfer. Converter configuration data used in power flow. Default: nullptr */
		CIMPP::ActivePower idleLoss;

		/** \brief The maximum voltage on the DC side at which the converter should operate. Converter configuration data used in power flow. Default: nullptr */
		CIMPP::Voltage maxUdc;

		/** \brief Min allowed converter DC voltage. Converter configuration data used in power flow. Default: nullptr */
		CIMPP::Voltage minUdc;

		/** \brief Number of valves in the converter. Used in loss calculations. Default: 0 */
		CIMPP::Integer numberOfValves;

		/** \brief Active power at the point of common coupling. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution in the case a simplified power flow model is used. Default: nullptr */
		CIMPP::ActivePower p;

		/** \brief The active power loss at a DC Pole  = idleLoss + switchingLoss*|Idc| + resitiveLoss*Idc^2 For lossless operation Pdc=Pac For rectifier operation with losses Pdc=Pac-lossP For inverter operation with losses Pdc=Pac+lossP Converter state variable used in power flow. Default: nullptr */
		CIMPP::ActivePower poleLossP;

		/** \brief Reactive power at the point of common coupling. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution in the case a simplified power flow model is used. Default: nullptr */
		CIMPP::ReactivePower q;

		/** \brief Rated converter DC voltage, also called UdN. Converter configuration data used in power flow. Default: nullptr */
		CIMPP::Voltage ratedUdc;

		/** \brief Converter configuration data used in power flow. Refer to poleLossP. Default: nullptr */
		CIMPP::Resistance resistiveLoss;

		/** \brief Switching losses, relative to the base apparent power `baseS`. Refer to poleLossP. Default: nullptr */
		CIMPP::ActivePowerPerCurrentFlow switchingLoss;

		/** \brief Real power injection target in AC grid, at point of common coupling. Default: nullptr */
		CIMPP::ActivePower targetPpcc;

		/** \brief Target value for DC voltage magnitude. Default: nullptr */
		CIMPP::Voltage targetUdc;

		/** \brief Converter voltage, the voltage at the AC side of the bridge. Converter state variable, result from power flow. Default: nullptr */
		CIMPP::Voltage uc;

		/** \brief Converter voltage at the DC side, also called Ud. Converter state variable, result from power flow. Default: nullptr */
		CIMPP::Voltage udc;

		/** \brief Valve threshold voltage. Forward voltage drop when the valve is conducting. Used in loss calculations, i.e. the switchLoss depend on numberOfValves * valveU0. Default: nullptr */
		CIMPP::Voltage valveU0;

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

	BaseClass* ACDCConverter_factory();
}
#endif
