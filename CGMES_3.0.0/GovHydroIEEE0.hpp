#ifndef GovHydroIEEE0_H
#define GovHydroIEEE0_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE simplified hydro governor-turbine model.  Used for mechanical-hydraulic and electro-hydraulic turbine governors, with or without steam feedback. Typical values given are for mechanical-hydraulic turbine-governor. Ref<font color="#0f0f0f">erence: IEEE Transactions on Power Apparatus and Systems, November/December 1973, Volume PAS-92, Number 6, <i><u>Dynamic Models for Steam and Hydro Turbines in Power System Studies</u></i>, page 1904.</font> */
	class GovHydroIEEE0 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroIEEE0();
		~GovHydroIEEE0() override;

		/** \brief Governor gain (<i>K)</i>. Default: 0.0 */
		CIMPP::PU k;

		/** \brief Base for power values (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Gate maximum (<i>Pmax</i>) (&gt; GovHydroIEEE0.pmin). Default: 0.0 */
		CIMPP::PU pmax;

		/** \brief Gate minimum (<i>Pmin</i>) (&lt; GovHydroIEEE.pmax). Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief Governor lag time constant (<i>T1</i>) (&gt;= 0).  Typical value = 0,25. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Governor lead time constant (<i>T2)</i> (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Gate actuator time constant (<i>T3</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Water starting time (<i>T4</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t4;

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

	BaseClass* GovHydroIEEE0_factory();
}
#endif
