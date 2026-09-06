#ifndef ExcSEXS_H
#define ExcSEXS_H
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
#include "CimClassDetails.hpp"

#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Simplified excitation system. */
	class ExcSEXS : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcSEXS();
		~ExcSEXS() override;

		/** \brief Field voltage clipping maximum limit (<i>Efdmax</i>) (&gt; ExcSEXS.efdmin).  Typical value = 5. Default: 0.0 */
		CIMPP::PU efdmax;

		/** \brief Field voltage clipping minimum limit (<i>Efdmin</i>) (&lt; ExcSEXS.efdmax).  Typical value = -5. Default: 0.0 */
		CIMPP::PU efdmin;

		/** \brief Maximum field voltage output (<i>Emax</i>) (&gt; ExcSEXS.emin).  Typical value = 5. Default: 0.0 */
		CIMPP::PU emax;

		/** \brief Minimum field voltage output (<i>Emin</i>) (&lt; ExcSEXS.emax).  Typical value = -5. Default: 0.0 */
		CIMPP::PU emin;

		/** \brief Gain (<i>K</i>) (&gt; 0).  Typical value = 100. Default: 0.0 */
		CIMPP::PU k;

		/** \brief PI controller gain (<i>Kc</i>) (&gt; 0 if ExcSEXS.tc &gt; 0).  Typical value = 0,08. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Gain reduction ratio of lag-lead element (<i>[Ta / Tb]</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Float tatb;

		/** \brief Denominator time constant of lag-lead block (<i>Tb</i>) (&gt;= 0).  Typical value = 10. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief PI controller phase lead time constant (<i>Tc</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Time constant of gain block (<i>Te</i>) (&gt; 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds te;

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

	BaseClass* ExcSEXS_factory();
}
#endif
