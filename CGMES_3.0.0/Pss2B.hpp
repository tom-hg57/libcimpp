#ifndef Pss2B_H
#define Pss2B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "Float.hpp"
#include "Integer.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE PSS2B.  Extra lead/lag (or rate) block added at end (up to 4 lead/lags total). */
	class Pss2B : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss2B();
		~Pss2B() override;

		/** \brief Numerator constant (<i>a</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::Float a;

		/** \brief Stabilizer gain (<i>Ks1</i>).  Typical value = 12. Default: 0.0 */
		CIMPP::PU ks1;

		/** \brief Gain on signal #2 (<i>Ks2</i>).  Typical value = 0,2. Default: 0.0 */
		CIMPP::PU ks2;

		/** \brief Gain on signal #2 input before ramp-tracking filter (<i>Ks3</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ks3;

		/** \brief Gain on signal #2 input after ramp-tracking filter (<i>Ks4</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ks4;

		/** \brief Denominator order of ramp tracking filter (<i>m</i>).  Typical value = 5. Default: 0 */
		CIMPP::Integer m;

		/** \brief Order of ramp tracking filter (<i>n</i>).  Typical value = 1. Default: 0 */
		CIMPP::Integer n;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>1</sub></i>) (&gt;= 0).  Typical value = 0,12. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>10</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t10;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>11</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t11;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>2</sub></i>) (&gt;= 0).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>3</sub></i>) (&gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>4</sub></i>) (&gt;= 0).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Time constant on signal #1 (<i>T</i><i><sub>6</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Time constant on signal #2 (<i>T</i><i><sub>7</sub></i>) (&gt;= 0).  Typical value = 2. Default: 0.0 */
		CIMPP::Seconds t7;

		/** \brief Lead of ramp tracking filter (<i>T</i><i><sub>8</sub></i>) (&gt;= 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds t8;

		/** \brief Lag of ramp tracking filter (<i>T</i><i><sub>9</sub></i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds t9;

		/** \brief Lead constant (<i>T</i><i><sub>a</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Lag time constant (<i>T</i><i><sub>b</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief First washout on signal #1 (<i>T</i><i><sub>w1</sub></i>) (&gt;= 0).  Typical value = 2. Default: 0.0 */
		CIMPP::Seconds tw1;

		/** \brief Second washout on signal #1 (<i>T</i><i><sub>w2</sub></i>) (&gt;= 0).  Typical value = 2. Default: 0.0 */
		CIMPP::Seconds tw2;

		/** \brief First washout on signal #2 (<i>T</i><i><sub>w3</sub></i>) (&gt;= 0).  Typical value = 2. Default: 0.0 */
		CIMPP::Seconds tw3;

		/** \brief Second washout on signal #2 (<i>T</i><i><sub>w4</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tw4;

		/** \brief Input signal #1 maximum limit (<i>Vsi1max</i>) (&gt; Pss2B.vsi1min).  Typical value = 2. Default: 0.0 */
		CIMPP::PU vsi1max;

		/** \brief Input signal #1 minimum limit (<i>Vsi1min</i>) (&lt; Pss2B.vsi1max).  Typical value = -2. Default: 0.0 */
		CIMPP::PU vsi1min;

		/** \brief Input signal #2 maximum limit (<i>Vsi2max</i>) (&gt; Pss2B.vsi2min).  Typical value = 2. Default: 0.0 */
		CIMPP::PU vsi2max;

		/** \brief Input signal #2 minimum limit (<i>Vsi2min</i>) (&lt; Pss2B.vsi2max).  Typical value = -2. Default: 0.0 */
		CIMPP::PU vsi2min;

		/** \brief Stabilizer output maximum limit (<i>Vstmax</i>) (&gt; Pss2B.vstmin).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU vstmax;

		/** \brief Stabilizer output minimum limit (<i>Vstmin</i>) (&lt; Pss2B.vstmax).  Typical value = -0,1. Default: 0.0 */
		CIMPP::PU vstmin;

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

	BaseClass* Pss2B_factory();
}
#endif
