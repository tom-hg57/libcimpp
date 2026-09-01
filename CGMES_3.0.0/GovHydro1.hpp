#ifndef GovHydro1_H
#define GovHydro1_H
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

	/** \brief Basic hydro turbine governor. */
	class GovHydro1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro1();
		~GovHydro1() override;

		/** \brief Turbine gain (<i>At</i>) (&gt; 0).  Typical value = 1,2. Default: 0.0 */
		CIMPP::PU at;

		/** \brief Turbine damping factor (<i>Dturb</i>) (&gt;= 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU dturb;

		/** \brief Maximum gate opening (<i>Gmax</i>) (&gt; 0 and &gt; GovHydro.gmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU gmax;

		/** \brief Minimum gate opening (<i>Gmin</i>) (&gt;= 0 and &lt; GovHydro1.gmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gmin;

		/** \brief Turbine nominal head (<i>hdam</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU hdam;

		/** \brief Base for power values (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief No-load flow at nominal head (<i>qnl</i>) (&gt;= 0).  Typical value = 0,08. Default: 0.0 */
		CIMPP::PU qnl;

		/** \brief Permanent droop (<i>R</i>) (&gt; 0).  Typical value = 0,04. Default: 0.0 */
		CIMPP::PU rperm;

		/** \brief Temporary droop (<i>r</i>) (&gt; GovHydro1.rperm).  Typical value = 0,3. Default: 0.0 */
		CIMPP::PU rtemp;

		/** \brief Filter time constant (<i>Tf</i>) (&gt; 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Gate servo time constant (<i>Tg</i>) (&gt; 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Seconds tg;

		/** \brief Washout time constant (<i>Tr</i>) (&gt; 0).  Typical value = 5. Default: 0.0 */
		CIMPP::Seconds tr;

		/** \brief Water inertia time constant (<i>Tw</i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tw;

		/** \brief Maximum gate velocity (<i>Vlem</i>) (&gt; 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Float velm;

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

	BaseClass* GovHydro1_factory();
}
#endif
