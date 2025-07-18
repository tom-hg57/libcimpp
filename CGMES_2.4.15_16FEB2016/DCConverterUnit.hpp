#ifndef DCConverterUnit_H
#define DCConverterUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DCEquipmentContainer.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "DCConverterOperatingModeKind.hpp"

namespace CIMPP
{
	class Substation;

	/** \brief Indivisible operative unit comprising all equipment between the point of common coupling on the AC side and the point of common coupling - DC side, essentially one or more converters, together with one or more converter transformers, converter control equipment, essential protective and switching devices and auxiliaries, if any, used for conversion. */
	class DCConverterUnit : public DCEquipmentContainer
	{
	public:
		/* constructor initialising all attributes to null */
		DCConverterUnit();
		~DCConverterUnit() override;

		/** \brief  Default: 0 */
		CIMPP::Substation* Substation;

		/** \brief  Default: 0 */
		CIMPP::DCConverterOperatingModeKind operationMode;

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

	BaseClass* DCConverterUnit_factory();
}
#endif
