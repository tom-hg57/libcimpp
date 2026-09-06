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
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Hydro turbine and governor. Represents plants with straightforward penstock configurations and "three term" electro-hydraulic governors (i.e. Woodward<sup>TM</sup> electronic). [Footnote: Woodward electronic governors are an example of suitable products available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of these products.] */
	class GovHydroPID2 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroPID2();
		~GovHydroPID2() override;

		/** \brief Factor multiplying <i>Tw</i> (<i>Atw</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU atw;

		/** \brief Turbine damping factor (<i>D</i>).  Unit = delta P / delta speed.  Typical value = 0. Default: 0.0 */
		CIMPP::PU d;

		/** \brief Feedback signal type flag (<i>Flag</i>). true = use gate position feedback signal false = use Pe. Default: false */
		CIMPP::Boolean feedbackSignal;

		/** \brief Gate opening at speed no load (<i>G0</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU g0;

		/** \brief Intermediate gate opening (<i>G1</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU g1;

		/** \brief Intermediate gate opening (<i>G2</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU g2;

		/** \brief Maximum gate opening (<i>Gmax</i>) (&gt; GovHydroPID2.gmin).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gmax;

		/** \brief Minimum gate opening (<i>Gmin</i>) (&gt; GovHydroPID2.gmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gmin;

		/** \brief Derivative gain (<i>Kd</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kd;

		/** \brief Reset gain (<i>Ki</i>).  Unit = PU/s.  Typical value = 0. Default: 0.0 */
		CIMPP::Float ki;

		/** \brief Proportional gain (<i>Kp</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Base for power values (<i>MWbase</i>) (&gt;0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Power at gate opening <i>G1</i> (<i>P1</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU p1;

		/** \brief Power at gate opening G2 (<i>P2</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU p2;

		/** \brief Power at full opened gate (<i>P3</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU p3;

		/** \brief Permanent drop (<i>Rperm</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU rperm;

		/** \brief Controller time constant (<i>Ta</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Gate servo time constant (<i>Tb</i>) (&gt; 0). Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Speed detector time constant (<i>Treg</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds treg;

		/** \brief Water inertia time constant (<i>Tw</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tw;

		/** \brief Maximum gate opening velocity (<i>Velmax</i>) (&lt; GovHydroPID2.velmin).  Unit = PU / s.  Typical value = 0. Default: 0.0 */
		CIMPP::Float velmax;

		/** \brief Maximum gate closing velocity (<i>Velmin</i>) (&gt; GovHydroPID2.velmax).  Unit = PU / s.  Typical value = 0. Default: 0.0 */
		CIMPP::Float velmin;

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
