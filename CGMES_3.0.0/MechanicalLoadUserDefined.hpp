#ifndef MechanicalLoadUserDefined_H
#define MechanicalLoadUserDefined_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "MechanicalLoadDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"

namespace CIMPP
{
	class ProprietaryParameterDynamics;

	/** \brief Mechanical load function block whose dynamic behaviour is described by <font color="#0f0f0f">a user-defined model.</font> */
	class MechanicalLoadUserDefined : public MechanicalLoadDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		MechanicalLoadUserDefined();
		~MechanicalLoadUserDefined() override;

		/** \brief Parameter of this proprietary user-defined model. Default: 0 */
		std::list<CIMPP::ProprietaryParameterDynamics*> ProprietaryParameterDynamics;

		/** \brief Behaviour is based on a proprietary model as opposed to a detailed model. true = user-defined model is proprietary with behaviour mutually understood by sending and receiving applications and parameters passed as general attributes false = user-defined model is explicitly defined in terms of control blocks and their input and output signals. Default: false */
		CIMPP::Boolean proprietary;

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

	BaseClass* MechanicalLoadUserDefined_factory();
}
#endif
