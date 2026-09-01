#ifndef GovHydroWPID_H
#define GovHydroWPID_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Woodward<sup>TM</sup> PID hydro governor. [Footnote: Woodward PID hydro governors are an example of suitable products available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of these products.] */
	class GovHydroWPID : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroWPID();
		~GovHydroWPID() override;

		/** \brief Turbine damping factor (<i>D</i>).  Unit = delta P / delta speed. Default: 0.0 */
		CIMPP::PU d;

		/** \brief Gate opening limit maximum (<i>Gatmax</i>) (&gt; GovHydroWPID.gatmin). Default: 0.0 */
		CIMPP::PU gatmax;

		/** \brief Gate opening limit minimum (<i>Gatmin</i>) (&lt; GovHydroWPID.gatmax). Default: 0.0 */
		CIMPP::PU gatmin;

		/** \brief Gate position 1 (<i>Gv1</i>). Default: 0.0 */
		CIMPP::PU gv1;

		/** \brief Gate position 2 (<i>Gv2</i>). Default: 0.0 */
		CIMPP::PU gv2;

		/** \brief Gate position 3 (<i>Gv3</i>) (= 1,0). Default: 0.0 */
		CIMPP::PU gv3;

		/** \brief Derivative gain (<i>Kd</i>).  Typical value = 1,11. Default: 0.0 */
		CIMPP::PU kd;

		/** \brief Reset gain (<i>Ki</i>).  Typical value = 0,36. Default: 0.0 */
		CIMPP::PU ki;

		/** \brief Proportional gain (<i>Kp</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Base for power values  (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Output at <i>Gv1</i> PU of <i>MWbase</i> (<i>Pgv1</i>). Default: 0.0 */
		CIMPP::PU pgv1;

		/** \brief Output at <i>Gv2</i> PU of <i>MWbase</i> (<i>Pgv2</i>). Default: 0.0 */
		CIMPP::PU pgv2;

		/** \brief Output at <i>Gv3</i> PU of <i>MWbase</i> (<i>Pgv3</i>). Default: 0.0 */
		CIMPP::PU pgv3;

		/** \brief Maximum power output (<i>Pmax</i>) (&gt; GovHydroWPID.pmin). Default: 0.0 */
		CIMPP::PU pmax;

		/** \brief Minimum power output (<i>Pmin</i>) (&lt; GovHydroWPID.pmax). Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief Permanent drop (<i>Reg</i>). Default: 0.0 */
		CIMPP::PU reg;

		/** \brief Controller time constant (<i>Ta</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Gate servo time constant (<i>Tb</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Speed detector time constant (<i>Treg</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds treg;

		/** \brief Water inertia time constant (<i>Tw</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tw;

		/** \brief Maximum gate opening velocity (<i>Velmax</i>) (&gt; GovHydroWPID.velmin).  Unit = PU / s.  Typical value = 0. Default: 0.0 */
		CIMPP::PU velmax;

		/** \brief Maximum gate closing velocity (<i>Velmin</i>) (&lt; GovHydroWPID.velmax).  Unit = PU / s.  Typical value = 0. Default: 0.0 */
		CIMPP::PU velmin;

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

	BaseClass* GovHydroWPID_factory();
}
#endif
