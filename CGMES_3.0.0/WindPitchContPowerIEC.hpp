#ifndef WindPitchContPowerIEC_H
#define WindPitchContPowerIEC_H
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

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindGenTurbineType1bIEC;
	class WindGenTurbineType2IEC;

	/** \brief Pitch control power model. Reference: IEC 61400-27-1:2015, 5.6.5.1. */
	class WindPitchContPowerIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPitchContPowerIEC();
		~WindPitchContPowerIEC() override;

		/** \brief The wind dynamics lookup table associated with this pitch control power model. Default: {} */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind turbine type 1B model with which this pitch control power model is associated. Default: nullptr */
		CIMPP::WindGenTurbineType1bIEC* WindGenTurbineType1bIEC;

		/** \brief Wind turbine type 2 model with which this pitch control power model is associated. Default: nullptr */
		CIMPP::WindGenTurbineType2IEC* WindGenTurbineType2IEC;

		/** \brief Rate limit for increasing power (<i>dp</i><i><sub>max</sub></i>) (&gt; WindPitchContPowerIEC.dpmin). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU dpmax;

		/** \brief Rate limit for decreasing power (<i>dp</i><i><sub>min</sub></i>) (&lt; WindPitchContPowerIEC.dpmax). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU dpmin;

		/** \brief Minimum power setting (<i>p</i><i><sub>min</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief If <i>p</i><i><sub>init</sub></i><sub> </sub>&lt; <i>p</i><i><sub>set</sub></i><sub> </sub>then power will be ramped down to <i>p</i><i><sub>min</sub></i>. It is (<i>p</i><i><sub>set</sub></i>) in the IEC 61400-27-1:2015. It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU pset;

		/** \brief Lag time constant (<i>T</i><i><sub>1</sub></i>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Voltage measurement time constant (<i>T</i><i><sub>r</sub></i>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tr;

		/** \brief Dip detection threshold (<i>u</i><i><sub>UVRT</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU uuvrt;

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

	BaseClass* WindPitchContPowerIEC_factory();
}
#endif
