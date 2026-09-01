#ifndef ExcST4B_H
#define ExcST4B_H
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
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE ST4B static excitation system with maximum inner loop feedback gain <i>Vgmax</i>. */
	class ExcST4B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST4B();
		~ExcST4B() override;

		/** \brief Rectifier loading factor proportional to commutating reactance (<i>Kc</i>) (&gt;= 0). Typical value = 0,113. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Feedback gain constant of the inner loop field regulator (<i>Kg</i>) (&gt;= 0). Typical value = 0. Default: 0.0 */
		CIMPP::PU kg;

		/** \brief Potential circuit gain coefficient (<i>Ki</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ki;

		/** \brief Voltage regulator integral gain output (<i>Kim</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kim;

		/** \brief Voltage regulator integral gain (<i>Kir</i>).  Typical value = 10,75. Default: 0.0 */
		CIMPP::PU kir;

		/** \brief Potential circuit gain coefficient (<i>Kp</i>) (&gt; 0).  Typical value = 9,3. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Voltage regulator proportional gain output (<i>Kpm</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kpm;

		/** \brief Voltage regulator proportional gain (<i>Kpr</i>).  Typical value = 10,75. Default: 0.0 */
		CIMPP::PU kpr;

		/** \brief Selector (<i>LVGate</i>). true = <i>LVGate</i> is part of the block diagram false = <i>LVGate</i> is not part of the block diagram.  Typical value = false. Default: false */
		CIMPP::Boolean lvgate;

		/** \brief Voltage regulator time constant (<i>Ta</i>) (&gt;= 0).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Potential circuit phase angle (<i>theta</i><i><sub>p</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::AngleDegrees thetap;

		/** \brief Selector (<i>UEL</i>). true = <i>UEL</i> is part of block diagram false = <i>UEL</i> is not part of block diagram.  Typical value = false. Default: false */
		CIMPP::Boolean uel;

		/** \brief Maximum excitation voltage (<i>Vbmax</i>) (&gt; 0).  Typical value = 11,63. Default: 0.0 */
		CIMPP::PU vbmax;

		/** \brief Maximum inner loop feedback voltage (<i>Vgmax</i>) (&gt;= 0).  Typical value = 5,8. Default: 0.0 */
		CIMPP::PU vgmax;

		/** \brief Maximum inner loop output (<i>Vmmax</i>) (&gt; ExcST4B.vmmin).  Typical value = 99. Default: 0.0 */
		CIMPP::PU vmmax;

		/** \brief Minimum inner loop output (<i>Vmmin</i>) (&lt; ExcST4B.vmmax).  Typical value = -99. Default: 0.0 */
		CIMPP::PU vmmin;

		/** \brief Maximum voltage regulator output (<i>Vrmax</i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (<i>Vrmin</i>) (&lt; 0).  Typical value = -0,87. Default: 0.0 */
		CIMPP::PU vrmin;

		/** \brief Reactance associated with potential source (<i>Xl</i>) (&gt;= 0).  Typical value = 0,124. Default: 0.0 */
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

	BaseClass* ExcST4B_factory();
}
#endif
