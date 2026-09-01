#ifndef ExcST3A_H
#define ExcST3A_H
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

	/** \brief Modified IEEE ST3A static excitation system with added speed multiplier. */
	class ExcST3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST3A();
		~ExcST3A() override;

		/** \brief Maximum AVR output (<i>Efdmax</i>) (&gt;= 0).  Typical value = 6,9. Default: 0.0 */
		CIMPP::PU efdmax;

		/** \brief Rectifier loading factor proportional to commutating reactance (<i>Kc</i>) (&gt;= 0). Typical value = 1,1. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Feedback gain constant of the inner loop field regulator (<i>Kg</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kg;

		/** \brief Potential circuit gain coefficient (<i>K</i><i><sub>i</sub></i>) (&gt;= 0).  Typical value = 4,83. Default: 0.0 */
		CIMPP::PU ki;

		/** \brief AVR gain (<i>Kj</i>) (&gt; 0).  Typical value = 200. Default: 0.0 */
		CIMPP::PU kj;

		/** \brief Forward gain constant of the inner loop field regulator (<i>Km</i>) (&gt; 0).  Typical value = 7,04. Default: 0.0 */
		CIMPP::PU km;

		/** \brief Potential source gain (<i>K</i><i><sub>p</sub></i>) (&gt; 0).  Typical value = 4,37. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (<i>Ks</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ks;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (<i>Ks1</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ks1;

		/** \brief Voltage regulator time constant (<i>Tb</i>) (&gt;= 0).  Typical value = 6,67. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (<i>Tc</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Potential circuit phase angle (<i>theta</i><i><sub>p</sub></i>).  Typical value = 20. Default: 0.0 */
		CIMPP::AngleDegrees thetap;

		/** \brief Forward time constant of inner loop field regulator (<i>Tm</i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tm;

		/** \brief Maximum excitation voltage (<i>Vbmax</i>) (&gt; 0).  Typical value = 8,63. Default: 0.0 */
		CIMPP::PU vbmax;

		/** \brief Maximum inner loop feedback voltage (<i>Vgmax</i>) (&gt;= 0).  Typical value = 6,53. Default: 0.0 */
		CIMPP::PU vgmax;

		/** \brief Maximum voltage regulator input limit (<i>Vimax</i>) (&gt; 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (<i>Vimin</i>) (&lt; 0).  Typical value = -0,2. Default: 0.0 */
		CIMPP::PU vimin;

		/** \brief Maximum voltage regulator output (<i>Vrmax</i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (<i>Vrmin</i>) (&lt; 0).  Typical value = -1. Default: 0.0 */
		CIMPP::PU vrmin;

		/** \brief Reactance associated with potential source (<i>Xl</i>) (&gt;= 0).  Typical value = 0,09. Default: 0.0 */
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

	BaseClass* ExcST3A_factory();
}
#endif
