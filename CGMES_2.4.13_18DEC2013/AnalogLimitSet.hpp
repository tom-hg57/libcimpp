#ifndef AnalogLimitSet_H
#define AnalogLimitSet_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "LimitSet.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"

namespace CIMPP
{
	class Analog;
	class AnalogLimit;

	/** \brief An AnalogLimitSet specifies a set of Limits that are associated with an Analog measurement. */
	class AnalogLimitSet : public LimitSet
	{
	public:
		/* constructor initialising all attributes to null */
		AnalogLimitSet();
		~AnalogLimitSet() override;

		/** \brief The set of limits. Default: 0 */
		std::list<CIMPP::AnalogLimit*> Limits;

		/** \brief A measurement may have zero or more limit ranges defined for it. Default: 0 */
		std::list<CIMPP::Analog*> Measurements;

		/** \brief Tells if the limit values are in percentage of normalValue or the specified Unit for Measurements and Controls. Default: false */
		CIMPP::Boolean isPercentageLimits;

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

	BaseClass* AnalogLimitSet_factory();
}
#endif
