#ifndef GovSteam2_H
#define GovSteam2_H
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

#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Simplified governor. */
	class GovSteam2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovSteam2();
		~GovSteam2() override;

		/** \brief Frequency deadband (<i>DBF</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU dbf;

		/** \brief Governor gain (reciprocal of droop) (<i>K</i>).  Typical value = 20. Default: 0.0 */
		CIMPP::Float k;

		/** \brief Fuel flow maximum negative error value (<i>MN</i><i><sub>EF</sub></i>).  Typical value = -1. Default: 0.0 */
		CIMPP::PU mnef;

		/** \brief Fuel flow maximum positive error value (<i>MX</i><i><sub>EF</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU mxef;

		/** \brief Maximum fuel flow (<i>P</i><i><sub>MAX</sub></i>) (&gt; GovSteam2.pmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU pmax;

		/** \brief Minimum fuel flow (<i>P</i><i><sub>MIN</sub></i>) (&lt; GovSteam2.pmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief Governor lag time constant (<i>T</i><i><sub>1</sub></i>) (&gt; 0).  Typical value = 0,45. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Governor lead time constant (<i>T</i><i><sub>2</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t2;

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

	BaseClass* GovSteam2_factory();
}
#endif
