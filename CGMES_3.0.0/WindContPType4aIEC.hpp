#ifndef WindContPType4aIEC_H
#define WindContPType4aIEC_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindTurbineType4aIEC;

	/** \brief P control model type 4A. Reference: IEC 61400-27-1:2015, 5.6.5.5. */
	class WindContPType4aIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContPType4aIEC();
		~WindContPType4aIEC() override;

		/** \brief Wind turbine type 4A model with which this wind control P type 4A model is associated. Default: 0 */
		CIMPP::WindTurbineType4aIEC* WindTurbineType4aIEC;

		/** \brief Maximum wind turbine power ramp rate (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;maxp4A&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU dpmaxp4a;

		/** \brief Time constant in power order lag (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pordp4A&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tpordp4a;

		/** \brief Voltage measurement filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ufiltp4A&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tufiltp4a;

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* WindContPType4aIEC_factory();
}
#endif
