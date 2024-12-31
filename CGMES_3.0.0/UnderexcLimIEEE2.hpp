#ifndef UnderexcLimIEEE2_H
#define UnderexcLimIEEE2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "UnderexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Type UEL2 underexcitation limiter which has either a straight-line or multi-segment characteristic when plotted in terms of machine reactive power output vs. real power output. Reference: IEEE UEL2 421.5-2005, 10.2  (limit characteristic lookup table shown in Figure 10.4 (p 32)).
	*/
	class UnderexcLimIEEE2 : public UnderexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		UnderexcLimIEEE2();
		~UnderexcLimIEEE2() override;

		CIMPP::Float k1;  /* UEL terminal voltage exponent applied to real power input to UEL limit look-up table (&lt;i&gt;k1&lt;/i&gt;).  Typical value = 2. Default: 0.0 */
		CIMPP::Float k2;  /* UEL terminal voltage exponent applied to reactive power output from UEL limit look-up table (&lt;i&gt;k2&lt;/i&gt;).  Typical value = 2. Default: 0.0 */
		CIMPP::PU kfb;  /* Gain associated with optional integrator feedback input signal to UEL (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FB&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kuf;  /* UEL excitation system stabilizer gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UF&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU kui;  /* UEL integral gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UI&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU kul;  /* UEL proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UL&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,8. Default: nullptr */
		CIMPP::PU p0;  /* Real power values for endpoints (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;0&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU p1;  /* Real power values for endpoints (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,3. Default: nullptr */
		CIMPP::PU p10;  /* Real power values for endpoints (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;10&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU p2;  /* Real power values for endpoints (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,6. Default: nullptr */
		CIMPP::PU p3;  /* Real power values for endpoints (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,9. Default: nullptr */
		CIMPP::PU p4;  /* Real power values for endpoints (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;4&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1,02. Default: nullptr */
		CIMPP::PU p5;  /* Real power values for endpoints (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;5&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU p6;  /* Real power values for endpoints (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;6&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU p7;  /* Real power values for endpoints (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;7&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU p8;  /* Real power values for endpoints (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;8&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU p9;  /* Real power values for endpoints (&lt;i&gt;P&lt;/i&gt;&lt;i&gt;&lt;sub&gt;9&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU q0;  /* Reactive power values for endpoints (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;0&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,31. Default: nullptr */
		CIMPP::PU q1;  /* Reactive power values for endpoints (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,31. Default: nullptr */
		CIMPP::PU q10;  /* Reactive power values for endpoints (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;10&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU q2;  /* Reactive power values for endpoints (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,28. Default: nullptr */
		CIMPP::PU q3;  /* Reactive power values for endpoints (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;).  Typical value = -0,21. Default: nullptr */
		CIMPP::PU q4;  /* Reactive power values for endpoints (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;4&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0. Default: nullptr */
		CIMPP::PU q5;  /* Reactive power values for endpoints (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;5&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU q6;  /* Reactive power values for endpoints (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;6&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU q7;  /* Reactive power values for endpoints (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;7&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU q8;  /* Reactive power values for endpoints (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;8&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::PU q9;  /* Reactive power values for endpoints (&lt;i&gt;Q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;9&lt;/sub&gt;&lt;/i&gt;). Default: nullptr */
		CIMPP::Seconds tu1;  /* UEL lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;U1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tu2;  /* UEL lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;U2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tu3;  /* UEL lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;U3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tu4;  /* UEL lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;U4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tul;  /* Time constant associated with optional integrator feedback input signal to UEL (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UL&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tup;  /* Real power filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UP&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::Seconds tuq;  /* Reactive power filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UQ&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tuv;  /* Voltage filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UV&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::PU vuimax;  /* UEL integrator output maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UIMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; UnderexcLimIEEE2.vuimin).  Typical value = 0,25. Default: nullptr */
		CIMPP::PU vuimin;  /* UEL integrator output minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UIMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; UnderexcLimIEEE2.vuimax).  Typical value = 0. Default: nullptr */
		CIMPP::PU vulmax;  /* UEL output maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ULMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; UnderexcLimIEEE2.vulmin).  Typical value = 0,25. Default: nullptr */
		CIMPP::PU vulmin;  /* UEL output minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ULMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; UnderexcLimIEEE2.vulmax).  Typical value = 0. Default: nullptr */

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

	BaseClass* UnderexcLimIEEE2_factory();
}
#endif