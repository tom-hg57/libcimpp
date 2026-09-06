#ifndef GovCT1_H
#define GovCT1_H
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
#include "DroopSignalFeedbackKind.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief General model for any prime mover with a PID governor, used primarily for combustion turbine and combined cycle units. This model can be used to represent a variety of prime movers controlled by PID governors.  It is suitable, for example, for the representation of:  <ul> 	<li>gas turbine and single shaft combined cycle turbines</li> </ul> <ul> 	<li>diesel engines with modern electronic or digital governors  </li> </ul> <ul> 	<li>steam turbines where steam is supplied from a large boiler drum or a large header whose pressure is substantially constant over the period under study</li> 	<li>simple hydro turbines in dam configurations where the water column length is short and water inertia effects are minimal.</li> </ul> Additional information on this model is available in the 2012 IEEE report, <i><u>Dynamic Models for Turbine-Governors in Power System Studies</u></i>, 3.1.2.3 pages 3-4 (GGOV1). */
	class GovCT1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovCT1();
		~GovCT1() override;

		/** \brief Acceleration limiter setpoint (<i>Aset</i>).  Unit = PU / s.  Typical value = 0,01. Default: 0.0 */
		CIMPP::Float aset;

		/** \brief Speed governor deadband in PU speed (<i>db</i>).  In the majority of applications, it is recommended that this value be set to zero.  Typical value = 0. Default: 0.0 */
		CIMPP::PU db;

		/** \brief Speed sensitivity coefficient (<i>Dm</i>).  <i>Dm</i> can represent either the variation of the engine power with the shaft speed or the variation of maximum power capability with shaft speed.  If it is positive it describes the falling slope of the engine speed verses power characteristic as speed increases. A slightly falling characteristic is typical for reciprocating engines and some aero-derivative turbines.  If it is negative the engine power is assumed to be unaffected by the shaft speed, but the maximum permissible fuel flow is taken to fall with falling shaft speed. This is characteristic of single-shaft industrial turbines due to exhaust temperature limits.  Typical value = 0. Default: 0.0 */
		CIMPP::PU dm;

		/** \brief Acceleration limiter gain (<i>Ka</i>).  Typical value = 10. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Governor derivative gain (<i>Kdgov</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kdgov;

		/** \brief Governor integral gain (<i>Kigov</i>).  Typical value = 2. Default: 0.0 */
		CIMPP::PU kigov;

		/** \brief Load limiter integral gain for PI controller (<i>Kiload</i>).  Typical value = 0,67. Default: 0.0 */
		CIMPP::PU kiload;

		/** \brief Power controller (reset) gain (<i>Kimw</i>).  The default value of 0,01 corresponds to a reset time of 100 s.  A value of 0,001 corresponds to a relatively slow-acting load controller.  Typical value = 0,01. Default: 0.0 */
		CIMPP::PU kimw;

		/** \brief Governor proportional gain (<i>Kpgov</i>).  Typical value = 10. Default: 0.0 */
		CIMPP::PU kpgov;

		/** \brief Load limiter proportional gain for PI controller (<i>Kpload</i>).  Typical value = 2. Default: 0.0 */
		CIMPP::PU kpload;

		/** \brief Turbine gain (<i>Kturb</i>) (&gt; 0).  Typical value = 1,5. Default: 0.0 */
		CIMPP::PU kturb;

		/** \brief Load limiter reference value (<i>Ldref</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ldref;

		/** \brief Maximum value for speed error signal (<i>maxerr</i>) (&gt; GovCT1.minerr).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU maxerr;

		/** \brief Minimum value for speed error signal (<i>minerr</i>) (&lt; GovCT1.maxerr).  Typical value = -0,05. Default: 0.0 */
		CIMPP::PU minerr;

		/** \brief Base for power values (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Permanent droop (<i>R</i>).  Typical value = 0,04. Default: 0.0 */
		CIMPP::PU r;

		/** \brief Minimum valve closing rate (<i>Rclose</i>).  Unit = PU / s.  Typical value = -0,1. Default: 0.0 */
		CIMPP::Float rclose;

		/** \brief Maximum rate of load limit decrease (<i>Rdown</i>).  Typical value = -99. Default: 0.0 */
		CIMPP::PU rdown;

		/** \brief Maximum valve opening rate (<i>Ropen</i>).  Unit = PU / s.  Typical value = 0.10. Default: 0.0 */
		CIMPP::Float ropen;

		/** \brief Feedback signal for droop (<i>Rselect</i>).  Typical value = electricalPower. Default: 0 */
		CIMPP::DroopSignalFeedbackKind rselect;

		/** \brief Maximum rate of load limit increase (<i>Rup</i>).  Typical value = 99. Default: 0.0 */
		CIMPP::PU rup;

		/** \brief Acceleration limiter time constant (<i>Ta</i>) (&gt; 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Actuator time constant (<i>Tact</i>) (&gt;= 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Seconds tact;

		/** \brief Turbine lag time constant (<i>Tb</i>) (&gt; 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Turbine lead time constant (<i>Tc</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Governor derivative controller time constant (<i>Tdgov</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tdgov;

		/** \brief Transport time delay for diesel engine used in representing diesel engines where there is a small but measurable transport delay between a change in fuel flow setting and the development of torque (<i>Teng</i>) (&gt;= 0).  <i>Teng</i> should be zero in all but special cases where this transport delay is of particular concern.  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds teng;

		/** \brief Load-limiter time constant (<i>Tfload</i>) (&gt; 0).  Typical value = 3. Default: 0.0 */
		CIMPP::Seconds tfload;

		/** \brief Electrical power transducer time constant (<i>Tpelec</i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tpelec;

		/** \brief Temperature detection lead time constant (<i>Tsa</i>) (&gt;= 0).  Typical value = 4. Default: 0.0 */
		CIMPP::Seconds tsa;

		/** \brief Temperature detection lag time constant (<i>Tsb</i>) (&gt;= 0).  Typical value = 5. Default: 0.0 */
		CIMPP::Seconds tsb;

		/** \brief Maximum valve position limit (<i>Vmax</i>) (&gt; GovCT1.vmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU vmax;

		/** \brief Minimum valve position limit (<i>Vmin</i>) (&lt; GovCT1.vmax).  Typical value = 0,15. Default: 0.0 */
		CIMPP::PU vmin;

		/** \brief No load fuel flow (<i>Wfnl</i>).  Typical value = 0,2. Default: 0.0 */
		CIMPP::PU wfnl;

		/** \brief Switch for fuel source characteristic to recognize that fuel flow, for a given fuel valve stroke, can be proportional to engine speed (<i>Wfspd</i>). true = fuel flow proportional to speed (for some gas turbines and diesel engines with positive displacement fuel injectors) false = fuel control system keeps fuel flow independent of engine speed. Typical value = true. Default: false */
		CIMPP::Boolean wfspd;

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

	BaseClass* GovCT1_factory();
}
#endif
