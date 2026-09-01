#ifndef ExcST2A_H
#define ExcST2A_H
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

#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE ST2A static excitation system with another lead-lag block added to match the model defined by WECC. */
	class ExcST2A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST2A();
		~ExcST2A() override;

		/** \brief Maximum field voltage (<i>Efdmax</i>) (&gt;= 0).  Typical value = 99. Default: 0.0 */
		CIMPP::PU efdmax;

		/** \brief Voltage regulator gain (<i>Ka</i>) (&gt; 0).  Typical value = 120. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (<i>Kc</i>) (&gt;= 0).  Typical value = 1,82. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Exciter constant related to self-excited field (<i>Ke</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gains (<i>kf</i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU kf;

		/** \brief Potential circuit gain coefficient (<i>K</i><i><sub>i</sub></i>) (&gt;= 0).  Typical value = 8. Default: 0.0 */
		CIMPP::PU ki;

		/** \brief Potential circuit gain coefficient (<i>K</i><i><sub>p</sub></i>) (&gt;= 0).  Typical value = 4,88. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Voltage regulator time constant (<i>Ta</i>) (&gt; 0).  Typical value = 0,15. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (<i>Tb</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (<i>Tc</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (<i>Te</i>) (&gt; 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (<i>Tf</i>) (&gt;= 0).  Typical value = 0,7. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief UEL input (<i>UELin</i>). true = HV gate false = add to error signal. Typical value = false. Default: false */
		CIMPP::Boolean uelin;

		/** \brief Maximum voltage regulator outputs (<i>Vrmax</i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator outputs (<i>Vrmin</i>) (&lt; 0).  Typical value = -1. Default: 0.0 */
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

	BaseClass* ExcST2A_factory();
}
#endif
