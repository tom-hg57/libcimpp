#ifndef GovHydroWEH_H
#define GovHydroWEH_H
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

	/** \brief Woodward<sup>TM </sup>electric hydro governor.  [Footnote: Woodward electric hydro governors are an example of suitable products available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of these products.] */
	class GovHydroWEH : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroWEH();
		~GovHydroWEH() override;

		/** \brief Speed deadband (<i>db</i>). Default: 0.0 */
		CIMPP::PU db;

		/** \brief Value to allow the integral controller to advance beyond the gate limits (<i>Dicn</i>). Default: 0.0 */
		CIMPP::PU dicn;

		/** \brief Value to allow the pilot valve controller to advance beyond the gate limits (<i>Dpv</i>). Default: 0.0 */
		CIMPP::PU dpv;

		/** \brief Turbine damping factor (<i>Dturb</i>).  Unit = delta P (PU of <i>MWbase</i>) / delta speed (PU). Default: 0.0 */
		CIMPP::PU dturb;

		/** \brief Feedback signal selection (<i>Sw</i>). true = PID output (if <i>R-Perm-Gate </i>= droop and <i>R-Perm-Pe </i>= 0) false = electrical power (if <i>R-Perm-Gate </i>= 0 and <i>R-Perm-Pe </i>= droop) or false = gate position (if R<i>-Perm-Gate </i>= droop and <i>R-Perm-Pe </i>= 0). Typical value = false. Default: false */
		CIMPP::Boolean feedbackSignal;

		/** \brief Flowgate 1 (<i>Fl1</i>).  Flow value for gate position point 1 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: 0.0 */
		CIMPP::PU fl1;

		/** \brief Flowgate 2 (<i>Fl2</i>).  Flow value for gate position point 2 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: 0.0 */
		CIMPP::PU fl2;

		/** \brief Flowgate 3 (<i>Fl3</i>).  Flow value for gate position point 3 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: 0.0 */
		CIMPP::PU fl3;

		/** \brief Flowgate 4 (<i>Fl4</i>).  Flow value for gate position point 4 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: 0.0 */
		CIMPP::PU fl4;

		/** \brief Flowgate 5 (<i>Fl5</i>).  Flow value for gate position point 5 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: 0.0 */
		CIMPP::PU fl5;

		/** \brief Flow P1 (<i>Fp1</i>).  Turbine flow value for point 1 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU fp1;

		/** \brief Flow P10 (<i>Fp10</i>).  Turbine flow value for point 10 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU fp10;

		/** \brief Flow P2 (<i>Fp2</i>).  Turbine flow value for point 2 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU fp2;

		/** \brief Flow P3 (<i>Fp3</i>).  Turbine flow value for point 3 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU fp3;

		/** \brief Flow P4 (<i>Fp4</i>).  Turbine flow value for point 4 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU fp4;

		/** \brief Flow P5 (<i>Fp5</i>).  Turbine flow value for point 5 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU fp5;

		/** \brief Flow P6 (<i>Fp6</i>).  Turbine flow value for point 6 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU fp6;

		/** \brief Flow P7 (<i>Fp7</i>).  Turbine flow value for point 7 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU fp7;

		/** \brief Flow P8 (<i>Fp8</i>).  Turbine flow value for point 8 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU fp8;

		/** \brief Flow P9 (<i>Fp9</i>).  Turbine flow value for point 9 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU fp9;

		/** \brief Maximum gate position (<i>Gmax</i>) (&gt; GovHydroWEH.gmin). Default: 0.0 */
		CIMPP::PU gmax;

		/** \brief Minimum gate position (<i>Gmin</i>) (&lt; GovHydroWEH.gmax). Default: 0.0 */
		CIMPP::PU gmin;

		/** \brief Maximum gate closing rate (<i>Gtmxcl</i>). Default: 0.0 */
		CIMPP::PU gtmxcl;

		/** \brief Maximum gate opening rate (<i>Gtmxop</i>). Default: 0.0 */
		CIMPP::PU gtmxop;

		/** \brief Gate 1 (<i>Gv1</i>).  Gate Position value for point 1 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: 0.0 */
		CIMPP::PU gv1;

		/** \brief Gate 2 (<i>Gv2</i>).  Gate Position value for point 2 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: 0.0 */
		CIMPP::PU gv2;

		/** \brief Gate 3 (<i>Gv3</i>).  Gate Position value for point 3 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: 0.0 */
		CIMPP::PU gv3;

		/** \brief Gate 4 (<i>Gv4</i>).  Gate Position value for point 4 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: 0.0 */
		CIMPP::PU gv4;

		/** \brief Gate 5 (<i>Gv5</i>).  Gate Position value for point 5 for lookup table representing water flow through the turbine as a function of gate position to produce steady state flow. Default: 0.0 */
		CIMPP::PU gv5;

		/** \brief Derivative controller derivative gain (<i>Kd</i>). Default: 0.0 */
		CIMPP::PU kd;

		/** \brief Derivative controller Integral gain (<i>Ki</i>). Default: 0.0 */
		CIMPP::PU ki;

		/** \brief Derivative control gain (<i>Kp</i>). Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Base for power values (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Pmss flow P1 (<i>Pmss1</i>).  Mechanical power output for turbine flow point 1 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU pmss1;

		/** \brief Pmss flow P10 (<i>Pmss10</i>).  Mechanical power output for turbine flow point 10 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU pmss10;

		/** \brief Pmss flow P2 (<i>Pmss2</i>).  Mechanical power output for turbine flow point 2 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU pmss2;

		/** \brief Pmss flow P3 (<i>Pmss3</i>).  Mechanical power output for turbine flow point 3 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU pmss3;

		/** \brief Pmss flow P4 (<i>Pmss4</i>).  Mechanical power output for turbine flow point 4 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU pmss4;

		/** \brief Pmss flow P5 (<i>Pmss5</i>).  Mechanical power output for turbine flow point 5 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU pmss5;

		/** \brief Pmss flow P6 (<i>Pmss6</i>).  Mechanical power output for turbine flow point 6 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU pmss6;

		/** \brief Pmss flow P7 (<i>Pmss7</i>).  Mechanical power output for turbine flow point 7 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU pmss7;

		/** \brief Pmss flow P8 (<i>Pmss8</i>).  Mechanical power output for turbine flow point 8 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU pmss8;

		/** \brief Pmss flow P9 (<i>Pmss9</i>).  Mechanical power output for turbine flow point 9 for lookup table representing PU mechanical power on machine MVA rating as a function of turbine flow. Default: 0.0 */
		CIMPP::PU pmss9;

		/** \brief Permanent droop for governor output feedback (<i>R-Perm-Gate</i>). Default: 0.0 */
		CIMPP::Float rpg;

		/** \brief Permanent droop for electrical power feedback (<i>R-Perm-Pe</i>). Default: 0.0 */
		CIMPP::Float rpp;

		/** \brief Derivative controller time constant (<i>Td</i>) (&gt;= 0).  Limits the derivative characteristic beyond a breakdown frequency to avoid amplification of high-frequency noise. Default: 0.0 */
		CIMPP::Seconds td;

		/** \brief Distributive valve time lag time constant (<i>Tdv</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds tdv;

		/** \brief Value to allow the distribution valve controller to advance beyond the gate movement rate limit (<i>Tg</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds tg;

		/** \brief Pilot valve time lag time constant (<i>Tp</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds tp;

		/** \brief Electrical power droop time constant (<i>Tpe</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds tpe;

		/** \brief Water inertia time constant (<i>Tw</i>) (&gt; 0). Default: 0.0 */
		CIMPP::Seconds tw;

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

	BaseClass* GovHydroWEH_factory();
}
#endif
