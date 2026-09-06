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
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief PTI Microprocessor-Based Stabilizer type 3. */
	class PssPTIST3 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssPTIST3();
		~PssPTIST3() override;

		/** \brief Filter coefficient (A0). Default: 0.0 */
		CIMPP::PU a0;

		/** \brief Limiter (Al). Default: 0.0 */
		CIMPP::PU a1;

		/** \brief Filter coefficient (A2). Default: 0.0 */
		CIMPP::PU a2;

		/** \brief Filter coefficient (A3). Default: 0.0 */
		CIMPP::PU a3;

		/** \brief Filter coefficient (A4). Default: 0.0 */
		CIMPP::PU a4;

		/** \brief Filter coefficient (A5). Default: 0.0 */
		CIMPP::PU a5;

		/** \brief Limiter (Al). Default: 0.0 */
		CIMPP::PU al;

		/** \brief Threshold value above which output averaging will be bypassed (Athres).  Typical Value = 0.005. Default: 0.0 */
		CIMPP::PU athres;

		/** \brief Filter coefficient (B0). Default: 0.0 */
		CIMPP::PU b0;

		/** \brief Filter coefficient (B1). Default: 0.0 */
		CIMPP::PU b1;

		/** \brief Filter coefficient (B2). Default: 0.0 */
		CIMPP::PU b2;

		/** \brief Filter coefficient (B3). Default: 0.0 */
		CIMPP::PU b3;

		/** \brief Filter coefficient (B4). Default: 0.0 */
		CIMPP::PU b4;

		/** \brief Filter coefficient (B5). Default: 0.0 */
		CIMPP::PU b5;

		/** \brief Limiter (Dl). Default: 0.0 */
		CIMPP::PU dl;

		/** \brief Time step related to activation of controls (0.03 for 50 Hz) (Dtc).  Typical Value = 0.025. Default: 0.0 */
		CIMPP::Seconds dtc;

		/** \brief Time step frequency calculation (0.03 for 50 Hz) (Dtf).  Typical Value = 0.025. Default: 0.0 */
		CIMPP::Seconds dtf;

		/** \brief Time step active power calculation (0.015 for 50 Hz) (Dtp).  Typical Value = 0.0125. Default: 0.0 */
		CIMPP::Seconds dtp;

		/** \brief Digital/analog output switch (Isw). true = produce analog output false = convert to digital output, using tap selection table. Default: false */
		CIMPP::Boolean isw;

		/** \brief Gain (K).  Typical Value = 9. Default: 0.0 */
		CIMPP::PU k;

		/** \brief Threshold value (Lthres). Default: 0.0 */
		CIMPP::PU lthres;

		/** \brief (M).  M=2*H.  Typical Value = 5. Default: 0.0 */
		CIMPP::PU m;

		/** \brief Number of control outputs to average (Nav) (1 <= Nav <= 16).  Typical Value = 4. Default: 0.0 */
		CIMPP::Simple_Float nav;

		/** \brief Number of counts at limit to active limit function (Ncl) (>0). Default: 0.0 */
		CIMPP::Simple_Float ncl;

		/** \brief Number of counts until reset after limit function is triggered (Ncr). Default: 0.0 */
		CIMPP::Simple_Float ncr;

		/** \brief (Pmin). Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief Time constant (T1).  Typical Value = 0.3. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Time constant (T2).  Typical Value = 1. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Time constant (T3).  Typical Value = 0.2. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Time constant (T4).  Typical Value = 0.05. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Time constant (T5). Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Time constant (T6). Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Time constant (Tf).  Typical Value = 0.2. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Time constant (Tp).  Typical Value = 0.2. Default: 0.0 */
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
