#ifndef ExcREXS_H
#define ExcREXS_H
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

#include "ExcREXSFeedbackSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief General purpose rotating excitation system.  This model can be used to represent a wide range of excitation systems whose DC power source is an AC or DC generator. It encompasses IEEE type AC1, AC2, DC1, and DC2 excitation system models. */
	class ExcREXS : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcREXS();
		~ExcREXS() override;

		/** \brief Field voltage value 1 (<i>E</i><i><sub>1</sub></i>).  Typical value = 3. Default: 0.0 */
		CIMPP::PU e1;

		/** \brief Field voltage value 2 (<i>E</i><i><sub>2</sub></i>).  Typical value = 4. Default: 0.0 */
		CIMPP::PU e2;

		/** \brief Rate feedback signal flag (<i>fbf</i>). Typical value = fieldCurrent. Default: 0 */
		CIMPP::ExcREXSFeedbackSignalKind fbf;

		/** \brief Limit type flag (<i>Flimf</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU flimf;

		/** \brief Rectifier regulation factor (<i>Kc</i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Exciter regulation factor (<i>Kd</i>).  Typical value = 2. Default: 0.0 */
		CIMPP::PU kd;

		/** \brief Exciter field proportional constant (<i>Ke</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ke;

		/** \brief Field voltage feedback gain (<i>Kefd</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kefd;

		/** \brief Rate feedback gain (<i>Kf</i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds kf;

		/** \brief Field voltage controller feedback gain (<i>Kh</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kh;

		/** \brief Field current regulator integral gain (<i>Kii</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kii;

		/** \brief Field current regulator proportional gain (<i>Kip</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kip;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (<i>Ks</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ks;

		/** \brief Voltage regulator integral gain (<i>Kvi</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kvi;

		/** \brief Voltage regulator proportional gain (<i>Kvp</i>).  Typical value = 2800. Default: 0.0 */
		CIMPP::PU kvp;

		/** \brief V/Hz limiter gain (<i>Kvphz</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kvphz;

		/** \brief Pickup speed of V/Hz limiter (<i>Nvphz</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU nvphz;

		/** \brief Saturation factor at <i>E</i><i><sub>1</sub></i><i> </i>(<i>Se</i><i><sub>1</sub></i>).  Typical value = 0,0001. Default: 0.0 */
		CIMPP::PU se1;

		/** \brief Saturation factor at <i>E</i><i><sub>2</sub></i> (<i>Se</i><i><sub>2</sub></i>).  Typical value = 0,001. Default: 0.0 */
		CIMPP::PU se2;

		/** \brief Voltage regulator time constant (<i>Ta</i>) (&gt;= 0).  If = 0, block is bypassed.  Typical value = 0,01. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Lag time constant (<i>Tb1</i>) (&gt;= 0).  If = 0, block is bypassed.  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tb1;

		/** \brief Lag time constant (<i>Tb2</i>) (&gt;= 0).  If = 0, block is bypassed.  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tb2;

		/** \brief Lead time constant (<i>Tc1</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tc1;

		/** \brief Lead time constant (<i>Tc2</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tc2;

		/** \brief Exciter field time constant (<i>Te</i>) (&gt; 0).  Typical value = 1,2. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Rate feedback time constant (<i>Tf</i>) (&gt;= 0).  If = 0, the feedback path is not used.  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Feedback lead time constant (<i>Tf1</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tf1;

		/** \brief Feedback lag time constant (<i>Tf2</i>) (&gt;= 0).  If = 0, block is bypassed.  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tf2;

		/** \brief Field current bridge time constant (<i>Tp</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tp;

		/** \brief Maximum compounding voltage (<i>Vcmax</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU vcmax;

		/** \brief Maximum exciter field current (<i>Vfmax</i>) (&gt; ExcREXS.vfmin).  Typical value = 47. Default: 0.0 */
		CIMPP::PU vfmax;

		/** \brief Minimum exciter field current (<i>Vfmin</i>) (&lt; ExcREXS.vfmax).  Typical value = -20. Default: 0.0 */
		CIMPP::PU vfmin;

		/** \brief Voltage regulator input limit (<i>Vimax</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU vimax;

		/** \brief Maximum controller output (V<i>rmax</i>) (&gt; ExcREXS.vrmin).  Typical value = 47. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum controller output (<i>Vrmin</i>) (&lt; ExcREXS.vrmax).  Typical value = -20. Default: 0.0 */
		CIMPP::PU vrmin;

		/** \brief Exciter compounding reactance (<i>Xc</i>).  Typical value = 0. Default: 0.0 */
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

	BaseClass* ExcREXS_factory();
}
#endif
