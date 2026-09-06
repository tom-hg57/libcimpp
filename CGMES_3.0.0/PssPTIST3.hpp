#ifndef PssPTIST3_H
#define PssPTIST3_H
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

#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief PTI microprocessor-based stabilizer type 3. */
	class PssPTIST3 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssPTIST3();
		~PssPTIST3() override;

		/** \brief Filter coefficient (<i>A0</i>). Default: 0.0 */
		CIMPP::PU a0;

		/** \brief Limiter (<i>Al</i>). Default: 0.0 */
		CIMPP::PU a1;

		/** \brief Filter coefficient (<i>A2</i>). Default: 0.0 */
		CIMPP::PU a2;

		/** \brief Filter coefficient (<i>A3</i>). Default: 0.0 */
		CIMPP::PU a3;

		/** \brief Filter coefficient (<i>A4</i>). Default: 0.0 */
		CIMPP::PU a4;

		/** \brief Filter coefficient (<i>A5</i>). Default: 0.0 */
		CIMPP::PU a5;

		/** \brief Limiter (<i>Al</i>). Default: 0.0 */
		CIMPP::PU al;

		/** \brief Threshold value above which output averaging will be bypassed (<i>Athres</i>).  Typical value = 0,005. Default: 0.0 */
		CIMPP::PU athres;

		/** \brief Filter coefficient (<i>B0</i>). Default: 0.0 */
		CIMPP::PU b0;

		/** \brief Filter coefficient (<i>B1</i>). Default: 0.0 */
		CIMPP::PU b1;

		/** \brief Filter coefficient (<i>B2</i>). Default: 0.0 */
		CIMPP::PU b2;

		/** \brief Filter coefficient (<i>B3</i>). Default: 0.0 */
		CIMPP::PU b3;

		/** \brief Filter coefficient (<i>B4</i>). Default: 0.0 */
		CIMPP::PU b4;

		/** \brief Filter coefficient (<i>B5</i>). Default: 0.0 */
		CIMPP::PU b5;

		/** \brief Limiter (<i>Dl</i>). Default: 0.0 */
		CIMPP::PU dl;

		/** \brief Time step related to activation of controls (<i>deltatc</i>) (&gt;= 0).  Typical value = 0,025 (0,03 for 50 Hz). Default: 0.0 */
		CIMPP::Seconds dtc;

		/** \brief Time step frequency calculation (<i>deltatf</i>) (&gt;= 0).  Typical value = 0,025 (0,03 for 50 Hz). Default: 0.0 */
		CIMPP::Seconds dtf;

		/** \brief Time step active power calculation (<i>deltatp</i>) (&gt;= 0).  Typical value = 0,0125  (0,015 for 50 Hz). Default: 0.0 */
		CIMPP::Seconds dtp;

		/** \brief Digital/analogue output switch (<i>Isw</i>). true = produce analogue output false = convert to digital output, using tap selection table. Default: false */
		CIMPP::Boolean isw;

		/** \brief Gain (<i>K</i>).  Typical value = 9. Default: 0.0 */
		CIMPP::PU k;

		/** \brief Threshold value (<i>Lthres</i>). Default: 0.0 */
		CIMPP::PU lthres;

		/** \brief (<i>M</i>).  <i>M</i> = 2 x <i>H</i>.  Typical value = 5. Default: 0.0 */
		CIMPP::PU m;

		/** \brief Number of control outputs to average (<i>NAV</i>) (1 &lt;=  <i>NAV</i> &lt;= 16).  Typical value = 4. Default: 0.0 */
		CIMPP::Float nav;

		/** \brief Number of counts at limit to active limit function (<i>NCL</i>) (&gt; 0). Default: 0.0 */
		CIMPP::Float ncl;

		/** \brief Number of counts until reset after limit function is triggered (<i>NCR</i>). Default: 0.0 */
		CIMPP::Float ncr;

		/** \brief (<i>Pmin</i>). Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief Time constant (<i>T1</i>) (&gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Time constant (<i>T2</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Time constant (<i>T3</i>) (&gt;= 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Time constant (<i>T4</i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Time constant (<i>T5</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Time constant (<i>T6</i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Time constant (<i>Tf</i>) (&gt;= 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Time constant (<i>Tp</i>) (&gt;= 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds tp;

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

	BaseClass* PssPTIST3_factory();
}
#endif
