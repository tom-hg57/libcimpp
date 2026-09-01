#ifndef UnderexcLimIEEE2_H
#define UnderexcLimIEEE2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "UnderexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Type UEL2 underexcitation limiter which has either a straight-line or multi-segment characteristic when plotted in terms of machine reactive power output vs. real power output. Reference: IEEE UEL2 421.5-2005, 10.2  (limit characteristic lookup table shown in Figure 10.4 (p 32)). */
	class UnderexcLimIEEE2 : public UnderexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		UnderexcLimIEEE2();
		~UnderexcLimIEEE2() override;

		/** \brief UEL terminal voltage exponent applied to real power input to UEL limit look-up table (<i>k1</i>).  Typical value = 2. Default: 0.0 */
		CIMPP::Float k1;

		/** \brief UEL terminal voltage exponent applied to reactive power output from UEL limit look-up table (<i>k2</i>).  Typical value = 2. Default: 0.0 */
		CIMPP::Float k2;

		/** \brief Gain associated with optional integrator feedback input signal to UEL (<i>K</i><i><sub>FB</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kfb;

		/** \brief UEL excitation system stabilizer gain (<i>K</i><i><sub>UF</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kuf;

		/** \brief UEL integral gain (<i>K</i><i><sub>UI</sub></i>).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU kui;

		/** \brief UEL proportional gain (<i>K</i><i><sub>UL</sub></i>).  Typical value = 0,8. Default: 0.0 */
		CIMPP::PU kul;

		/** \brief Real power values for endpoints (<i>P</i><i><sub>0</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU p0;

		/** \brief Real power values for endpoints (<i>P</i><i><sub>1</sub></i>).  Typical value = 0,3. Default: 0.0 */
		CIMPP::PU p1;

		/** \brief Real power values for endpoints (<i>P</i><i><sub>10</sub></i>). Default: 0.0 */
		CIMPP::PU p10;

		/** \brief Real power values for endpoints (<i>P</i><i><sub>2</sub></i>).  Typical value = 0,6. Default: 0.0 */
		CIMPP::PU p2;

		/** \brief Real power values for endpoints (<i>P</i><i><sub>3</sub></i>).  Typical value = 0,9. Default: 0.0 */
		CIMPP::PU p3;

		/** \brief Real power values for endpoints (<i>P</i><i><sub>4</sub></i>).  Typical value = 1,02. Default: 0.0 */
		CIMPP::PU p4;

		/** \brief Real power values for endpoints (<i>P</i><i><sub>5</sub></i>). Default: 0.0 */
		CIMPP::PU p5;

		/** \brief Real power values for endpoints (<i>P</i><i><sub>6</sub></i>). Default: 0.0 */
		CIMPP::PU p6;

		/** \brief Real power values for endpoints (<i>P</i><i><sub>7</sub></i>). Default: 0.0 */
		CIMPP::PU p7;

		/** \brief Real power values for endpoints (<i>P</i><i><sub>8</sub></i>). Default: 0.0 */
		CIMPP::PU p8;

		/** \brief Real power values for endpoints (<i>P</i><i><sub>9</sub></i>). Default: 0.0 */
		CIMPP::PU p9;

		/** \brief Reactive power values for endpoints (<i>Q</i><i><sub>0</sub></i>).  Typical value = -0,31. Default: 0.0 */
		CIMPP::PU q0;

		/** \brief Reactive power values for endpoints (<i>Q</i><i><sub>1</sub></i>).  Typical value = -0,31. Default: 0.0 */
		CIMPP::PU q1;

		/** \brief Reactive power values for endpoints (<i>Q</i><i><sub>10</sub></i>). Default: 0.0 */
		CIMPP::PU q10;

		/** \brief Reactive power values for endpoints (<i>Q</i><i><sub>2</sub></i>).  Typical value = -0,28. Default: 0.0 */
		CIMPP::PU q2;

		/** \brief Reactive power values for endpoints (<i>Q</i><i><sub>3</sub></i>).  Typical value = -0,21. Default: 0.0 */
		CIMPP::PU q3;

		/** \brief Reactive power values for endpoints (<i>Q</i><i><sub>4</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU q4;

		/** \brief Reactive power values for endpoints (<i>Q</i><i><sub>5</sub></i>). Default: 0.0 */
		CIMPP::PU q5;

		/** \brief Reactive power values for endpoints (<i>Q</i><i><sub>6</sub></i>). Default: 0.0 */
		CIMPP::PU q6;

		/** \brief Reactive power values for endpoints (<i>Q</i><i><sub>7</sub></i>). Default: 0.0 */
		CIMPP::PU q7;

		/** \brief Reactive power values for endpoints (<i>Q</i><i><sub>8</sub></i>). Default: 0.0 */
		CIMPP::PU q8;

		/** \brief Reactive power values for endpoints (<i>Q</i><i><sub>9</sub></i>). Default: 0.0 */
		CIMPP::PU q9;

		/** \brief UEL lead time constant (<i>T</i><i><sub>U1</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tu1;

		/** \brief UEL lag time constant (<i>T</i><i><sub>U2</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tu2;

		/** \brief UEL lead time constant (<i>T</i><i><sub>U3</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tu3;

		/** \brief UEL lag time constant (<i>T</i><i><sub>U4</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tu4;

		/** \brief Time constant associated with optional integrator feedback input signal to UEL (<i>T</i><i><sub>UL</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tul;

		/** \brief Real power filter time constant (<i>T</i><i><sub>UP</sub></i>) (&gt;= 0).  Typical value = 5. Default: 0.0 */
		CIMPP::Seconds tup;

		/** \brief Reactive power filter time constant (<i>T</i><i><sub>UQ</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tuq;

		/** \brief Voltage filter time constant (<i>T</i><i><sub>UV</sub></i>) (&gt;= 0).  Typical value = 5. Default: 0.0 */
		CIMPP::Seconds tuv;

		/** \brief UEL integrator output maximum limit (<i>V</i><i><sub>UIMAX</sub></i>) (&gt; UnderexcLimIEEE2.vuimin).  Typical value = 0,25. Default: 0.0 */
		CIMPP::PU vuimax;

		/** \brief UEL integrator output minimum limit (<i>V</i><i><sub>UIMIN</sub></i>) (&lt; UnderexcLimIEEE2.vuimax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU vuimin;

		/** \brief UEL output maximum limit (<i>V</i><i><sub>ULMAX</sub></i>) (&gt; UnderexcLimIEEE2.vulmin).  Typical value = 0,25. Default: 0.0 */
		CIMPP::PU vulmax;

		/** \brief UEL output minimum limit (<i>V</i><i><sub>ULMIN</sub></i>) (&lt; UnderexcLimIEEE2.vulmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU vulmin;

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

	BaseClass* UnderexcLimIEEE2_factory();
}
#endif
