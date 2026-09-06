#ifndef WindPlantFreqPcontrolIEC_H
#define WindPlantFreqPcontrolIEC_H
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

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindPlantIEC;

	/** \brief Frequency and active power controller model. Reference: IEC 61400-27-1:2015, Annex D. */
	class WindPlantFreqPcontrolIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPlantFreqPcontrolIEC();
		~WindPlantFreqPcontrolIEC() override;

		/** \brief The wind dynamics lookup table associated with this frequency and active power wind plant model. Default: {} */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind plant model with which this wind plant frequency and active power control is associated. Default: nullptr */
		CIMPP::WindPlantIEC* WindPlantIEC;

		/** \brief Maximum ramp rate of <i>p</i><i><sub>WTref</sub></i> request from the plant controller to the wind turbines (<i>dp</i><i><sub>refmax</sub></i>) (&gt; WindPlantFreqPcontrolIEC.dprefmin). It is a case-dependent parameter. Default: 0.0 */
		CIMPP::PU dprefmax;

		/** \brief Minimum (negative) ramp rate of <i>p</i><i><sub>WTref</sub></i> request from the plant controller to the wind turbines (<i>dp</i><i><sub>refmin</sub></i>) (&lt; WindPlantFreqPcontrolIEC.dprefmax). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU dprefmin;

		/** \brief Maximum positive ramp rate for wind plant power reference (<i>dp</i><i><sub>WPrefmax</sub></i>) (&gt; WindPlantFreqPcontrolIEC.dpwprefmin). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU dpwprefmax;

		/** \brief Maximum negative ramp rate for wind plant power reference (<i>dp</i><i><sub>WPrefmin</sub></i>) (&lt; WindPlantFreqPcontrolIEC.dpwprefmax). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU dpwprefmin;

		/** \brief Plant P controller integral gain (<i>K</i><i><sub>IWPp</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Float kiwpp;

		/** \brief Maximum PI integrator term (<i>K</i><i><sub>IWPpmax</sub></i>) (&gt; WindPlantFreqPcontrolIEC.kiwppmin). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU kiwppmax;

		/** \brief Minimum PI integrator term (<i>K</i><i><sub>IWPpmin</sub></i>) (&lt; WindPlantFreqPcontrolIEC.kiwppmax). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU kiwppmin;

		/** \brief Plant P controller proportional gain (<i>K</i><i><sub>PWPp</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Float kpwpp;

		/** \brief Power reference gain (<i>K</i><i><sub>WPpref</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU kwppref;

		/** \brief Maximum <i>p</i><i><sub>WTref</sub></i> request from the plant controller to the wind turbines (<i>p</i><i><sub>refmax</sub></i>) (&gt; WindPlantFreqPcontrolIEC.prefmin). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU prefmax;

		/** \brief Minimum <i>p</i><i><sub>WTref</sub></i> request from the plant controller to the wind turbines (<i>p</i><i><sub>refmin</sub></i>) (&lt; WindPlantFreqPcontrolIEC.prefmax). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU prefmin;

		/** \brief Lead time constant in reference value transfer function (<i>T</i><i><sub>pft</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tpft;

		/** \brief Lag time constant in reference value transfer function (<i>T</i><i><sub>pfv</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tpfv;

		/** \brief Filter time constant for frequency measurement (<i>T</i><i><sub>WPffiltp</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Seconds twpffiltp;

		/** \brief Filter time constant for active power measurement (<i>T</i><i><sub>WPpfiltp</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Seconds twppfiltp;

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

	BaseClass* WindPlantFreqPcontrolIEC_factory();
}
#endif
