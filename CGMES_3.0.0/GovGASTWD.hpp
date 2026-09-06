#ifndef GovGASTWD_H
#define GovGASTWD_H
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
#include "PU.hpp"
#include "Seconds.hpp"
#include "Temperature.hpp"

namespace CIMPP
{

	/** \brief Woodward™ gas turbine governor.  [Footnote: Woodward gas turbines are an example of suitable products available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of these products.] */
	class GovGASTWD : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGASTWD();
		~GovGASTWD() override;

		/** \brief Valve positioner (<i>A</i>). Default: 0.0 */
		CIMPP::Float a;

		/** \brief Exhaust temperature parameter (<i>Af1</i>). Default: 0.0 */
		CIMPP::PU af1;

		/** \brief Coefficient equal to 0,5(1-speed) (<i>Af2</i>). Default: 0.0 */
		CIMPP::PU af2;

		/** \brief Valve positioner (<i>B</i>). Default: 0.0 */
		CIMPP::Float b;

		/** \brief (<i>Bf1</i>).  <i>Bf1</i> = <i>E</i>(1-<i>w</i>) where <i>E</i> (speed sensitivity coefficient) is 0,55 to 0,65 x <i>Tr</i>. Default: 0.0 */
		CIMPP::PU bf1;

		/** \brief Turbine torque coefficient K<sub>hhv</sub> (depends on heating value of fuel stream in combustion chamber) (<i>Bf2</i>). Default: 0.0 */
		CIMPP::PU bf2;

		/** \brief Valve positioner (<i>C</i>). Default: 0.0 */
		CIMPP::Float c;

		/** \brief Coefficient defining fuel flow where power output is 0 % (<i>Cf2</i>).  Synchronous but no output.  Typically 0,23 x K<sub>hhv </sub>(23 % fuel flow). Default: 0.0 */
		CIMPP::PU cf2;

		/** \brief Combustion reaction time delay (<i>Ecr</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds ecr;

		/** \brief Turbine and exhaust delay (<i>Etd</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds etd;

		/** \brief Ratio of fuel adjustment (<i>K3</i>). Default: 0.0 */
		CIMPP::PU k3;

		/** \brief Gain of radiation shield (<i>K4</i>). Default: 0.0 */
		CIMPP::PU k4;

		/** \brief Gain of radiation shield (<i>K5</i>). Default: 0.0 */
		CIMPP::PU k5;

		/** \brief Minimum fuel flow (<i>K6</i>). Default: 0.0 */
		CIMPP::PU k6;

		/** \brief Drop governor gain (<i>Kd</i>). Default: 0.0 */
		CIMPP::PU kd;

		/** \brief (<i>Kdroop</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::PU kdroop;

		/** \brief Fuel system feedback (<i>Kf</i>). Default: 0.0 */
		CIMPP::PU kf;

		/** \brief Isochronous Governor Gain (<i>Ki</i>). Default: 0.0 */
		CIMPP::PU ki;

		/** \brief PID proportional gain (<i>Kp</i>). Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Base for power values (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Fuel control time constant (<i>T</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t;

		/** \brief Radiation shield time constant (<i>T3</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Thermocouple time constant (<i>T4</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Temperature control time constant (<i>T5</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Temperature control (<i>Tc</i>). Default: 0.0 */
		CIMPP::Temperature tc;

		/** \brief Compressor discharge time constant (<i>Tcd</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds tcd;

		/** \brief Power transducer time constant (<i>Td</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds td;

		/** \brief Fuel system time constant (<i>Tf</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Maximum Turbine limit (<i>Tmax</i>) (&gt; GovGASTWD.tmin). Default: 0.0 */
		CIMPP::PU tmax;

		/** \brief Minimum turbine limit (<i>Tmin</i>) (&lt; GovGASTWD.tmax). Default: 0.0 */
		CIMPP::PU tmin;

		/** \brief Rated temperature (<i>Tr</i>). Default: 0.0 */
		CIMPP::Temperature tr;

		/** \brief Turbine rating (<i>Trate</i>).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower trate;

		/** \brief Temperature controller integration rate (<i>Tt</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds tt;

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

	BaseClass* GovGASTWD_factory();
}
#endif
