#ifndef ExcAVR7_H
#define ExcAVR7_H
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

	/** \brief IVO excitation system. */
	class ExcAVR7 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAVR7();
		~ExcAVR7() override;

		/** \brief Lead coefficient (<i>A</i><i><sub>1</sub></i>).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU a1;

		/** \brief Lag coefficient (<i>A</i><i><sub>2</sub></i>).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU a2;

		/** \brief Lead coefficient (<i>A</i><i><sub>3</sub></i>).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU a3;

		/** \brief Lag coefficient (<i>A</i><i><sub>4</sub></i>).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU a4;

		/** \brief Lead coefficient (<i>A</i><i><sub>5</sub></i>).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU a5;

		/** \brief Lag coefficient (<i>A</i><i><sub>6</sub></i>).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU a6;

		/** \brief Gain (<i>K</i><i><sub>1</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU k1;

		/** \brief Gain (<i>K</i><i><sub>3</sub></i>).  Typical value = 3. Default: 0.0 */
		CIMPP::PU k3;

		/** \brief Gain (<i>K</i><i><sub>5</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU k5;

		/** \brief Lead time constant (<i>T</i><i><sub>1</sub></i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Lag time constant (<i>T</i><i><sub>2</sub></i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Lead time constant (<i>T</i><i><sub>3</sub></i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Lag time constant (<i>T</i><i><sub>4</sub></i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Lead time constant (<i>T</i><i><sub>5</sub></i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Lag time constant (<i>T</i><i><sub>6</sub></i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Lead-lag maximum limit (<i>Vmax1</i>) (&gt; ExcAVR7.vmin1).  Typical value = 5. Default: 0.0 */
		CIMPP::PU vmax1;

		/** \brief Lead-lag maximum limit (<i>Vmax3</i>) (&gt; ExcAVR7.vmin3).  Typical value = 5. Default: 0.0 */
		CIMPP::PU vmax3;

		/** \brief Lead-lag maximum limit (<i>Vmax5</i>) (&gt; ExcAVR7.vmin5).  Typical value = 5. Default: 0.0 */
		CIMPP::PU vmax5;

		/** \brief Lead-lag minimum limit (<i>Vmin1</i>) (&lt; ExcAVR7.vmax1).  Typical value = -5. Default: 0.0 */
		CIMPP::PU vmin1;

		/** \brief Lead-lag minimum limit (<i>Vmin3</i>) (&lt; ExcAVR7.vmax3).  Typical value = -5. Default: 0.0 */
		CIMPP::PU vmin3;

		/** \brief Lead-lag minimum limit (<i>Vmin5</i>) (&lt; ExcAVR7.vmax5).  Typical value = -2. Default: 0.0 */
		CIMPP::PU vmin5;

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

	BaseClass* ExcAVR7_factory();
}
#endif
