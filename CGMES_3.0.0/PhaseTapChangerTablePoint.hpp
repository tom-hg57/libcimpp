#ifndef PhaseTapChangerTablePoint_H
#define PhaseTapChangerTablePoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TapChangerTablePoint.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "AngleDegrees.hpp"

namespace CIMPP
{
	class PhaseTapChangerTable;

	/** \brief Describes each tap step in the phase tap changer tabular curve. */
	class PhaseTapChangerTablePoint : public TapChangerTablePoint
	{
	public:
		/* constructor initialising all attributes to null */
		PhaseTapChangerTablePoint();
		~PhaseTapChangerTablePoint() override;

		/** \brief The table of this point. Default: 0 */
		CIMPP::PhaseTapChangerTable* PhaseTapChangerTable;

		/** \brief The angle difference in degrees. A positive value indicates a positive angle variation from the Terminal at the  PowerTransformerEnd,  where the TapChanger is located, into the transformer. Default: nullptr */
		CIMPP::AngleDegrees angle;

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

	BaseClass* PhaseTapChangerTablePoint_factory();
}
#endif
