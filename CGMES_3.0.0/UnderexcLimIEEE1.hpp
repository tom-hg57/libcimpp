#ifndef UnderexcLimIEEE1_H
#define UnderexcLimIEEE1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "UnderexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Type UEL1 model which has a circular limit boundary when plotted in terms of machine reactive power vs. real power output. Reference: IEEE UEL1 421.5-2005, 10.1. */
	class UnderexcLimIEEE1 : public UnderexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		UnderexcLimIEEE1();
		~UnderexcLimIEEE1() override;

		/** \brief UEL centre setting (<i>K</i><i><sub>UC</sub></i>).  Typical value = 1,38. Default: 0.0 */
		CIMPP::PU kuc;

		/** \brief UEL excitation system stabilizer gain (<i>K</i><i><sub>UF</sub></i>).  Typical value = 3,3. Default: 0.0 */
		CIMPP::PU kuf;

		/** \brief UEL integral gain (<i>K</i><i><sub>UI</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kui;

		/** \brief UEL proportional gain (<i>K</i><i><sub>UL</sub></i>).  Typical value = 100. Default: 0.0 */
		CIMPP::PU kul;

		/** \brief UEL radius setting (<i>K</i><i><sub>UR</sub></i>).  Typical value = 1,95. Default: 0.0 */
		CIMPP::PU kur;

		/** \brief UEL lead time constant (<i>T</i><i><sub>U1</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tu1;

		/** \brief UEL lag time constant (<i>T</i><i><sub>U2</sub></i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds tu2;

		/** \brief UEL lead time constant (<i>T</i><i><sub>U3</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tu3;

		/** \brief UEL lag time constant (<i>T</i><i><sub>U4</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tu4;

		/** \brief UEL maximum limit for operating point phasor magnitude (<i>V</i><i><sub>UCMAX</sub></i>).  Typical value = 5,8. Default: 0.0 */
		CIMPP::PU vucmax;

		/** \brief UEL integrator output maximum limit (<i>V</i><i><sub>UIMAX</sub></i>) (&gt; UnderexcLimIEEE1.vuimin). Default: 0.0 */
		CIMPP::PU vuimax;

		/** \brief UEL integrator output minimum limit (<i>V</i><i><sub>UIMIN</sub></i>) (&lt; UnderexcLimIEEE1.vuimax). Default: 0.0 */
		CIMPP::PU vuimin;

		/** \brief UEL output maximum limit (<i>V</i><i><sub>ULMAX</sub></i>) (&gt; UnderexcLimIEEE1.vulmin).  Typical value = 18. Default: 0.0 */
		CIMPP::PU vulmax;

		/** \brief UEL output minimum limit (<i>V</i><i><sub>ULMIN</sub></i>) (&lt; UnderexcLimIEEE1.vulmax).  Typical value = -18. Default: 0.0 */
		CIMPP::PU vulmin;

		/** \brief UEL maximum limit for radius phasor magnitude (<i>V</i><i><sub>URMAX</sub></i>).  Typical value = 5,8. Default: 0.0 */
		CIMPP::PU vurmax;

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

	BaseClass* UnderexcLimIEEE1_factory();
}
#endif
