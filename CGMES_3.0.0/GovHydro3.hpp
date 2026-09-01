#ifndef GovHydro3_H
#define GovHydro3_H
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

	/** \brief Modified IEEE hydro governor-turbine. This model differs from that defined in the IEEE modelling guideline paper in that the limits on gate position and velocity do not permit "wind up" of the upstream signals. */
	class GovHydro3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro3();
		~GovHydro3() override;

		/** \brief Turbine gain (<i>At</i>) (&gt;0).  Typical value = 1,2. Default: 0.0 */
		CIMPP::PU at;

		/** \brief Intentional dead-band width (<i>db1</i>).  Unit = Hz.  Typical value = 0. Default: 0.0 */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (<i>db2</i>).  Unit = MW.  Typical value = 0. Default: 0.0 */
		CIMPP::ActivePower db2;

		/** \brief Turbine damping factor (<i>Dturb</i>).  Typical value = 0,2. Default: 0.0 */
		CIMPP::PU dturb;

		/** \brief Intentional db hysteresis (<i>eps</i>).  Unit = Hz.  Typical value = 0. Default: 0.0 */
		CIMPP::Frequency eps;

		/** \brief Governor control flag (<i>Cflag</i>). true = PID control is active false = double derivative control is active. Typical value = true. Default: false */
		CIMPP::Boolean governorControl;

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

		/** \brief Turbine nominal head (<i>H0</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU h0;

		/** \brief Derivative gain (<i>K1</i>).  Typical value = 0,01. Default: 0.0 */
		CIMPP::PU k1;

		/** \brief Double derivative gain, if <i>Cflag</i> = -1 (<i>K2</i>).  Typical value = 2,5. Default: 0.0 */
		CIMPP::PU k2;

		/** \brief Gate servo gain (<i>Kg</i>).  Typical value = 2. Default: 0.0 */
		CIMPP::PU kg;

		/** \brief Integral gain (<i>Ki</i>).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU ki;

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

		/** \brief Maximum gate opening, PU of MWbase (<i>Pmax</i>) (&gt; GovHydro3.pmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU pmax;

		/** \brief Minimum gate opening, PU of <i>MWbase</i> (<i>Pmin</i>) (&lt; GovHydro3.pmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief No-load turbine flow at nominal head (<i>Qnl</i>).  Typical value = 0,08. Default: 0.0 */
		CIMPP::PU qnl;

		/** \brief Steady-state droop, PU, for electrical power feedback (<i>Relec</i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU relec;

		/** \brief Steady-state droop, PU, for governor output feedback (<i>Rgate</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU rgate;

		/** \brief Input filter time constant (<i>Td</i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds td;

		/** \brief Washout time constant (<i>Tf</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Gate servo time constant (<i>Tp</i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds tp;

		/** \brief Power feedback time constant (<i>Tt</i>) (&gt;= 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds tt;

		/** \brief Water inertia time constant (<i>Tw</i>) (&gt;= 0).  If = 0, block is bypassed.  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tw;

		/** \brief Maximum gate closing velocity (<i>Velcl</i>).  Unit = PU / s.  Typical value = -0,2. Default: 0.0 */
		CIMPP::Float velcl;

		/** \brief Maximum gate opening velocity (<i>Velop</i>).  Unit = PU / s. Typical value = 0,2. Default: 0.0 */
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

	BaseClass* GovHydro3_factory();
}
#endif
