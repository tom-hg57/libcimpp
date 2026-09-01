#ifndef GovSteamCC_H
#define GovSteamCC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "CrossCompoundTurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Cross compound turbine governor.  Unlike tandem compound units, cross compound units are not on the same shaft. */
	class GovSteamCC : public CrossCompoundTurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteamCC();
		~GovSteamCC() override;

		/** \brief HP damping factor (<i>Dhp</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU dhp;

		/** \brief LP damping factor (<i>Dlp</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU dlp;

		/** \brief Fraction of HP power ahead of reheater (<i>Fhp</i>).  Typical value = 0,3. Default: 0.0 */
		CIMPP::PU fhp;

		/** \brief Fraction of LP power ahead of reheater (<i>Flp</i>).  Typical value = 0,7. Default: 0.0 */
		CIMPP::PU flp;

		/** \brief Base for power values (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Maximum HP value position (<i>Pmaxhp</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU pmaxhp;

		/** \brief Maximum LP value position (<i>Pmaxlp</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU pmaxlp;

		/** \brief HP governor droop (<i>Rhp</i>) (&gt; 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU rhp;

		/** \brief LP governor droop (<i>Rlp</i>) (&gt; 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU rlp;

		/** \brief HP governor time constant (<i>T1hp</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t1hp;

		/** \brief LP governor time constant (<i>T1lp</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t1lp;

		/** \brief HP turbine time constant (<i>T3hp</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t3hp;

		/** \brief LP turbine time constant (<i>T3lp</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t3lp;

		/** \brief HP turbine time constant (<i>T4hp</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t4hp;

		/** \brief LP turbine time constant (<i>T4lp</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t4lp;

		/** \brief HP reheater time constant (<i>T5hp</i>) (&gt;= 0).  Typical value = 10. Default: 0.0 */
		CIMPP::Seconds t5hp;

		/** \brief LP reheater time constant (<i>T5lp</i>) (&gt;= 0).  Typical value = 10. Default: 0.0 */
		CIMPP::Seconds t5lp;

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

	BaseClass* GovSteamCC_factory();
}
#endif
