#ifndef GovSteamFV2_H
#define GovSteamFV2_H
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

	/** \brief Steam turbine governor with reheat time constants and modelling of the effects of fast valve closing to reduce mechanical power. */
	class GovSteamFV2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamFV2();
		~GovSteamFV2() override;

		/** \brief (<i>Dt</i>). Default: 0.0 */
		CIMPP::PU dt;

		/** \brief Fraction of the turbine power developed by turbine sections not involved in fast valving (<i>K</i>). Default: 0.0 */
		CIMPP::PU k;

		/** \brief Alternate base used instead of machine base in equipment model if necessary (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief (<i>R</i>). Default: 0.0 */
		CIMPP::PU r;

		/** \brief Governor time constant (<i>T1</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Reheater time constant (<i>T3</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Time after initial time for valve to close (<i>Ta</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Time after initial time for valve to begin opening (<i>Tb</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Time after initial time for valve to become fully open (<i>Tc</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Time constant with which power falls off after intercept valve closure (<i>Tt</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds tt;

		/** \brief (<i>Vmax</i>) (&gt; GovSteamFV2.vmin). Default: 0.0 */
		CIMPP::PU vmax;

		/** \brief (<i>Vmin</i>) (&lt; GovSteamFV2.vmax). Default: 0.0 */
		CIMPP::PU vmin;

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

	BaseClass* GovSteamFV2_factory();
}
#endif
