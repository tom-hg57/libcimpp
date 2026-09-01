#ifndef WindPlantReactiveControlIEC_H
#define WindPlantReactiveControlIEC_H
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

#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "WindPlantQcontrolModeKind.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindPlantIEC;

	/** \brief Simplified plant voltage and reactive power control model for use with type 3 and type 4 wind turbine models. Reference: IEC 61400-27-1:2015, Annex D. */
	class WindPlantReactiveControlIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPlantReactiveControlIEC();
		~WindPlantReactiveControlIEC() override;

		/** \brief The wind dynamics lookup table associated with this voltage and reactive power wind plant model. Default: {} */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind plant reactive control model associated with this wind plant. Default: nullptr */
		CIMPP::WindPlantIEC* WindPlantIEC;

		/** \brief Maximum positive ramp rate for wind turbine reactive power/voltage reference (<i>dx</i><i><sub>refmax</sub></i>) (&gt; WindPlantReactiveControlIEC.dxrefmin). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU dxrefmax;

		/** \brief Maximum negative ramp rate for wind turbine reactive power/voltage reference (<i>dx</i><i><sub>refmin</sub></i>) (&lt; WindPlantReactiveControlIEC.dxrefmax). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU dxrefmin;

		/** \brief Plant Q controller integral gain (<i>K</i><i><sub>IWPx</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Float kiwpx;

		/** \brief Maximum reactive power/voltage reference from integration (<i>K</i><i><sub>IWPxmax</sub></i>) (&gt; WindPlantReactiveControlIEC.kiwpxmin). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU kiwpxmax;

		/** \brief Minimum reactive power/voltage reference from integration (<i>K</i><i><sub>IWPxmin</sub></i>) (&lt; WindPlantReactiveControlIEC.kiwpxmax). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU kiwpxmin;

		/** \brief Plant Q controller proportional gain (<i>K</i><i><sub>PWPx</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Float kpwpx;

		/** \brief Reactive power reference gain (<i>K</i><i><sub>WPqref</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU kwpqref;

		/** \brief Plant voltage control droop (<i>K</i><i><sub>WPqu</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU kwpqu;

		/** \brief Filter time constant for voltage-dependent reactive power (<i>T</i><i><sub>uqfilt</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tuqfilt;

		/** \brief Filter time constant for active power measurement (<i>T</i><i><sub>WPpfiltq</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Seconds twppfiltq;

		/** \brief Filter time constant for reactive power measurement (<i>T</i><i><sub>WPqfiltq</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Seconds twpqfiltq;

		/** \brief Filter time constant for voltage measurement (<i>T</i><i><sub>WPufiltq</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Seconds twpufiltq;

		/** \brief Lead time constant in reference value transfer function (<i>T</i><i><sub>xft</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Seconds txft;

		/** \brief Lag time constant in reference value transfer function (<i>T</i><i><sub>xfv</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Seconds txfv;

		/** \brief Voltage threshold for UVRT detection in Q control (<i>u</i><i><sub>WPqdip</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU uwpqdip;

		/** \brief Reactive power/voltage controller mode (<i>M</i><i><sub>WPqmode</sub></i>). It is a case-dependent parameter. Default: 0 */
		CIMPP::WindPlantQcontrolModeKind windPlantQcontrolModesType;

		/** \brief Maximum <i>x</i><sub>WTref</sub> (<i>q</i><i><sub>WTref</sub></i> or delta<i> u</i><i><sub>WTref</sub></i>) request from the plant controller (<i>x</i><i><sub>refmax</sub></i>) (&gt; WindPlantReactiveControlIEC.xrefmin). It is a case-dependent parameter. Default: 0.0 */
		CIMPP::PU xrefmax;

		/** \brief Minimum <i>x</i><i><sub>WTref</sub></i> (<i>q</i><i><sub>WTref</sub></i> or delta <i>u</i><i><sub>WTref</sub></i>) request from the plant controller (<i>x</i><i><sub>refmin</sub></i>) (&lt; WindPlantReactiveControlIEC.xrefmax). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU xrefmin;

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

	BaseClass* WindPlantReactiveControlIEC_factory();
}
#endif
