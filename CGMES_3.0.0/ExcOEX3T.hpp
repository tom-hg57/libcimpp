#ifndef ExcOEX3T_H
#define ExcOEX3T_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE type ST1 excitation system with semi-continuous and acting terminal voltage limiter. */
	class ExcOEX3T : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcOEX3T();
		~ExcOEX3T() override;

		/** \brief Saturation parameter (<i>E</i><i><sub>1</sub></i>). Default: 0.0 */
		CIMPP::PU e1;

		/** \brief Saturation parameter (<i>E</i><i><sub>2</sub></i>). Default: 0.0 */
		CIMPP::PU e2;

		/** \brief Gain (<i>K</i><i><sub>A</sub></i>). Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Gain (<i>K</i><i><sub>C</sub></i>). Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Gain (<i>K</i><i><sub>D</sub></i>). Default: 0.0 */
		CIMPP::PU kd;

		/** \brief Gain (<i>K</i><i><sub>E</sub></i>). Default: 0.0 */
		CIMPP::PU ke;

		/** \brief Gain (<i>K</i><i><sub>F</sub></i>). Default: 0.0 */
		CIMPP::PU kf;

		/** \brief Saturation parameter (<i>S</i><i><sub>E</sub></i><i>[E</i><i><sub>1</sub></i><i>]</i>). Default: 0.0 */
		CIMPP::PU see1;

		/** \brief Saturation parameter (<i>S</i><i><sub>E</sub></i><i>[E</i><i><sub>2</sub></i><i>]</i>). Default: 0.0 */
		CIMPP::PU see2;

		/** \brief Time constant (<i>T</i><i><sub>1</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Time constant (<i>T</i><i><sub>2</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Time constant (<i>T</i><i><sub>3</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Time constant (<i>T</i><i><sub>4</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Time constant (<i>T</i><i><sub>5</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Time constant (<i>T</i><i><sub>6</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Time constant (<i>T</i><i><sub>E</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Time constant (<i>T</i><i><sub>F</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Limiter (<i>V</i><i><sub>RMAX</sub></i>) (&gt; ExcOEX3T.vrmin). Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Limiter (<i>V</i><i><sub>RMIN</sub></i>) (&lt; ExcOEX3T.vrmax). Default: 0.0 */
		CIMPP::PU vrmin;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* ExcOEX3T_factory();
}
#endif
