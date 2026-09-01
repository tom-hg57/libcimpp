#ifndef WindGenType3bIEC_H
#define WindGenType3bIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindGenType3IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "Boolean.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;

	/** \brief IEC type 3B generator set model. Reference: IEC 61400-27-1:2015, 5.6.3.3. */
	class WindGenType3bIEC : public WindGenType3IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenType3bIEC();
		~WindGenType3bIEC() override;

		/** \brief The wind dynamics lookup table associated with this generator type 3B model. Default: {} */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Crowbar control mode (<i>M</i><i><sub>WTcwp</sub></i>). It is a case-dependent parameter. true = 1 in the IEC model false = 0 in the IEC model. Default: false */
		CIMPP::Boolean mwtcwp;

		/** \brief Current generation time constant (<i>T</i><i><sub>g</sub></i>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tg;

		/** \brief Time constant for crowbar washout filter (<i>T</i><i><sub>wo</sub></i>) (&gt;= 0). It is a case-dependent parameter. Default: 0.0 */
		CIMPP::Seconds two;

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

	BaseClass* WindGenType3bIEC_factory();
}
#endif
