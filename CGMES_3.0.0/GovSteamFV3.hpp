#ifndef GovSteamFV3_H
#define GovSteamFV3_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "ActivePower.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Simplified GovSteamIEEE1 steam turbine governor with Prmax limit and fast valving. */
	class GovSteamFV3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamFV3();
		~GovSteamFV3() override;

		/** \brief Nonlinear gain valve position point 1 (<i>GV1</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain valve position point 2 (<i>GV2</i>).  Typical value = 0,4. Default: 0.0 */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain valve position point 3 (<i>GV3</i>).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain valve position point 4 (<i>GV4</i>).  Typical value = 0,6. Default: 0.0 */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain valve position point 5 (<i>GV5</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU gv5;

		/** \brief Nonlinear gain valve position point 6 (<i>GV6</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv6;

		/** \brief Governor gain, (reciprocal of droop) (<i>K</i>).  Typical value = 20. Default: 0.0 */
		CIMPP::PU k;

		/** \brief Fraction of turbine power developed after first boiler pass (<i>K1</i>).  Typical value = 0,2. Default: 0.0 */
		CIMPP::PU k1;

		/** \brief Fraction of turbine power developed after second boiler pass (<i>K2</i>).  Typical value = 0,2. Default: 0.0 */
		CIMPP::PU k2;

		/** \brief Fraction of hp turbine power developed after crossover or third boiler pass (<i>K3</i>). Typical value = 0,6. Default: 0.0 */
		CIMPP::PU k3;

		/** \brief Base for power values (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Nonlinear gain power value point 1 (<i>Pgv1</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv1;

		/** \brief Nonlinear gain power value point 2 (<i>Pgv2</i>).  Typical value = 0,75. Default: 0.0 */
		CIMPP::PU pgv2;

		/** \brief Nonlinear gain power value point 3 (<i>Pgv3</i>).  Typical value = 0,91. Default: 0.0 */
		CIMPP::PU pgv3;

		/** \brief Nonlinear gain power value point 4 (<i>Pgv4</i>).  Typical value = 0,98. Default: 0.0 */
		CIMPP::PU pgv4;

		/** \brief Nonlinear gain power value point 5 (<i>Pgv5</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU pgv5;

		/** \brief Nonlinear gain power value point 6 (<i>Pgv6</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv6;

		/** \brief Maximum valve opening, PU of <i>MWbase</i> (<i>Pmax</i>) (&gt; GovSteamFV3.pmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU pmax;

		/** \brief Minimum valve opening, PU of <i>MWbase</i> (<i>Pmin</i>) (&lt; GovSteamFV3.pmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief Max. pressure in reheater (<i>Prmax</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU prmax;

		/** \brief Governor lead time constant (<i>T1</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Governor lag time constant (<i>T2</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Valve positioner time constant (<i>T3</i>) (&gt; 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Inlet piping/steam bowl time constant (<i>T4</i>) (&gt;= 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Time constant of second boiler pass (i.e. reheater) (<i>T5</i>) (&gt; 0 if fast valving is used, otherwise &gt;= 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Time constant of crossover or third boiler pass (<i>T6</i>) (&gt;= 0).  Typical value = 10. Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Time to close intercept valve (IV) (<i>Ta</i>) (&gt;= 0).  Typical value = 0,97. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Time until IV starts to reopen (<i>Tb</i>) (&gt;= 0).  Typical value = 0,98. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Time until IV is fully open (<i>Tc</i>) (&gt;= 0).  Typical value = 0,99. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Maximum valve closing velocity (<i>Uc</i>).  Unit = PU / s.  Typical value = -1. Default: 0.0 */
		CIMPP::Float uc;

		/** \brief Maximum valve opening velocity (<i>Uo</i>).  Unit = PU / s.  Typical value = 0,1. Default: 0.0 */
		CIMPP::Float uo;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* GovSteamFV3_factory();
}
#endif
