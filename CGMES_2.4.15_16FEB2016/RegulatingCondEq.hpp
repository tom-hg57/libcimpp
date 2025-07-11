#ifndef RegulatingCondEq_H
#define RegulatingCondEq_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"

namespace CIMPP
{
	class RegulatingControl;

	/** \brief A type of conducting equipment that can regulate a quantity (i.e. voltage or flow) at a specific point in the network. */
	class RegulatingCondEq : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		RegulatingCondEq();
		~RegulatingCondEq() override;

		/** \brief The regulating control scheme in which this equipment participates. Default: 0 */
		CIMPP::RegulatingControl* RegulatingControl;

		/** \brief Specifies the regulation status of the equipment.  True is regulating, false is not regulating. Default: false */
		CIMPP::Boolean controlEnabled;

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

	BaseClass* RegulatingCondEq_factory();
}
#endif
