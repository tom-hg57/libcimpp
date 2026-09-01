#ifndef GovSteam0_H
#define GovSteam0_H
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

	/** \brief A simplified steam turbine governor. */
	class GovSteam0 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteam0();
		~GovSteam0() override;

		/** \brief Turbine damping coefficient (<i>Dt</i>).  Unit = delta P / delta speed. Typical value = 0. Default: 0.0 */
		CIMPP::PU dt;

		/** \brief Base for power values (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Permanent droop (<i>R</i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU r;

		/** \brief Steam bowl time constant (<i>T1</i>) (&gt; 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Numerator time constant of <i>T2</i>/<i>T3</i> block (<i>T2</i>) (&gt;= 0).  Typical value = 3. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Reheater time constant (<i>T3</i>) (&gt; 0).  Typical value = 10. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Maximum valve position, PU of <i>mwcap</i> (<i>Vmax</i>) (&gt; GovSteam0.vmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU vmax;

		/** \brief Minimum valve position, PU of <i>mwcap</i> (<i>Vmin</i>) (&lt; GovSteam0.vmax).  Typical value = 0. Default: 0.0 */
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

	BaseClass* GovSteam0_factory();
}
#endif
