#ifndef GovHydroPID2_H
#define GovHydroPID2_H
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
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Hydro turbine and governor. Represents plants with straight forward penstock configurations and "three term" electro-hydraulic governors (i.e. Woodard electronic). */
	class GovHydroPID2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroPID2();
		~GovHydroPID2() override;

		/** \brief Factor multiplying Tw (Atw).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU atw;

		/** \brief Turbine damping factor (D).  Unit = delta P / delta speed.  Typical Value = 0. Default: 0.0 */
		CIMPP::PU d;

		/** \brief Feedback signal type flag (Flag). true = use gate position feedback signal false = use Pe. Default: false */
		CIMPP::Boolean feedbackSignal;

		/** \brief Gate opening at speed no load (G0).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU g0;

		/** \brief Intermediate gate opening (G1).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU g1;

		/** \brief Intermediate gate opening (G2).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU g2;

		/** \brief Maximum gate opening (Gmax).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU gmax;

		/** \brief Minimum gate opening (Gmin).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU gmin;

		/** \brief Derivative gain (Kd).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU kd;

		/** \brief Reset gain (Ki).  Unit = PU/ sec.  Typical Value = 0. Default: 0.0 */
		CIMPP::Simple_Float ki;

		/** \brief Proportional gain (Kp).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Base for power values (MWbase) (>0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Power at gate opening G1 (P1).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU p1;

		/** \brief Power at gate opening G2 (P2).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU p2;

		/** \brief Power at full opened gate (P3).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU p3;

		/** \brief Permanent drop (Rperm).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU rperm;

		/** \brief Controller time constant (Ta) (>0).  Typical Value = 0. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Gate servo time constant (Tb) (>0).  Typical Value = 0. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Speed detector time constant (Treg).  Typical Value = 0. Default: 0.0 */
		CIMPP::Seconds treg;

		/** \brief Water inertia time constant (Tw) (>0).  Typical Value = 0. Default: 0.0 */
		CIMPP::Seconds tw;

		/** \brief Maximum gate opening velocity (Velmax).  Unit = PU/sec.  Typical Value = 0. Default: 0.0 */
		CIMPP::Simple_Float velmax;

		/** \brief Maximum gate closing velocity (Velmin).  Unit = PU/sec.  Typical Value = 0. Default: 0.0 */
		CIMPP::Simple_Float velmin;

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

	BaseClass* GovHydroPID2_factory();
}
#endif
