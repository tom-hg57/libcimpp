#ifndef CurveData_H
#define CurveData_H
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
#include "Simple_Float.hpp"

namespace CIMPP
{
	class Curve;

	/** \brief Multi-purpose data points for defining a curve.  The use of this generic class is discouraged if a more specific class  can be used to specify the x and y axis values along with their specific data types. */
	class CurveData : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		CurveData();
		~CurveData() override;

		/** \brief The point data values that define this curve. Default: 0 */
		CIMPP::Curve* Curve;

		/** \brief The data value of the X-axis variable,  depending on the X-axis units. Default: nullptr */
		CIMPP::Simple_Float xvalue;

		/** \brief The data value of the  first Y-axis variable, depending on the Y-axis units. Default: nullptr */
		CIMPP::Simple_Float y1value;

		/** \brief The data value of the second Y-axis variable (if present), depending on the Y-axis units. Default: nullptr */
		CIMPP::Simple_Float y2value;

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

	BaseClass* CurveData_factory();
}
#endif
