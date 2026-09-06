#ifndef GovHydroR_H
#define GovHydroR_H
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

	/** \brief Fourth order lead-lag governor and hydro turbine. */
	class GovHydroR : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroR();
		~GovHydroR() override;

		/** \brief Turbine gain (<i>At</i>).  Typical value = 1,2. Default: 0.0 */
		CIMPP::PU at;

		/** \brief Intentional dead-band width (<i>db1</i>).  Unit = Hz.  Typical value = 0. Default: 0.0 */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (<i>db2</i>).  Unit = MW.  Typical value = 0. Default: 0.0 */
		CIMPP::ActivePower db2;

		/** \brief Turbine damping factor (<i>Dturb</i>).  Typical value = 0,2. Default: 0.0 */
		CIMPP::PU dturb;

		/** \brief Intentional db hysteresis (<i>eps</i>).  Unit = Hz.  Typical value = 0. Default: 0.0 */
		CIMPP::Frequency eps;

		/** \brief Maximum governor output (<i>Gmax</i>) (&gt; GovHydroR.gmin).  Typical value = 1,05. Default: 0.0 */
		CIMPP::PU gmax;

		/** \brief Minimum governor output (<i>Gmin</i>) (&lt; GovHydroR.gmax).  Typical value = -0,05. Default: 0.0 */
		CIMPP::PU gmin;

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

		/** \brief Input signal switch (<i>Flag</i>). true = <i>Pe</i> input is used false = feedback is received from <i>CV</i>. <i>Flag</i> is normally dependent on <i>Tt</i>.  If <i>Tt </i>is zero, <i>Flag</i> is set to false. If <i>Tt</i> is not zero, <i>Flag</i> is set to true.   Typical value = true. Default: false */
		CIMPP::Boolean inputSignal;

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

		/** \brief Maximum gate opening, PU of <i>MWbase</i> (<i>Pmax</i>) (&gt; GovHydroR.pmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU pmax;

		/** \brief Minimum gate opening, PU of <i>MWbase</i> (<i>Pmin</i>) (&lt; GovHydroR.pmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief No-load turbine flow at nominal head (<i>Qnl</i>).  Typical value = 0,08. Default: 0.0 */
		CIMPP::PU qnl;

		/** \brief Steady-state droop (<i>R</i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU r;

		/** \brief Lead time constant 1 (<i>T1</i>) (&gt;= 0).  Typical value = 1,5. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Lag time constant 1 (<i>T2</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Lead time constant 2 (<i>T3</i>) (&gt;= 0).  Typical value = 1,5. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Lag time constant 2 (<i>T4</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Lead time constant 3 (<i>T5</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Lag time constant 3 (<i>T6</i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Lead time constant 4 (<i>T7</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t7;

		/** \brief Lag time constant 4 (<i>T8</i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds t8;

		/** \brief Input filter time constant (<i>Td</i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds td;

		/** \brief Gate servo time constant (<i>Tp</i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds tp;

		/** \brief Power feedback time constant (<i>Tt</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tt;

		/** \brief Water inertia time constant (<i>Tw</i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tw;

		/** \brief Maximum gate closing velocity (<i>Velcl</i>).  Unit = PU / s.  Typical value = -0,2. Default: 0.0 */
		CIMPP::Float velcl;

		/** \brief Maximum gate opening velocity (<i>Velop</i>).  Unit = PU / s.  Typical value = 0,2. Default: 0.0 */
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

	BaseClass* GovHydroR_factory();
}
#endif
