#ifndef ExcST6B_H
#define ExcST6B_H
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
#include "ExcST6BOELselectorKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE ST6B static excitation system with PID controller and optional inner feedback loop. */
	class ExcST6B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcST6B();
		~ExcST6B() override;

		/** \brief Exciter output current limit reference (<i>Ilr</i>) (&gt; 0).  Typical value = 4,164. Default: 0.0 */
		CIMPP::PU ilr;

		/** \brief Selector (<i>K1</i>). true = feedback is from <i>Ifd</i> false = feedback is not from <i>Ifd</i>. Typical value = true. Default: false */
		CIMPP::Boolean k1;

		/** \brief Exciter output current limit adjustment (<i>Kcl</i>) (&gt; 0).  Typical value = 1,0577. Default: 0.0 */
		CIMPP::PU kcl;

		/** \brief Pre-control gain constant of the inner loop field regulator (<i>Kff</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kff;

		/** \brief Feedback gain constant of the inner loop field regulator (<i>Kg</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kg;

		/** \brief Voltage regulator integral gain (<i>Kia</i>) (&gt; 0).  Typical value = 45,094. Default: 0.0 */
		CIMPP::PU kia;

		/** \brief Exciter output current limit adjustment (<i>Kcl</i>) (&gt; 0).  Typical value = 17,33. Default: 0.0 */
		CIMPP::PU klr;

		/** \brief Forward gain constant of the inner loop field regulator (<i>Km</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU km;

		/** \brief Voltage regulator proportional gain (<i>Kpa</i>) (&gt; 0).  Typical value = 18,038. Default: 0.0 */
		CIMPP::PU kpa;

		/** \brief Voltage regulator derivative gain (<i>Kvd</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kvd;

		/** \brief OEL input selector (<i>OELin</i>).  Typical value = noOELinput (corresponds to <i>OELin</i> = 0 on diagram). Default: 0 */
		CIMPP::ExcST6BOELselectorKind oelin;

		/** \brief Feedback time constant of inner loop field voltage regulator (<i>Tg</i>) (&gt;= 0).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds tg;

		/** \brief Rectifier firing time constant (<i>Ts</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ts;

		/** \brief Voltage regulator derivative gain (<i>Tvd</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tvd;

		/** \brief Maximum voltage regulator output (<i>Vamax</i>) (&gt; 0).  Typical value = 4,81. Default: 0.0 */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (<i>Vamin</i>) (&lt; 0).  Typical value = -3,85. Default: 0.0 */
		CIMPP::PU vamin;

		/** \brief Selector (<i>Vilim</i>). true = <i>Vimin</i>-<i>Vimax</i> limiter is active false = <i>Vimin</i>-<i>Vimax</i> limiter is not active. Typical value = true. Default: false */
		CIMPP::Boolean vilim;

		/** \brief Maximum voltage regulator input limit (<i>Vimax</i>) (&gt; ExcST6B.vimin).  Typical value = 10. Default: 0.0 */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (<i>Vimin</i>) (&lt; ExcST6B.vimax).  Typical value = -10. Default: 0.0 */
		CIMPP::PU vimin;

		/** \brief Selector (<i>vmult</i>). true = multiply regulator output by terminal voltage false = do not multiply regulator output by terminal voltage.  Typical value = true. Default: false */
		CIMPP::Boolean vmult;

		/** \brief Maximum voltage regulator output (<i>Vrmax</i>) (&gt; 0).  Typical value = 4,81. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (<i>Vrmin</i>) (&lt; 0).  Typical value = -3,85. Default: 0.0 */
		CIMPP::PU vrmin;

		/** \brief Excitation source reactance (<i>Xc</i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU xc;

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

	BaseClass* ExcST6B_factory();
}
#endif
