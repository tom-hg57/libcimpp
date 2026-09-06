#ifndef ExcIEEEST4B_H
#define ExcIEEEST4B_H
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

#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE 421.5-2005 type ST4B model. This model is a variation of the type ST3A model, with a proportional plus integral (PI) regulator block replacing the lag-lead regulator characteristic that is in the ST3A model. Both potential and compound source rectifier excitation systems are modelled.  The PI regulator blocks have non-windup limits that are represented. The voltage regulator of this model is typically implemented digitally. Reference: IEEE 421.5-2005, 7.4. */
	class ExcIEEEST4B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST4B();
		~ExcIEEEST4B() override;

		/** \brief Rectifier loading factor proportional to commutating reactance (<i>K</i><i><sub>C</sub></i>) (&gt;= 0). Typical value = 0,113. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Feedback gain constant of the inner loop field regulator (<i>K</i><i><sub>G</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kg;

		/** \brief Potential circuit gain coefficient (<i>K</i><i><sub>I</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ki;

		/** \brief Voltage regulator integral gain output (<i>K</i><i><sub>IM</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kim;

		/** \brief Voltage regulator integral gain (<i>K</i><i><sub>IR</sub></i>).  Typical value = 10,75. Default: 0.0 */
		CIMPP::PU kir;

		/** \brief Potential circuit gain coefficient (<i>K</i><i><sub>P</sub></i>) (&gt; 0).  Typical value = 9,3. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Voltage regulator proportional gain output (<i>K</i><i><sub>PM</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kpm;

		/** \brief Voltage regulator proportional gain (<i>K</i><i><sub>PR</sub></i>).  Typical value = 10,75. Default: 0.0 */
		CIMPP::PU kpr;

		/** \brief Voltage regulator time constant (<i>T</i><i><sub>A</sub></i>) (&gt;= 0).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Potential circuit phase angle (<i>thetap</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::AngleDegrees thetap;

		/** \brief Maximum excitation voltage (<i>V</i><i><sub>BMax</sub></i>) (&gt; 0).  Typical value = 11,63. Default: 0.0 */
		CIMPP::PU vbmax;

		/** \brief Maximum inner loop output (<i>V</i><i><sub>MMax</sub></i>) (&gt; ExcIEEEST4B.vmmin).  Typical value = 99. Default: 0.0 */
		CIMPP::PU vmmax;

		/** \brief Minimum inner loop output (<i>V</i><i><sub>MMin</sub></i>) (&lt; ExcIEEEST4B.vmmax).  Typical value = -99. Default: 0.0 */
		CIMPP::PU vmmin;

		/** \brief Maximum voltage regulator output (<i>V</i><i><sub>RMAX</sub></i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (<i>V</i><i><sub>RMIN</sub></i>) (&lt; 0).  Typical value = -0,87. Default: 0.0 */
		CIMPP::PU vrmin;

		/** \brief Reactance associated with potential source (<i>X</i><i><sub>L</sub></i>) (&gt;= 0).  Typical value = 0,124. Default: 0.0 */
		CIMPP::PU xl;

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

	BaseClass* ExcIEEEST4B_factory();
}
#endif
