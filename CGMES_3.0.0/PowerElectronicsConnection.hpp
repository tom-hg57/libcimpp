#ifndef PowerElectronicsConnection_H
#define PowerElectronicsConnection_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "RegulatingCondEq.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "ApparentPower.hpp"
#include "ReactivePower.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class PowerElectronicsUnit;
	class WindTurbineType3or4Dynamics;

	/** \brief A connection to the AC network for energy production or consumption that uses power electronics rather than rotating machines. */
	class PowerElectronicsConnection : public RegulatingCondEq
	{
	public:
		/* constructor initialising all attributes to null */
		PowerElectronicsConnection();
		~PowerElectronicsConnection() override;

		/** \brief An AC network connection may have several power electronics units connecting through it. Default: 0 */
		CIMPP::PowerElectronicsUnit* PowerElectronicsUnit;

		/** \brief The wind turbine type 3 or type 4 dynamics model associated with this power electronics connection. Default: 0 */
		CIMPP::WindTurbineType3or4Dynamics* WindTurbineType3or4Dynamics;

		/** \brief Maximum reactive power limit. This is the maximum (nameplate) limit for the unit. Default: nullptr */
		CIMPP::ReactivePower maxQ;

		/** \brief Minimum reactive power limit for the unit. This is the minimum (nameplate) limit for the unit. Default: nullptr */
		CIMPP::ReactivePower minQ;

		/** \brief Active power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution. Default: nullptr */
		CIMPP::ActivePower p;

		/** \brief Reactive power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution. Default: nullptr */
		CIMPP::ReactivePower q;

		/** \brief Nameplate apparent power rating for the unit. The attribute shall have a positive value. Default: nullptr */
		CIMPP::ApparentPower ratedS;

		/** \brief Rated voltage (nameplate data, Ur in IEC 60909-0). It is primarily used for short circuit data exchange according to IEC 60909. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage ratedU;

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

	BaseClass* PowerElectronicsConnection_factory();
}
#endif
