#ifndef ACDCConverter_H
#define ACDCConverter_H

#include "ConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ApparentPower.hpp"
#include "ActivePower.hpp"
#include "Voltage.hpp"
#include "Integer.hpp"
#include "Resistance.hpp"
#include "CurrentFlow.hpp"
#include "ReactivePower.hpp"

namespace CIMPP {


class ActivePowerPerCurrentFlow;
class ACDCConverterDCTerminal;
class Terminal;
	/*
	A unit with valves for three phases, together with unit control equipment, essential protective and switching devices, DC storage capacitors, phase reactors and auxiliaries, if any, used for conversion.
	*/
	class ACDCConverter: public ConductingEquipment
	{

	public:
					CIMPP::ApparentPower baseS; 	/* Base apparent power of the converter pole. Default: nullptr */
					CIMPP::ActivePower idleLoss; 	/* Active power loss in pole at no power transfer. Converter configuration data used in power flow. Default: nullptr */
					CIMPP::Voltage maxUdc; 	/* The maximum voltage on the DC side at which the converter should operate. Converter configuration data used in power flow. Default: nullptr */
					CIMPP::Voltage minUdc; 	/* Min allowed converter DC voltage. Converter configuration data used in power flow. Default: nullptr */
					CIMPP::Integer numberOfValves; 	/* Number of valves in the converter. Used in loss calculations. Default: 0 */
					CIMPP::Voltage ratedUdc; 	/* Rated converter DC voltage, also called UdN. Converter configuration data used in power flow. Default: nullptr */
					CIMPP::Resistance resistiveLoss; 	/* Converter configuration data used in power flow. Refer to poleLossP. Default: nullptr */
					CIMPP::ActivePowerPerCurrentFlow* switchingLoss; 	/* Switching losses, relative to the base apparent power `baseS`. Refer to poleLossP. Default: nullptr */
					CIMPP::Voltage valveU0; 	/* Valve threshold voltage. Forward voltage drop when the valve is conducting. Used in loss calculations, i.e. the switchLoss depend on numberOfValves * valveU0. Default: nullptr */
					std::list<CIMPP::ACDCConverterDCTerminal*> DCTerminals; 	/*  Default: 0 */
					CIMPP::Terminal* PccTerminal; 	/* All converters` DC sides linked to this point of common coupling terminal. Default: 0 */
					CIMPP::CurrentFlow idc; 	/* Converter DC current, also called Id. Converter state variable, result from power flow. Default: nullptr */
					CIMPP::ActivePower poleLossP; 	/* The active power loss at a DC Pole  = idleLoss + switchingLoss*|Idc| + resitiveLoss*Idc^2 For lossless operation Pdc=Pac For rectifier operation with losses Pdc=Pac-lossP For inverter operation with losses Pdc=Pac+lossP Converter state variable used in power flow. Default: nullptr */
					CIMPP::Voltage uc; 	/* Converter voltage, the voltage at the AC side of the bridge. Converter state variable, result from power flow. Default: nullptr */
					CIMPP::Voltage udc; 	/* Converter voltage at the DC side, also called Ud. Converter state variable, result from power flow. Default: nullptr */
					CIMPP::ActivePower p; 	/* Active power at the point of common coupling. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution in the case a simplified power flow model is used. Default: nullptr */
					CIMPP::ReactivePower q; 	/* Reactive power at the point of common coupling. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution in the case a simplified power flow model is used. Default: nullptr */
					CIMPP::ActivePower targetPpcc; 	/* Real power injection target in AC grid, at point of common coupling. Default: nullptr */
					CIMPP::Voltage targetUdc; 	/* Target value for DC voltage magnitude. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ACDCConverter();
		virtual ~ACDCConverter();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ACDCConverter_factory();
}
#endif