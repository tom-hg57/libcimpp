#ifndef WindGenType4IEC_H
#define WindGenType4IEC_H
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
	class WindTurbineType4aIEC;
	class WindTurbineType4bIEC;

	/** \brief IEC type 4 generator set model. Reference: IEC 61400-27-1:2015, 5.6.3.4. */
	class WindGenType4IEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenType4IEC();
		~WindGenType4IEC() override;

		/** \brief Wind turbine type 4A model with which this wind generator type 4 model is associated. Default: nullptr */
		CIMPP::WindTurbineType4aIEC* WindTurbineType4aIEC;

		/** \brief Wind turbine type 4B model with which this wind generator type 4 model is associated. Default: nullptr */
		CIMPP::WindTurbineType4bIEC* WindTurbineType4bIEC;

		/** \brief Maximum active current ramp rate (<i>di</i><i><sub>pmax</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU dipmax;

		/** \brief Maximum reactive current ramp rate (<i>di</i><i><sub>qmax</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU diqmax;

		/** \brief Minimum reactive current ramp rate (<i>di</i><i><sub>qmin</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU diqmin;

		/** \brief Time constant (<i>T</i><i><sub>g</sub></i>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tg;

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

	BaseClass* WindGenType4IEC_factory();
}
#endif
