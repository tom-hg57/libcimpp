#ifndef Terminal_H
#define Terminal_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ACDCTerminal.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PhaseCode.hpp"

namespace CIMPP
{
	class ACDCConverter;
	class AuxiliaryEquipment;
	class ConductingEquipment;
	class ConnectivityNode;
	class MutualCoupling;
	class RegulatingControl;
	class RemoteInputSignal;
	class SvPowerFlow;
	class TieFlow;
	class TopologicalNode;
	class TransformerEnd;

	/** \brief An AC electrical connection point to a piece of conducting equipment. Terminals are connected at physical connection points called connectivity nodes. */
	class Terminal : public ACDCTerminal
	{
	public:
		/* constructor initialising all attributes to null */
		Terminal();
		~Terminal() override;

		/** \brief The auxiliary equipment connected to the terminal. Default: 0 */
		std::list<CIMPP::AuxiliaryEquipment*> AuxiliaryEquipment;

		/** \brief The conducting equipment of the terminal.  Conducting equipment have  terminals that may be connected to other conducting equipment terminals via connectivity nodes or topological nodes. Default: 0 */
		CIMPP::ConductingEquipment* ConductingEquipment;

		/** \brief The connectivity node to which this terminal connects with zero impedance. Default: 0 */
		CIMPP::ConnectivityNode* ConnectivityNode;

		/** \brief All converters` DC sides linked to this point of common coupling terminal. Default: 0 */
		std::list<CIMPP::ACDCConverter*> ConverterDCSides;

		/** \brief Mutual couplings associated with the branch as the first branch. Default: 0 */
		std::list<CIMPP::MutualCoupling*> HasFirstMutualCoupling;

		/** \brief Mutual couplings with the branch associated as the first branch. Default: 0 */
		std::list<CIMPP::MutualCoupling*> HasSecondMutualCoupling;

		/** \brief The controls regulating this terminal. Default: 0 */
		std::list<CIMPP::RegulatingControl*> RegulatingControl;

		/** \brief Input signal coming from this terminal. Default: 0 */
		std::list<CIMPP::RemoteInputSignal*> RemoteInputSignal;

		/** \brief The power flow state variable associated with the terminal. Default: 0 */
		CIMPP::SvPowerFlow* SvPowerFlow;

		/** \brief The control area tie flows to which this terminal associates. Default: 0 */
		std::list<CIMPP::TieFlow*> TieFlow;

		/** \brief The topological node associated with the terminal.   This can be used as an alternative to the connectivity node path to topological node, thus making it unnecessary to model connectivity nodes in some cases.   Note that the if connectivity nodes are in the model, this association would probably not be used as an input specification. Default: 0 */
		CIMPP::TopologicalNode* TopologicalNode;

		/** \brief All transformer ends connected at this terminal. Default: 0 */
		std::list<CIMPP::TransformerEnd*> TransformerEnd;

		/** \brief Represents the normal network phasing condition. If the attribute is missing, three phases (ABC) shall be assumed, except for terminals of grounding classes (specializations of EarthFaultCompensator, GroundDisconnector, and Ground) which will be assumed to be N. Therefore, phase code ABCN is explicitly declared when needed, e.g. for star point grounding equipment. The phase code on terminals connecting same ConnectivityNode or same TopologicalNode as well as for equipment between two terminals shall be consistent. Default: 0 */
		CIMPP::PhaseCode phases;

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

	BaseClass* Terminal_factory();
}
#endif
