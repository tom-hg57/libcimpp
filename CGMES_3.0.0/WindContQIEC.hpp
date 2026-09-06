#ifndef WindContQIEC_H
#define WindContQIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "PU.hpp"
#include "Seconds.hpp"
#include "WindQcontrolModeKind.hpp"
#include "WindUVRTQcontrolModeKind.hpp"

namespace CIMPP
{
	class WindTurbineType3or4IEC;

	/** \brief Q control model. Reference: IEC 61400-27-1:2015, 5.6.5.7. */
	class WindContQIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContQIEC();
		~WindContQIEC() override;

		/** \brief Wind turbine type 3 or type 4 model with which this reactive control model is associated. Default: nullptr */
		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;

		/** \brief Maximum reactive current injection during dip (<i>i</i><i><sub>qh1</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU iqh1;

		/** \brief Maximum reactive current injection (<i>i</i><i><sub>qmax</sub></i>) (&gt; WindContQIEC.iqmin). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU iqmax;

		/** \brief Minimum reactive current injection (<i>i</i><i><sub>qmin</sub></i>) (&lt; WindContQIEC.iqmax). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU iqmin;

		/** \brief Post fault reactive current injection (<i>i</i><i><sub>qpost</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU iqpost;

		/** \brief Reactive power PI controller integration gain (<i>K</i><i><sub>I,q</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU kiq;

		/** \brief Voltage PI controller integration gain (<i>K</i><i><sub>I,u</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU kiu;

		/** \brief Reactive power PI controller proportional gain (<i>K</i><i><sub>P,q</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU kpq;

		/** \brief Voltage PI controller proportional gain (<i>K</i><i><sub>P,u</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU kpu;

		/** \brief Voltage scaling factor for UVRT current (<i>K</i><i><sub>qv</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU kqv;

		/** \brief Resistive component of voltage drop impedance (<i>r</i><i><sub>droop</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU rdroop;

		/** \brief Power measurement filter time constant (<i>T</i><i><sub>pfiltq</sub></i>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tpfiltq;

		/** \brief Length of time period where post fault reactive power is injected (<i>T</i><i><sub>post</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tpost;

		/** \brief Time constant in reactive power order lag (<i>T</i><i><sub>qord</sub></i>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tqord;

		/** \brief Voltage measurement filter time constant (<i>T</i><i><sub>ufiltq</sub></i>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tufiltq;

		/** \brief Voltage deadband lower limit (<i>u</i><i><sub>db1</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU udb1;

		/** \brief Voltage deadband upper limit (<i>u</i><i><sub>db2</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU udb2;

		/** \brief Maximum voltage in voltage PI controller integral term (<i>u</i><i><sub>max</sub></i>) (&gt; WindContQIEC.umin). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU umax;

		/** \brief Minimum voltage in voltage PI controller integral term (<i>u</i><i><sub>min</sub></i>) (&lt; WindContQIEC.umax). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU umin;

		/** \brief Voltage threshold for UVRT detection in Q control (<i>u</i><i><sub>qdip</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU uqdip;

		/** \brief User-defined bias in voltage reference (<i>u</i><i><sub>ref0</sub></i>). It is a case-dependent parameter. Default: 0.0 */
		CIMPP::PU uref0;

		/** \brief Types of general wind turbine Q control modes (<i>M</i><i><sub>qG</sub></i>).  It is a project-dependent parameter. Default: 0 */
		CIMPP::WindQcontrolModeKind windQcontrolModesType;

		/** \brief Types of UVRT Q control modes (<i>M</i><i><sub>qUVRT</sub></i>). It is a project-dependent parameter. Default: 0 */
		CIMPP::WindUVRTQcontrolModeKind windUVRTQcontrolModesType;

		/** \brief Inductive component of voltage drop impedance (<i>x</i><i><sub>droop</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU xdroop;

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

	BaseClass* WindContQIEC_factory();
}
#endif
