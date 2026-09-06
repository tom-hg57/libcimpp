#ifndef ExcST7B_H
#define ExcST7B_H
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

#include "ExcST7BOELselectorKind.hpp"
#include "ExcST7BUELselectorKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE ST7B static excitation system without stator current limiter (SCL) and current compensator (DROOP) inputs. */
	class ExcST7B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST7B();
		~ExcST7B() override;

		/** \brief High-value gate feedback gain (<i>Kh</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kh;

		/** \brief Voltage regulator integral gain (<i>Kia</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kia;

		/** \brief Low-value gate feedback gain (<i>Kl</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kl;

		/** \brief Voltage regulator proportional gain (<i>Kpa</i>) (&gt; 0).  Typical value = 40. Default: 0.0 */
		CIMPP::PU kpa;

		/** \brief OEL input selector (<i>OELin</i>). Typical value = noOELinput. Default: 0 */
		CIMPP::ExcST7BOELselectorKind oelin;

		/** \brief Regulator lag time constant (<i>Tb</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Regulator lead time constant (<i>Tc</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Excitation control system stabilizer time constant (<i>Tf</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Feedback time constant of inner loop field voltage regulator (<i>Tg</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tg;

		/** \brief Feedback time constant (<i>Tia</i>) (&gt;= 0).  Typical value = 3. Default: 0.0 */
		CIMPP::Seconds tia;

		/** \brief Rectifier firing time constant (<i>Ts</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ts;

		/** \brief UEL input selector (<i>UELin</i>). Typical value = noUELinput. Default: 0 */
		CIMPP::ExcST7BUELselectorKind uelin;

		/** \brief Maximum voltage reference signal (<i>Vmax</i>) (&gt; 0 and &gt; ExcST7B.vmin)).  Typical value = 1,1. Default: 0.0 */
		CIMPP::PU vmax;

		/** \brief Minimum voltage reference signal (<i>Vmin</i>) (&gt; 0 and &lt; ExcST7B.vmax).  Typical value = 0,9. Default: 0.0 */
		CIMPP::PU vmin;

		/** \brief Maximum voltage regulator output (<i>Vrmax</i>) (&gt; 0).  Typical value = 5. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (<i>Vrmin</i>) (&lt; 0).  Typical value = -4,5. Default: 0.0 */
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

	BaseClass* ExcST7B_factory();
}
#endif
