#ifndef GovSteamIEEE1_H
#define GovSteamIEEE1_H
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

	/** \brief IEEE steam turbine governor model. Ref<font color="#0f0f0f">erence: IEEE Transactions on Power Apparatus and Systems, November/December 1973, Volume PAS-92, Number 6, <i><u>Dynamic Models for Steam and Hydro Turbines in Power System Studies</u></i>, page 1904.</font> */
	class GovSteamIEEE1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamIEEE1();
		~GovSteamIEEE1() override;

		/** \brief Governor gain (reciprocal of droop) (<i>K</i>) (&gt; 0).  Typical value = 25. Default: 0.0 */
		CIMPP::PU k;

		/** \brief Fraction of HP shaft power after first boiler pass (<i>K1</i>).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Float k1;

		/** \brief Fraction of LP shaft power after first boiler pass (<i>K2</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k2;

		/** \brief Fraction of HP shaft power after second boiler pass (<i>K3</i>).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float k3;

		/** \brief Fraction of LP shaft power after second boiler pass (<i>K4</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k4;

		/** \brief Fraction of HP shaft power after third boiler pass (<i>K5</i>).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Float k5;

		/** \brief Fraction of LP shaft power after third boiler pass (<i>K6</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k6;

		/** \brief Fraction of HP shaft power after fourth boiler pass (<i>K7</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k7;

		/** \brief Fraction of LP shaft power after fourth boiler pass (<i>K8</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::Float k8;

		/** \brief Base for power values (<i>MWbase</i>) (&gt; 0)<i>. </i>Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Maximum valve opening (<i>Pmax</i>) (&gt; GovSteamIEEE1.pmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU pmax;

		/** \brief Minimum valve opening (<i>Pmin</i>) (&gt;= 0 and &lt; GovSteamIEEE1.pmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief Governor lag time constant (<i>T1</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Governor lead time constant (<i>T2</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Valve positioner time constant (<i>T3</i>) (&gt; 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Inlet piping/steam bowl time constant (<i>T4</i>) (&gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Time constant of second boiler pass (<i>T5</i>) (&gt;= 0).  Typical value = 5. Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Time constant of third boiler pass (<i>T6</i>) (&gt;= 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Time constant of fourth boiler pass (<i>T7</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t7;

		/** \brief Maximum valve closing velocity (<i>Uc</i>) (&lt; 0).  Unit = PU / s.  Typical value = -10. Default: 0.0 */
		CIMPP::Float uc;

		/** \brief Maximum valve opening velocity (<i>Uo</i>) (&gt; 0).  Unit = PU / s.  Typical value = 1. Default: 0.0 */
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

	BaseClass* GovSteamIEEE1_factory();
}
#endif
