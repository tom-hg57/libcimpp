#ifndef WindTurbineType1or2Dynamics_H
#define WindTurbineType1or2Dynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DynamicsFunctionBlock.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class AsynchronousMachineDynamics;
	class RemoteInputSignal;

	/** \brief Parent class supporting relationships to wind turbines Type 1 and 2 and their control models. */
	class WindTurbineType1or2Dynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType1or2Dynamics();
		~WindTurbineType1or2Dynamics() override;

		/** \brief Asynchronous machine model with which this wind generator type 1 or 2 model is associated. Default: 0 */
		CIMPP::AsynchronousMachineDynamics* AsynchronousMachineDynamics;

		/** \brief Remote input signal used by this wind generator Type 1 or Type 2 model. Default: 0 */
		CIMPP::RemoteInputSignal* RemoteInputSignal;

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

	BaseClass* WindTurbineType1or2Dynamics_factory();
}
#endif
