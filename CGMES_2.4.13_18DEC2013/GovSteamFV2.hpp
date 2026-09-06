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

	/** \brief Steam turbine governor with reheat time constants and modeling of the effects of fast valve closing to reduce mechanical power. */
	class GovSteamFV2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamFV2();
		~GovSteamFV2() override;

		/** \brief (Dt). Default: 0.0 */
		CIMPP::PU dt;

		/** \brief Fraction of the turbine power developed by turbine sections not involved in fast valving (K). Default: 0.0 */
		CIMPP::PU k;

		/** \brief Alternate Base used instead of Machine base in equipment model if necessary (MWbase) (>0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief (R). Default: 0.0 */
		CIMPP::PU r;

		/** \brief Governor time constant (T1). Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Reheater time constant (T3). Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Time after initial time for valve to close (Ta). Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Time after initial time for valve to begin opening (Tb). Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Time after initial time for valve to become fully open (Tc). Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Initial time to begin fast valving (Ti). Default: 0.0 */
		CIMPP::Seconds ti;

		/** \brief Time constant with which power falls off after intercept valve closure (Tt). Default: 0.0 */
		CIMPP::Seconds tt;

		/** \brief (Vmax). Default: 0.0 */
		CIMPP::PU vmax;

		/** \brief (Vmin). Default: 0.0 */
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
