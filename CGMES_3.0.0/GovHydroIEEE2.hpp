#ifndef GovHydroIEEE2_H
#define GovHydroIEEE2_H
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

	/** \brief IEEE hydro turbine governor model represents plants with straightforward penstock configurations and hydraulic-dashpot governors. Ref<font color="#0f0f0f">erence: IEEE Transactions on Power Apparatus and Systems, November/December 1973, Volume PAS-92, Number 6, <i><u>Dynamic Models for Steam and Hydro Turbines in Power System Studies</u></i>, page 1904.</font> */
	class GovHydroIEEE2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroIEEE2();
		~GovHydroIEEE2() override;

		/** \brief Turbine numerator multiplier (<i>Aturb</i>).  Typical value = -1. Default: 0.0 */
		CIMPP::PU aturb;

		/** \brief Turbine denominator multiplier (<i>Bturb</i>) (&gt; 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU bturb;

		/** \brief Nonlinear gain point 1, PU gv (<i>Gv1</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain point 2, PU gv (<i>Gv2</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain point 3, PU gv (<i>Gv3</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain point 4, PU gv (<i>Gv4</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain point 5, PU gv (<i>Gv5</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv5;

		/** \brief Nonlinear gain point 6, PU gv (<i>Gv6</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv6;

		/** \brief Turbine gain (<i>Kturb</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kturb;

		/** \brief Base for power values (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Nonlinear gain point 1, PU power (<i>Pgv1</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv1;

		/** \brief Nonlinear gain point 2, PU power (<i>Pgv2</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv2;

		/** \brief Nonlinear gain point 3, PU power (<i>Pgv3</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv3;

		/** \brief Nonlinear gain point 4, PU power (<i>Pgv4</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv4;

		/** \brief Nonlinear gain point 5, PU power (<i>Pgv5</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv5;

		/** \brief Nonlinear gain point 6, PU power (<i>Pgv6</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv6;

		/** \brief Maximum gate opening (<i>Pmax</i>) (&gt; GovHydroIEEE2.pmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU pmax;

		/** \brief Minimum gate opening (<i>Pmin</i>) (&lt;GovHydroIEEE2.pmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief Permanent droop (<i>Rperm</i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU rperm;

		/** \brief Temporary droop (<i>Rtemp</i>).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU rtemp;

		/** \brief Gate servo time constant (<i>Tg</i>) (&gt;= 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Seconds tg;

		/** \brief Pilot servo valve time constant (<i>Tp</i>) (&gt;= 0).  Typical value = 0,03. Default: 0.0 */
		CIMPP::Seconds tp;

		/** \brief Dashpot time constant (<i>Tr</i>) (&gt;= 0).  Typical value = 12. Default: 0.0 */
		CIMPP::Seconds tr;

		/** \brief Water inertia time constant (<i>Tw</i>) (&gt;= 0).  Typical value = 2. Default: 0.0 */
		CIMPP::Seconds tw;

		/** \brief Maximum gate closing velocity (<i>Uc</i>) (&lt;0).  Typical value = -0,1. Default: 0.0 */
		CIMPP::Float uc;

		/** \brief Maximum gate opening velocity (<i>Uo</i>).  Unit = PU / s.  Typical value = 0,1. Default: 0.0 */
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

	BaseClass* GovHydroIEEE2_factory();
}
#endif
