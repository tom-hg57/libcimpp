#ifndef ExcELIN2_H
#define ExcELIN2_H
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

	/** \brief Detailed excitation system ELIN (VATECH).  This model represents an all-static excitation system. A PI voltage controller establishes a desired field current set point for a proportional current controller. The integrator of the PI controller has a follow-up input to match its signal to the present field current.  Power system stabilizer models used in conjunction with this excitation system model: PssELIN2, PssIEEE2B, Pss2B. */
	class ExcELIN2 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcELIN2();
		~ExcELIN2() override;

		/** \brief Gain (<i>Efdbas</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU efdbas;

		/** \brief Limiter (<i>I</i><i><sub>efmax</sub></i>) (&gt; ExcELIN2.iefmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU iefmax;

		/** \brief Minimum open circuit excitation voltage (<i>I</i><i><sub>efmax2</sub></i>).  Typical value = -5. Default: 0.0 */
		CIMPP::PU iefmax2;

		/** \brief Limiter (<i>I</i><i><sub>efmin</sub></i>) (&lt; ExcELIN2.iefmax).  Typical value = 1. Default: 0.0 */
		CIMPP::PU iefmin;

		/** \brief Voltage regulator input gain (<i>K1</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU k1;

		/** \brief Voltage regulator input limit (<i>K1ec</i>).  Typical value = 2. Default: 0.0 */
		CIMPP::PU k1ec;

		/** \brief Gain (<i>K2</i>).  Typical value = 5. Default: 0.0 */
		CIMPP::PU k2;

		/** \brief Gain (<i>K3</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU k3;

		/** \brief Gain (<i>K4</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU k4;

		/** \brief Voltage controller derivative gain (<i>Kd1</i>).  Typical value = 34,5. Default: 0.0 */
		CIMPP::PU kd1;

		/** \brief Gain (<i>Ke2</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU ke2;

		/** \brief Gain (<i>Ketb</i>).  Typical value = 0,06. Default: 0.0 */
		CIMPP::PU ketb;

		/** \brief Controller follow up gain (<i>PID1max</i>).  Typical value = 2. Default: 0.0 */
		CIMPP::PU pid1max;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>Ve</i><i><sub>1</sub></i>, back of commutating reactance (<i>Se[Ve</i><i><sub>1</sub></i><i>]</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>Ve</i><i><sub>2</sub></i>, back of commutating reactance (<i>Se[Ve</i><i><sub>2</sub></i><i>]</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU seve2;

		/** \brief Voltage controller derivative washout time constant (<i>Tb1</i>) (&gt;= 0).  Typical value = 12,45. Default: 0.0 */
		CIMPP::Seconds tb1;

		/** \brief Time constant (<i>Te</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Time Constant (<i>T</i><i><sub>e2</sub></i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds te2;

		/** \brief Controller follow up deadband (<i>Ti1</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ti1;

		/** \brief Time constant (<i>T</i><i><sub>i3</sub></i>) (&gt;= 0).  Typical value = 3. Default: 0.0 */
		CIMPP::Seconds ti3;

		/** \brief Time constant (<i>T</i><i><sub>i4</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ti4;

		/** \brief Time constant (<i>T</i><i><sub>r4</sub></i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tr4;

		/** \brief Limiter (<i>Upmax</i>) (&gt; ExcELIN2.upmin).  Typical value = 3. Default: 0.0 */
		CIMPP::PU upmax;

		/** \brief Limiter (<i>Upmin</i>) (&lt; ExcELIN2.upmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU upmin;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (<i>Ve</i><i><sub>1</sub></i>) (&gt; 0).  Typical value = 3. Default: 0.0 */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (<i>Ve</i><i><sub>2</sub></i>) (&gt; 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ve2;

		/** \brief Excitation transformer effective reactance (<i>Xp</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU xp;

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

	BaseClass* ExcELIN2_factory();
}
#endif
