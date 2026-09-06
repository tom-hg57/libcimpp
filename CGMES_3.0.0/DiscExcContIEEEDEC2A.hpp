#ifndef DiscExcContIEEEDEC2A_H
#define DiscExcContIEEEDEC2A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DiscontinuousExcitationControlDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE type DEC2A model for discontinuous excitation control. This system provides transient excitation boosting via an open-loop control as initiated by a trigger signal generated remotely. Reference: IEEE 421.5-2005 12.3. */
	class DiscExcContIEEEDEC2A : public DiscontinuousExcitationControlDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		DiscExcContIEEEDEC2A();
		~DiscExcContIEEEDEC2A() override;

		/** \brief Discontinuous controller time constant (<i>T</i><i><sub>D1</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds td1;

		/** \brief Discontinuous controller washout time constant (<i>T</i><i><sub>D2</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds td2;

		/** \brief Limiter (<i>V</i><i><sub>DMAX</sub></i>) (&gt; DiscExcContIEEEDEC2A.vdmin). Default: 0.0 */
		CIMPP::PU vdmax;

		/** \brief Limiter (<i>V</i><i><sub>DMIN</sub></i>) (&lt; DiscExcContIEEEDEC2A.vdmax). Default: 0.0 */
		CIMPP::PU vdmin;

		/** \brief Discontinuous controller input reference (<i>V</i><i><sub>K</sub></i>). Default: 0.0 */
		CIMPP::PU vk;

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

	BaseClass* DiscExcContIEEEDEC2A_factory();
}
#endif
