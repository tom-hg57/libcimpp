#ifndef GovGAST1_H
#define GovGAST1_H
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
#include "Float.hpp"
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified single shaft gas turbine. */
	class GovGAST1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST1();
		~GovGAST1() override;

		/** \brief Turbine power time constant numerator scale factor (<i>a</i>).  Typical value = 0,8. Default: 0.0 */
		CIMPP::Float a;

		/** \brief Turbine power time constant denominator scale factor (<i>b</i>) (&gt;0).  Typical value = 1. Default: 0.0 */
		CIMPP::Float b;

		/** \brief Intentional dead-band width (<i>db1</i>).  Unit = Hz.  Typical value = 0. Default: 0.0 */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (<i>db2</i>).  Unit = MW.  Typical value = 0. Default: 0.0 */
		CIMPP::ActivePower db2;

		/** \brief Intentional db hysteresis (<i>eps</i>).  Unit = Hz.  Typical value = 0. Default: 0.0 */
		CIMPP::Frequency eps;

		/** \brief Fuel flow at zero power output (<i>Fidle</i>).  Typical value = 0,18. Default: 0.0 */
		CIMPP::PU fidle;

		/** \brief Nonlinear gain point 1, PU gv (<i>Gv1</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain point 2,PU gv (<i>Gv2</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain point 3, PU gv (<i>Gv3</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain point 4, PU gv (<i>Gv4</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain point 5, PU gv (<i>Gv5</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv5;

		/** \brief Nonlinear gain point 6, PU gv (<i>Gv6</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gv6;

		/** \brief Governor gain (<i>Ka</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Temperature limiter gain (<i>Kt</i>).  Typical value = 3. Default: 0.0 */
		CIMPP::PU kt;

		/** \brief Ambient temperature load limit (<i>Lmax</i>).  <i>Lmax</i> is the turbine power output corresponding to the limiting exhaust gas temperature.  Typical value = 1. Default: 0.0 */
		CIMPP::PU lmax;

		/** \brief Valve position change allowed at fast rate (<i>Loadinc</i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU loadinc;

		/** \brief Maximum long term fuel valve opening rate (<i>Ltrate</i>).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Float ltrate;

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

		/** \brief Permanent droop (<i>R</i>) (&gt;0).  Typical value = 0,04. Default: 0.0 */
		CIMPP::PU r;

		/** \brief Maximum fuel valve opening rate (<i>Rmax</i>).  Unit = PU / s.  Typical value = 1. Default: 0.0 */
		CIMPP::Float rmax;

		/** \brief Governor mechanism time constant (<i>T1</i>) (&gt;= 0).  <i>T1</i> represents the natural valve positioning time constant of the governor for small disturbances, as seen when rate limiting is not in effect.  Typical value = 0,5. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Turbine power time constant (<i>T2</i>) (&gt;= 0). <i>T2</i> represents delay due to internal energy storage of the gas turbine engine. <i>T2</i> can be used to give a rough approximation to the delay associated with acceleration of the compressor spool of a multi-shaft engine, or with the compressibility of gas in the plenum of the free power turbine of an aero-derivative unit, for example.  Typical value = 0,5. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Turbine exhaust temperature time constant (<i>T3</i>) (&gt;= 0).  <i>T3</i> represents delay in the exhaust temperature and load limiting system. Typical value = 3. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Governor lead time constant (<i>T4</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Governor lag time constant (<i>T5</i>) (&gt;= 0).  If = 0, entire gain and lead-lag block is bypassed.  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Valve position averaging time constant (<i>Tltr</i>) (&gt;= 0).  Typical value = 10. Default: 0.0 */
		CIMPP::Seconds tltr;

		/** \brief Maximum turbine power, PU of MWbase (<i>Vmax</i>) (&gt; GovGAST1.vmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU vmax;

		/** \brief Minimum turbine power, PU of MWbase (<i>Vmin</i>) (&lt; GovGAST1.vmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU vmin;

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

	BaseClass* GovGAST1_factory();
}
#endif
