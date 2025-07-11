#ifndef DCNode_H
#define DCNode_H
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

namespace CIMPP
{
	class DCBaseTerminal;
	class DCEquipmentContainer;
	class DCTopologicalNode;

	/** \brief DC nodes are points where terminals of DC conducting equipment are connected together with zero impedance. */
	class DCNode : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DCNode();
		~DCNode() override;

		/** \brief The DC container for the DC nodes. Default: 0 */
		CIMPP::DCEquipmentContainer* DCEquipmentContainer;

		/** \brief DC base terminals interconnected with zero impedance at a this DC connectivity node. Default: 0 */
		std::list<CIMPP::DCBaseTerminal*> DCTerminals;

		/** \brief The DC topological node to which this DC connectivity node is assigned.  May depend on the current state of switches in the network. Default: 0 */
		CIMPP::DCTopologicalNode* DCTopologicalNode;

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

	BaseClass* DCNode_factory();
}
#endif
