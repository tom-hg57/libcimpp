#ifndef ExcIEEEST4B_H
#define ExcIEEEST4B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE Std 421.5-2005 type ST4B model. This model is a variation of the Type ST3A model, with a proportional plus integral (PI) regulator block replacing the lag-lead regulator characteristic that is in the ST3A model. Both potential and compound source rectifier excitation systems are modeled.  The PI regulator blocks have non-windup limits that are represented. The voltage regulator of this model is typically implemented digitally.  Reference: IEEE Standard 421.5-2005 Section 7.4. */
	class ExcIEEEST4B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST4B();
		~ExcIEEEST4B() override;

		/** \brief Rectifier loading factor proportional to commutating reactance (K). Typical Value = 0.113. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Feedback gain constant of the inner loop field regulator (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kg;

		/** \brief Potential circuit gain coefficient (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Voltage regulator integral gain output (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kim;

		/** \brief Voltage regulator integral gain (K).  Typical Value = 10.75. Default: nullptr */
		CIMPP::PU kir;

		/** \brief Potential circuit gain coefficient (K).  Typical Value = 9.3. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Voltage regulator proportional gain output (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kpm;

		/** \brief Voltage regulator proportional gain (K).  Typical Value = 10.75. Default: nullptr */
		CIMPP::PU kpr;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0.02. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Potential circuit phase angle (thetap).  Typical Value = 0. Default: nullptr */
		CIMPP::AngleDegrees thetap;

		/** \brief Maximum excitation voltage (V).  Typical Value = 11.63. Default: nullptr */
		CIMPP::PU vbmax;

		/** \brief Maximum inner loop output (V).  Typical Value = 99. Default: nullptr */
		CIMPP::PU vmmax;

		/** \brief Minimum inner loop output (V).  Typical Value = -99. Default: nullptr */
		CIMPP::PU vmmin;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -0.87. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief Reactance associated with potential source (X).  Typical Value = 0.124. Default: nullptr */
		CIMPP::PU xl;

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

	BaseClass* ExcIEEEST4B_factory();
}
#endif
