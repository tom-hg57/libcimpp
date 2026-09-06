#ifndef GovHydroDD_H
#define GovHydroDD_H
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
#include "Frequency.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Double derivative hydro governor and turbine. */
	class GovHydroDD : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroDD();
		~GovHydroDD() override;

		/** \brief Turbine numerator multiplier (Aturb) (note 3).  Typical Value = -1. Default: 0.0 */
		CIMPP::PU aturb;

		/** \brief Turbine denominator multiplier (Bturb) (note 3).  Typical Value = 0.5. Default: 0.0 */
		CIMPP::PU bturb;

		/** \brief Intentional dead-band width (db1).  Unit = Hz.  Typical Value = 0. Default: 0.0 */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (db2).  Unit = MW.  Typical Value = 0. Default: 0.0 */
		CIMPP::ActivePower db2;

		/** \brief Intentional db hysteresis (eps).  Unit = Hz.  Typical Value = 0. Default: 0.0 */
		CIMPP::Frequency eps;

		/** \brief Maximum gate opening (Gmax).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU gmax;

		/** \brief Minimum gate opening (Gmin).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU gmin;

		/** \brief Nonlinear gain point 1, PU gv (Gv1).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain point 2, PU gv (Gv2).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain point 3, PU gv (Gv3).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain point 4, PU gv (Gv4).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain point 5, PU gv (Gv5).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU gv5;

		/** \brief Nonlinear gain point 6, PU gv (Gv6).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU gv6;

		/** \brief Input signal switch (Flag).  true = Pe input is used false = feedback is received from CV. Flag is normally dependent on Tt.  If Tf is zero, Flag is set to false. If Tf is not zero, Flag is set to true.   Typical Value = true. Default: false */
		CIMPP::Boolean inputSignal;

		/** \brief Single derivative gain (K1).  Typical Value = 3.6. Default: 0.0 */
		CIMPP::PU k1;

		/** \brief Double derivative gain (K2).  Typical Value = 0.2. Default: 0.0 */
		CIMPP::PU k2;

		/** \brief Gate servo gain (Kg).  Typical Value = 3. Default: 0.0 */
		CIMPP::PU kg;

		/** \brief Integral gain (Ki).  Typical Value = 1. Default: 0.0 */
		CIMPP::PU ki;

		/** \brief Base for power values (MWbase) (>0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Nonlinear gain point 1, PU power (Pgv1).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU pgv1;

		/** \brief Nonlinear gain point 2, PU power (Pgv2).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU pgv2;

		/** \brief Nonlinear gain point 3, PU power (Pgv3).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU pgv3;

		/** \brief Nonlinear gain point 4, PU power (Pgv4).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU pgv4;

		/** \brief Nonlinear gain point 5, PU power (Pgv5).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU pgv5;

		/** \brief Nonlinear gain point 6, PU power (Pgv6).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU pgv6;

		/** \brief Maximum gate opening, PU of MWbase (Pmax).  Typical Value = 1. Default: 0.0 */
		CIMPP::PU pmax;

		/** \brief Minimum gate opening, PU of MWbase (Pmin).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief Steady state droop (R).  Typical Value = 0.05. Default: 0.0 */
		CIMPP::PU r;

		/** \brief Input filter time constant (Td).  Typical Value = 0. Default: 0.0 */
		CIMPP::Seconds td;

		/** \brief Washout time constant (Tf).  Typical Value = 0.1. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Gate servo time constant (Tp).  Typical Value = 0.35. Default: 0.0 */
		CIMPP::Seconds tp;

		/** \brief Power feedback time constant (Tt).  Typical Value = 0.02. Default: 0.0 */
		CIMPP::Seconds tt;

		/** \brief Turbine time constant (Tturb) (note 3).  Typical Value = 0.8. Default: 0.0 */
		CIMPP::Seconds tturb;

		/** \brief Maximum gate closing velocity (Velcl).  Unit = PU/sec.  Typical Value = -0.14. Default: 0.0 */
		CIMPP::Simple_Float velcl;

		/** \brief Maximum gate opening velocity (Velop).  Unit = PU/sec.  Typical Value = 0.09. Default: 0.0 */
		CIMPP::Simple_Float velop;

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

	BaseClass* GovHydroDD_factory();
}
#endif
