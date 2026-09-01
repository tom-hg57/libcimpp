#ifndef WindRefFrameRotIEC_H
#define WindRefFrameRotIEC_H
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
	class WindTurbineType3or4IEC;

	/** \brief Reference frame rotation model. Reference: IEC 61400-27-1:2015, 5.6.3.5. */
	class WindRefFrameRotIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindRefFrameRotIEC();
		~WindRefFrameRotIEC() override;

		/** \brief Wind turbine type 3 or type 4 model with which this reference frame rotation model is associated. Default: nullptr */
		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;

		/** \brief Time constant for PLL first order filter model (<i>T</i><i><sub>PLL</sub></i>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tpll;

		/** \brief Voltage below which the angle of the voltage is filtered and possibly also frozen (<i>u</i><i><sub>PLL1</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU upll1;

		/** \brief Voltage (<i>u</i><i><sub>PLL2</sub></i>) below which the angle of the voltage is frozen if <i>u</i><i><sub>PLL2</sub></i><sub> </sub>is smaller or equal to <i>u</i><i><sub>PLL1</sub></i> . It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU upll2;

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

	BaseClass* WindRefFrameRotIEC_factory();
}
#endif
