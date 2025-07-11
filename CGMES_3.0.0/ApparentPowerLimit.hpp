#ifndef ApparentPowerLimit_H
#define ApparentPowerLimit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "OperationalLimit.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ApparentPower.hpp"

namespace CIMPP
{

	/** \brief Apparent power limit. */
	class ApparentPowerLimit : public OperationalLimit
	{
	public:
		/* constructor initialising all attributes to null */
		ApparentPowerLimit();
		~ApparentPowerLimit() override;

		/** \brief The normal apparent power limit. The attribute shall be a positive value or zero. Default: nullptr */
		CIMPP::ApparentPower normalValue;

		/** \brief The apparent power limit. The attribute shall be a positive value or zero. Default: nullptr */
		CIMPP::ApparentPower value;

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

	BaseClass* ApparentPowerLimit_factory();
}
#endif
