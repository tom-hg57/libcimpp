#ifndef Season_H
#define Season_H
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
#include "MonthDay.hpp"

namespace CIMPP
{
	class SeasonDayTypeSchedule;

	/** \brief A specified time period of the year. */
	class Season : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		Season();
		~Season() override;

		/** \brief Season for the Schedule. Default: 0 */
		std::list<CIMPP::SeasonDayTypeSchedule*> SeasonDayTypeSchedules;

		/** \brief Date season ends. Default: nullptr */
		CIMPP::MonthDay endDate;

		/** \brief Date season starts. Default: nullptr */
		CIMPP::MonthDay startDate;

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

	BaseClass* Season_factory();
}
#endif
