#ifndef ExcAVR7_H
#define ExcAVR7_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	IVO excitation system.
	*/
	class ExcAVR7 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAVR7();
		~ExcAVR7() override;

		CIMPP::PU a1;  /* Lead coefficient (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU a2;  /* Lag coefficient (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU a3;  /* Lead coefficient (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU a4;  /* Lag coefficient (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;4&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU a5;  /* Lead coefficient (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;5&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU a6;  /* Lag coefficient (&lt;i&gt;A&lt;/i&gt;&lt;i&gt;&lt;sub&gt;6&lt;/sub&gt;&lt;/i&gt;).  Typical value = 0,5. Default: nullptr */
		CIMPP::PU k1;  /* Gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU k3;  /* Gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;).  Typical value = 3. Default: nullptr */
		CIMPP::PU k5;  /* Gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;5&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::Seconds t1;  /* Lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,05. Default: nullptr */
		CIMPP::Seconds t2;  /* Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t3;  /* Lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t4;  /* Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t5;  /* Lead time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;5&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds t6;  /* Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;6&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::PU vmax1;  /* Lead-lag maximum limit (&lt;i&gt;Vmax1&lt;/i&gt;) (&amp;gt; ExcAVR7.vmin1).  Typical value = 5. Default: nullptr */
		CIMPP::PU vmax3;  /* Lead-lag maximum limit (&lt;i&gt;Vmax3&lt;/i&gt;) (&amp;gt; ExcAVR7.vmin3).  Typical value = 5. Default: nullptr */
		CIMPP::PU vmax5;  /* Lead-lag maximum limit (&lt;i&gt;Vmax5&lt;/i&gt;) (&amp;gt; ExcAVR7.vmin5).  Typical value = 5. Default: nullptr */
		CIMPP::PU vmin1;  /* Lead-lag minimum limit (&lt;i&gt;Vmin1&lt;/i&gt;) (&amp;lt; ExcAVR7.vmax1).  Typical value = -5. Default: nullptr */
		CIMPP::PU vmin3;  /* Lead-lag minimum limit (&lt;i&gt;Vmin3&lt;/i&gt;) (&amp;lt; ExcAVR7.vmax3).  Typical value = -5. Default: nullptr */
		CIMPP::PU vmin5;  /* Lead-lag minimum limit (&lt;i&gt;Vmin5&lt;/i&gt;) (&amp;lt; ExcAVR7.vmax5).  Typical value = -2. Default: nullptr */

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

	BaseClass* ExcAVR7_factory();
}
#endif
