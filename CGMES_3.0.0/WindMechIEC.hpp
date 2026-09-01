#ifndef WindMechIEC_H
#define WindMechIEC_H
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
	class WindTurbineType1or2IEC;
	class WindTurbineType3IEC;
	class WindTurbineType4bIEC;

	/** \brief Two mass model. Reference: IEC 61400-27-1:2015, 5.6.2.1. */
	class WindMechIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindMechIEC();
		~WindMechIEC() override;

		/** \brief Wind generator type 1 or type 2 model with which this wind mechanical model is associated. Default: nullptr */
		CIMPP::WindTurbineType1or2IEC* WindTurbineType1or2IEC;

		/** \brief Wind turbine type 3 model with which this wind mechanical model is associated. Default: nullptr */
		CIMPP::WindTurbineType3IEC* WindTurbineType3IEC;

		/** \brief Wind turbine type 4B model with which this wind mechanical model is associated. Default: nullptr */
		CIMPP::WindTurbineType4bIEC* WindTurbineType4bIEC;

		/** \brief Drive train damping (<i>c</i><i><sub>drt</sub></i><i>)</i>. It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU cdrt;

		/** \brief Inertia constant of generator (<i>H</i><i><sub>gen</sub></i>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds hgen;

		/** \brief Inertia constant of wind turbine rotor (<i>H</i><i><sub>WTR</sub></i>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds hwtr;

		/** \brief Drive train stiffness (<i>k</i><i><sub>drt</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU kdrt;

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

	BaseClass* WindMechIEC_factory();
}
#endif
