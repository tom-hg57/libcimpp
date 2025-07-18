#ifndef EquivalentInjection_H
#define EquivalentInjection_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "EquivalentEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "Reactance.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class ReactiveCapabilityCurve;

	/** \brief This class represents equivalent injections (generation or load).  Voltage regulation is allowed only at the point of connection. */
	class EquivalentInjection : public EquivalentEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		EquivalentInjection();
		~EquivalentInjection() override;

		/** \brief The equivalent injection using this reactive capability curve. Default: 0 */
		CIMPP::ReactiveCapabilityCurve* ReactiveCapabilityCurve;

		/** \brief Maximum active power of the injection. Default: nullptr */
		CIMPP::ActivePower maxP;

		/** \brief Used for modeling of infeed for load flow exchange. Not used for short circuit modeling.  If maxQ and minQ are not used ReactiveCapabilityCurve can be used. Default: nullptr */
		CIMPP::ReactivePower maxQ;

		/** \brief Minimum active power of the injection. Default: nullptr */
		CIMPP::ActivePower minP;

		/** \brief Used for modeling of infeed for load flow exchange. Not used for short circuit modeling.  If maxQ and minQ are not used ReactiveCapabilityCurve can be used. Default: nullptr */
		CIMPP::ReactivePower minQ;

		/** \brief Equivalent active power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::ActivePower p;

		/** \brief Equivalent reactive power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::ReactivePower q;

		/** \brief Positive sequence resistance. Used to represent Extended-Ward (IEC 60909). Usage : Extended-Ward is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Resistance r;

		/** \brief Zero sequence resistance. Used to represent Extended-Ward (IEC 60909). Usage : Extended-Ward is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Resistance r0;

		/** \brief Negative sequence resistance. Used to represent Extended-Ward (IEC 60909). Usage : Extended-Ward is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Resistance r2;

		/** \brief Specifies whether or not the EquivalentInjection has the capability to regulate the local voltage. Default: false */
		CIMPP::Boolean regulationCapability;

		/** \brief Specifies the default regulation status of the EquivalentInjection.  True is regulating.  False is not regulating. Default: false */
		CIMPP::Boolean regulationStatus;

		/** \brief The target voltage for voltage regulation. Default: nullptr */
		CIMPP::Voltage regulationTarget;

		/** \brief Positive sequence reactance. Used to represent Extended-Ward (IEC 60909). Usage : Extended-Ward is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Reactance x;

		/** \brief Zero sequence reactance. Used to represent Extended-Ward (IEC 60909). Usage : Extended-Ward is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Reactance x0;

		/** \brief Negative sequence reactance. Used to represent Extended-Ward (IEC 60909). Usage : Extended-Ward is a result of network reduction prior to the data exchange. Default: nullptr */
		CIMPP::Reactance x2;

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

	BaseClass* EquivalentInjection_factory();
}
#endif
