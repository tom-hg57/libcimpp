#ifndef Quality61850_H
#define Quality61850_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"
#include "Source.hpp"
#include "Validity.hpp"

namespace CIMPP
{

	/** \brief Quality flags in this class are as defined in IEC 61850, except for estimatorReplaced, which has been included in this class for convenience. */
	class Quality61850 : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		Quality61850();
		~Quality61850() override;

		/** \brief Measurement value may be incorrect due to a reference being out of calibration. Default: false */
		CIMPP::Boolean badReference;

		/** \brief Value has been replaced by State Estimator. estimatorReplaced is not an IEC61850 quality bit but has been put in this class for convenience. Default: false */
		CIMPP::Boolean estimatorReplaced;

		/** \brief This identifier indicates that a supervision function has detected an internal or external failure, e.g. communication failure. Default: false */
		CIMPP::Boolean failure;

		/** \brief Measurement value is old and possibly invalid, as it has not been successfully updated during a specified time interval. Default: false */
		CIMPP::Boolean oldData;

		/** \brief Measurement value is blocked and hence unavailable for transmission. Default: false */
		CIMPP::Boolean operatorBlocked;

		/** \brief To prevent some overload of the communication it is sensible to detect and suppress oscillating (fast changing) binary inputs. If a signal changes in a defined time twice in the same direction (from 0 to 1 or from 1 to 0) then oscillation is detected and the detail quality identifier `oscillatory` is set. If it is detected a configured numbers of transient changes could be passed by. In this time the validity status `questionable` is set. If after this defined numbers of changes the signal is still in the oscillating state the value shall be set either to the opposite state of the previous stable value or to a defined default value. In this case the validity status `questionable` is reset and `invalid` is set as long as the signal is oscillating. If it is configured such that no transient changes should be passed by then the validity status `invalid` is set immediately in addition to the detail quality identifier `oscillatory` (used for status information only). Default: false */
		CIMPP::Boolean oscillatory;

		/** \brief Measurement value is beyond a predefined range of value. Default: false */
		CIMPP::Boolean outOfRange;

		/** \brief Measurement value is beyond the capability of being  represented properly. For example, a counter value overflows from maximum count back to a value of zero. Default: false */
		CIMPP::Boolean overFlow;

		/** \brief Source gives information related to the origin of a value. The value may be acquired from the process, defaulted or substituted. Default: 0 */
		CIMPP::Source source;

		/** \brief A correlation function has detected that the value is not consistent with other values. Typically set by a network State Estimator. Default: false */
		CIMPP::Boolean suspect;

		/** \brief Measurement value is transmitted for test purposes. Default: false */
		CIMPP::Boolean test;

		/** \brief Validity of the measurement value. Default: 0 */
		CIMPP::Validity validity;

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

	BaseClass* Quality61850_factory();
}
#endif
