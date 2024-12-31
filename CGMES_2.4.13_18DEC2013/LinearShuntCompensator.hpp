#ifndef LinearShuntCompensator_H
#define LinearShuntCompensator_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ShuntCompensator.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Conductance.hpp"
#include "Susceptance.hpp"

namespace CIMPP
{

	/*
	A linear shunt compensator has banks or sections with equal admittance values.
	*/
	class LinearShuntCompensator : public ShuntCompensator
	{
	public:
		/* constructor initialising all attributes to null */
		LinearShuntCompensator();
		~LinearShuntCompensator() override;

		CIMPP::Susceptance b0PerSection;  /* Zero sequence shunt (charging) susceptance per section Default: nullptr */
		CIMPP::Susceptance bPerSection;  /* Positive sequence shunt (charging) susceptance per section Default: nullptr */
		CIMPP::Conductance g0PerSection;  /* Zero sequence shunt (charging) conductance per section Default: nullptr */
		CIMPP::Conductance gPerSection;  /* Positive sequence shunt (charging) conductance per section Default: nullptr */

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

	BaseClass* LinearShuntCompensator_factory();
}
#endif