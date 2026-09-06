#ifndef ExcSK_H
#define ExcSK_H
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

#include "ApparentPower.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Slovakian excitation system.  UEL and secondary voltage control are included in this model. When this model is used, there cannot be a separate underexcitation limiter or VAr controller model. */
	class ExcSK : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcSK();
		~ExcSK() override;

		/** \brief Field voltage clipping upper level limit (<i>Efdmax</i>) (&gt; ExcSK.efdmin). Default: 0.0 */
		CIMPP::PU efdmax;

		/** \brief Field voltage clipping lower level limit (<i>Efdmin</i>) (&lt; ExcSK.efdmax). Default: 0.0 */
		CIMPP::PU efdmin;

		/** \brief Maximum field voltage output (<i>Emax</i>) (&gt; ExcSK.emin).  Typical value = 20. Default: 0.0 */
		CIMPP::PU emax;

		/** \brief Minimum field voltage output (<i>Emin</i>) (&lt; ExcSK.emax).  Typical value = -20. Default: 0.0 */
		CIMPP::PU emin;

		/** \brief Gain (<i>K</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU k;

		/** \brief Parameter of underexcitation limit (<i>K1</i>).  Typical value = 0,1364. Default: 0.0 */
		CIMPP::PU k1;

		/** \brief Parameter of underexcitation limit (<i>K2</i>).  Typical value = -0,3861. Default: 0.0 */
		CIMPP::PU k2;

		/** \brief PI controller gain (<i>Kc</i>).  Typical value = 70. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Rectifier regulation factor (<i>Kce</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kce;

		/** \brief Exciter internal reactance (<i>Kd</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kd;

		/** \brief P controller gain (<i>Kgob</i>).  Typical value = 10. Default: 0.0 */
		CIMPP::PU kgob;

		/** \brief PI controller gain (<i>Kp</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief PI controller gain of integral component (<i>Kqi</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kqi;

		/** \brief Rate of rise of the reactive power (<i>Kqob</i>). Default: 0.0 */
		CIMPP::PU kqob;

		/** \brief PI controller gain (<i>Kqp</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kqp;

		/** \brief Deadband of reactive power (<i>nq</i>).  Determines the range of sensitivity.  Typical value = 0,001. Default: 0.0 */
		CIMPP::PU nq;

		/** \brief Secondary voltage control state (<i>Qc_on_off</i>). true = secondary voltage control is on false = secondary voltage control is off. Typical value = false. Default: false */
		CIMPP::Boolean qconoff;

		/** \brief Desired value (setpoint) of reactive power, manual setting (<i>Qz</i>). Default: 0.0 */
		CIMPP::PU qz;

		/** \brief Selector to apply automatic calculation in secondary controller model (<i>remote</i>). true = automatic calculation is activated false = manual set is active; the use of desired value of reactive power (<i>Qz</i>) is required. Typical value = true. Default: false */
		CIMPP::Boolean remote;

		/** \brief Apparent power of the unit (<i>Sbase</i>) (&gt; 0).  Unit = MVA.  Typical value = 259. Default: 0.0 */
		CIMPP::ApparentPower sbase;

		/** \brief PI controller phase lead time constant (<i>Tc</i>) (&gt;= 0).  Typical value = 8. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Time constant of gain block (<i>Te</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief PI controller phase lead time constant (<i>Ti</i>) (&gt;= 0).  Typical value = 2. Default: 0.0 */
		CIMPP::Seconds ti;

		/** \brief Time constant (<i>Tp</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds tp;

		/** \brief Voltage transducer time constant (<i>Tr</i>) (&gt;= 0).  Typical value = 0,01. Default: 0.0 */
		CIMPP::Seconds tr;

		/** \brief Maximum error (<i>UImax</i>) (&gt; ExcSK.uimin).  Typical value = 10. Default: 0.0 */
		CIMPP::PU uimax;

		/** \brief Minimum error (<i>UImin</i>) (&lt; ExcSK.uimax).  Typical value = -10. Default: 0.0 */
		CIMPP::PU uimin;

		/** \brief Maximum controller output (<i>URmax</i>) (&gt; ExcSK.urmin).  Typical value = 10. Default: 0.0 */
		CIMPP::PU urmax;

		/** \brief Minimum controller output (<i>URmin</i>) (&lt; ExcSK.urmax).  Typical value = -10. Default: 0.0 */
		CIMPP::PU urmin;

		/** \brief Maximum terminal voltage input (<i>Vtmax</i>) (&gt; ExcSK.vtmin).  Determines the range of voltage deadband.  Typical value = 1,05. Default: 0.0 */
		CIMPP::PU vtmax;

		/** \brief Minimum terminal voltage input (<i>Vtmin</i>) (&lt; ExcSK.vtmax).  Determines the range of voltage deadband.  Typical value = 0,95. Default: 0.0 */
		CIMPP::PU vtmin;

		/** \brief Maximum output (<i>Yp</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU yp;

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

	BaseClass* ExcSK_factory();
}
#endif
