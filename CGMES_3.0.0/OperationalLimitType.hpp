#ifndef OperationalLimitType_H
#define OperationalLimitType_H
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
#include "Boolean.hpp"
#include "LimitKind.hpp"
#include "OperationalLimitDirectionKind.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class OperationalLimit;

	/** \brief The operational meaning of a category of limits. */
	class OperationalLimitType : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		OperationalLimitType();
		~OperationalLimitType() override;

		/** \brief The operational limits associated with this type of limit. Default: 0 */
		std::list<CIMPP::OperationalLimit*> OperationalLimit;

		/** \brief The nominal acceptable duration of the limit. Limits are commonly expressed in terms of the time limit for which the limit is normally acceptable. The actual acceptable duration of a specific limit may depend on other local factors such as temperature or wind speed. The attribute has meaning only if the flag isInfiniteDuration is set to false, hence it shall not be exchanged when isInfiniteDuration is set to true. Default: nullptr */
		CIMPP::Seconds acceptableDuration;

		/** \brief The direction of the limit. Default: 0 */
		CIMPP::OperationalLimitDirectionKind direction;

		/** \brief Defines if the operational limit type has infinite duration. If true, the limit has infinite duration. If false, the limit has definite duration which is defined by the attribute acceptableDuration. Default: false */
		CIMPP::Boolean isInfiniteDuration;

		/** \brief Types of limits defined in the ENTSO-E Operational Handbook Policy 3. Default: 0 */
		CIMPP::LimitKind kind;

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

	BaseClass* OperationalLimitType_factory();
}
#endif
