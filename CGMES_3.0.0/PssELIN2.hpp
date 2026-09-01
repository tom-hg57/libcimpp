#ifndef PssELIN2_H
#define PssELIN2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Power system stabilizer typically associated with ExcELIN2 (though PssIEEE2B or Pss2B can also be used). */
	class PssELIN2 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssELIN2();
		~PssELIN2() override;

		/** \brief Coefficient (<i>a_PSS</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU apss;

		/** \brief Gain (<i>Ks1</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ks1;

		/** \brief Gain (<i>Ks2</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU ks2;

		/** \brief Coefficient (<i>p_PSS</i>) (&gt;= 0 and &lt;= 4).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU ppss;

		/** \brief PSS limiter (<i>psslim</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU psslim;

		/** \brief Time constant (<i>Ts1</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ts1;

		/** \brief Time constant (<i>Ts2</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds ts2;

		/** \brief Time constant (<i>Ts3</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds ts3;

		/** \brief Time constant (<i>Ts4</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds ts4;

		/** \brief Time constant (<i>Ts5</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ts5;

		/** \brief Time constant (<i>Ts6</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds ts6;

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

	BaseClass* PssELIN2_factory();
}
#endif
