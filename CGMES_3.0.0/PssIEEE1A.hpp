#ifndef PssIEEE1A_H
#define PssIEEE1A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE 421.5-2005 type PSS1A power system stabilizer model. PSS1A is the generalized form of a PSS with a single input signal.  Reference: IEEE 1A 421.5-2005, 8.1. */
	class PssIEEE1A : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssIEEE1A();
		~PssIEEE1A() override;

		/** \brief PSS signal conditioning frequency filter constant (&lt;i&gt;A1&lt;/i&gt;).  Typical value = 0,061. Default: nullptr */
		CIMPP::PU a1;

		/** \brief PSS signal conditioning frequency filter constant (&lt;i&gt;A2&lt;/i&gt;).  Typical value = 0,0017. Default: nullptr */
		CIMPP::PU a2;

		/** \brief Type of input signal (rotorAngularFrequencyDeviation, generatorElectricalPower, or busFrequencyDeviation).  Typical value = rotorAngularFrequencyDeviation. Default: 0 */
		CIMPP::InputSignalKind inputSignalType;

		/** \brief Stabilizer gain (&lt;i&gt;Ks&lt;/i&gt;).  Typical value = 5. Default: nullptr */
		CIMPP::PU ks;

		/** \brief Lead/lag time constant (&lt;i&gt;T1&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Lead/lag time constant (&lt;i&gt;T2&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,03. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Lead/lag time constant (&lt;i&gt;T3&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Lead/lag time constant (&lt;i&gt;T4&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,03. Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Washout time constant (&lt;i&gt;T5&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Transducer time constant (&lt;i&gt;T6&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,01. Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Maximum stabilizer output (&lt;i&gt;Vrmax&lt;/i&gt;) (&amp;gt; PssIEEE1A.vrmin).  Typical value = 0,05. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum stabilizer output (&lt;i&gt;Vrmin&lt;/i&gt;) (&amp;lt; PssIEEE1A.vrmax).  Typical value = -0,05. Default: nullptr */
		CIMPP::PU vrmin;

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

	BaseClass* PssIEEE1A_factory();
}
#endif
