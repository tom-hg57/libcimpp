#ifndef BusNameMarker_H
#define BusNameMarker_H
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
#include "Integer.hpp"

namespace CIMPP
{
	class ACDCTerminal;
	class ReportingGroup;

	/** \brief Used to apply user standard names to TopologicalNodes. Associated with one or more terminals that are normally connected with the bus name.    The associated terminals are normally connected by non-retained switches. For a ring bus station configuration, all BusbarSection terminals in the ring are typically associated.   For a breaker and a half scheme, both BusbarSections would normally be associated.  For a ring bus, all BusbarSections would normally be associated.  For a "straight" busbar configuration, normally only the main terminal at the BusbarSection would be associated. */
	class BusNameMarker : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		BusNameMarker();
		~BusNameMarker() override;

		/** \brief The reporting group to which this bus name marker belongs. Default: 0 */
		CIMPP::ReportingGroup* ReportingGroup;

		/** \brief The terminals associated with this bus name marker. Default: 0 */
		std::list<CIMPP::ACDCTerminal*> Terminal;

		/** \brief Priority of bus name marker for use as topology bus name.  Use 0 for do not care.  Use 1 for highest priority.  Use 2 as priority is less than 1 and so on. Default: 0 */
		CIMPP::Integer priority;

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

	BaseClass* BusNameMarker_factory();
}
#endif
