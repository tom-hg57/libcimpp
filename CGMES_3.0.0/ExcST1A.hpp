#ifndef ExcST1A_H
#define ExcST1A_H
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

	/** \brief Modification of an old IEEE ST1A static excitation system without overexcitation limiter (OEL) and underexcitation limiter (UEL). */
	class ExcST1A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST1A();
		~ExcST1A() override;

		/** \brief Exciter output current limit reference (<i>Ilr</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ilr;

		/** \brief Voltage regulator gain (<i>Ka</i>) (&gt; 0).  Typical value = 190. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (<i>Kc</i>) (&gt;= 0). Typical value = 0,05. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Excitation control system stabilizer gains (<i>Kf</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kf;

		/** \brief Exciter output current limiter gain (<i>Klr</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU klr;

		/** \brief Voltage regulator time constant (<i>Ta</i>) (&gt;= 0).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (<i>Tb</i>) (&gt;= 0).  Typical value = 10. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (<i>Tb1</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tb1;

		/** \brief Voltage regulator time constant (<i>Tc</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Voltage regulator time constant (<i>Tc1</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tc1;

		/** \brief Excitation control system stabilizer time constant (<i>Tf</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Maximum voltage regulator output (<i>Vamax</i>) (&gt; 0).  Typical value = 999. Default: 0.0 */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (<i>Vamin</i>) (&lt; 0).  Typical value = -999. Default: 0.0 */
		CIMPP::PU vamin;

		/** \brief Maximum voltage regulator input limit (<i>Vimax</i>) (&gt; 0).  Typical value = 999. Default: 0.0 */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (<i>Vimin</i>) (&lt; 0).  Typical value = -999. Default: 0.0 */
		CIMPP::PU vimin;

		/** \brief Maximum voltage regulator outputs (<i>Vrmax</i>) (&gt; 0) .  Typical value = 7,8. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator outputs (<i>Vrmin</i>) (&lt; 0).  Typical value = -6,7. Default: 0.0 */
		CIMPP::PU vrmin;

		/** \brief Excitation xfmr effective reactance (<i>Xe</i>).  Typical value = 0,04. Default: 0.0 */
		CIMPP::PU xe;

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

	BaseClass* ExcST1A_factory();
}
#endif
