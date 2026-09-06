#ifndef DiscExcContIEEEDEC1A_H
#define DiscExcContIEEEDEC1A_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DiscontinuousExcitationControlDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE type DEC1A discontinuous excitation control model that boosts generator excitation to a level higher than that demanded by the voltage regulator and stabilizer immediately following a system fault. Reference: IEEE 421.5-2005, 12.2. */
	class DiscExcContIEEEDEC1A : public DiscontinuousExcitationControlDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		DiscExcContIEEEDEC1A();
		~DiscExcContIEEEDEC1A() override;

		/** \brief Speed change reference (<i>E</i><i><sub>SC</sub></i>).  Typical value = 0,0015. Default: 0.0 */
		CIMPP::PU esc;

		/** \brief Discontinuous controller gain (<i>K</i><i><sub>AN</sub></i>).  Typical value = 400. Default: 0.0 */
		CIMPP::PU kan;

		/** \brief Terminal voltage limiter gain (<i>K</i><i><sub>ETL</sub></i>).  Typical value = 47. Default: 0.0 */
		CIMPP::PU ketl;

		/** \brief Discontinuous controller time constant (<i>T</i><i><sub>AN</sub></i>) (&gt;= 0).  Typical value = 0,08. Default: 0.0 */
		CIMPP::Seconds tan;

		/** \brief Time constant (<i>T</i><i><sub>D</sub></i>) (&gt;= 0).  Typical value = 0,03. Default: 0.0 */
		CIMPP::Seconds td;

		/** \brief Time constant (<i>T</i><i><sub>L</sub></i><sub>1</sub>) (&gt;= 0).  Typical value = 0,025. Default: 0.0 */
		CIMPP::Seconds tl1;

		/** \brief Time constant (<i>T</i><i><sub>L</sub></i><sub>2</sub>) (&gt;= 0).  Typical value = 1,25. Default: 0.0 */
		CIMPP::Seconds tl2;

		/** \brief DEC washout time constant (<i>T</i><i><sub>W</sub></i><sub>5</sub>) (&gt;= 0).  Typical value = 5. Default: 0.0 */
		CIMPP::Seconds tw5;

		/** \brief Regulator voltage reference (<i>V</i><i><sub>AL</sub></i>).  Typical value = 5,5. Default: 0.0 */
		CIMPP::PU val;

		/** \brief Limiter for Van (<i>V</i><i><sub>ANMAX</sub></i>). Default: 0.0 */
		CIMPP::PU vanmax;

		/** \brief Limiter (<i>V</i><i><sub>OMAX</sub></i>) (&gt; DiscExcContIEEEDEC1A.vomin).  Typical value = 0,3. Default: 0.0 */
		CIMPP::PU vomax;

		/** \brief Limiter (<i>V</i><i><sub>OMIN</sub></i>) (&lt; DiscExcContIEEEDEC1A.vomax).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU vomin;

		/** \brief Limiter (<i>V</i><i><sub>SMAX</sub></i>)(&gt; DiscExcContIEEEDEC1A.vsmin).  Typical value = 0,2. Default: 0.0 */
		CIMPP::PU vsmax;

		/** \brief Limiter (<i>V</i><i><sub>SMIN</sub></i>) (&lt; DiscExcContIEEEDEC1A.vsmax).  Typical value = -0,066. Default: 0.0 */
		CIMPP::PU vsmin;

		/** \brief Terminal voltage level reference (<i>V</i><i><sub>TC</sub></i>).  Typical value = 0,95. Default: 0.0 */
		CIMPP::PU vtc;

		/** \brief Voltage reference (<i>V</i><i><sub>TLMT</sub></i>).  Typical value = 1,1. Default: 0.0 */
		CIMPP::PU vtlmt;

		/** \brief Voltage limits (<i>V</i><i><sub>TM</sub></i>).  Typical value = 1,13. Default: 0.0 */
		CIMPP::PU vtm;

		/** \brief Voltage limits (<i>V</i><i><sub>TN</sub></i>).  Typical value = 1,12. Default: 0.0 */
		CIMPP::PU vtn;

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

	BaseClass* DiscExcContIEEEDEC1A_factory();
}
#endif
