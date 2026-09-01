#ifndef GovHydroPID_H
#define GovHydroPID_H
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
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief PID governor and turbine. */
	class GovHydroPID : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroPID();
		~GovHydroPID() override;

		/** \brief Turbine numerator multiplier (<i>Aturb</i>) (see parameter detail 3).  Typical value -1. Default: 0.0 */
		CIMPP::PU aturb;

		/** \brief Turbine denominator multiplier (<i>Bturb</i>) (see parameter detail 3).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU bturb;

		/** \brief Intentional dead-band width (<i>db1</i>).  Unit = Hz.  Typical value = 0. Default: 0.0 */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (<i>db2</i>).  Unit = MW.  Typical value = 0. Default: 0.0 */
		CIMPP::ActivePower db2;

		/** \brief Intentional db hysteresis (<i>eps</i>).  Unit = Hz.  Typical value = 0. Default: 0.0 */
		CIMPP::Frequency eps;

		/** \brief Nonlinear gain point 1, PU gv (<i>Gv1</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain point 2, PU gv (<i>Gv2</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain point 3, PU gv (<i>Gv3</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain point 4, PU gv (<i>Gv4</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain point 5, PU gv (<i>Gv5</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv5;

		/** \brief Nonlinear gain point 6, PU gv (<i>Gv6</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv6;

		/** \brief Input signal switch (<i>Flag</i>).  true = <i>Pe</i> input is used false = feedback is received from <i>CV</i>. <i>Flag</i> is normally dependent on <i>Tt</i>.  If <i>Tt </i>is zero, <i>Flag</i> is set to false. If <i>Tt</i> is not zero, <i>Flag</i> is set to true.   Typical value = true. Default: false */
		CIMPP::Boolean inputSignal;

		/** \brief Derivative gain (<i>Kd</i>).  Typical value = 1,11. Default: 0.0 */
		CIMPP::PU kd;

		/** \brief Gate servo gain (<i>Kg</i>).  Typical value = 2,5. Default: 0.0 */
		CIMPP::PU kg;

		/** \brief Integral gain (<i>Ki</i>).  Typical value = 0,36. Default: 0.0 */
		CIMPP::PU ki;

		/** \brief Proportional gain (<i>Kp</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Base for power values (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Nonlinear gain point 1, PU power (<i>Pgv1</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv1;

		/** \brief Nonlinear gain point 2, PU power (<i>Pgv2</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv2;

		/** \brief Nonlinear gain point 3, PU power (<i>Pgv3</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv3;

		/** \brief Nonlinear gain point 4, PU power (<i>Pgv4</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv4;

		/** \brief Nonlinear gain point 5, PU power (<i>Pgv5</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv5;

		/** \brief Nonlinear gain point 6, PU power (<i>Pgv6</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv6;

		/** \brief Maximum gate opening, PU of MWbase (<i>Pmax</i>) (&gt; GovHydroPID.pmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU pmax;

		/** \brief Minimum gate opening, PU of MWbase (<i>Pmin</i>) (&lt; GovHydroPID.pmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief Steady state droop (<i>R</i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU r;

		/** \brief Input filter time constant (<i>Td</i>) (&gt;= 0).  If = 0, block is bypassed.  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds td;

		/** \brief Washout time constant (<i>Tf</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Gate servo time constant (<i>Tp</i>) (&gt;= 0).  If = 0, block is bypassed.  Typical value = 0,35. Default: 0.0 */
		CIMPP::Seconds tp;

		/** \brief Power feedback time constant (<i>Tt</i>) (&gt;= 0).  If = 0, block is bypassed.  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds tt;

		/** \brief Turbine time constant (<i>Tturb</i>) (&gt;= 0). See Parameter detail 3.  Typical value = 0,8. Default: 0.0 */
		CIMPP::Seconds tturb;

		/** \brief Maximum gate closing velocity (<i>Velcl</i>).  Unit = PU / s.  Typical value = -0,14. Default: 0.0 */
		CIMPP::Float velcl;

		/** \brief Maximum gate opening velocity (<i>Velop</i>).  Unit = PU / s.  Typical value = 0,09. Default: 0.0 */
		CIMPP::Float velop;

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

	BaseClass* GovHydroPID_factory();
}
#endif
