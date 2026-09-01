#ifndef ExcAC8B_H
#define ExcAC8B_H
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
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE AC8B alternator-supplied rectifier excitation system with speed input and input limiter. */
	class ExcAC8B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC8B();
		~ExcAC8B() override;

		/** \brief Input limiter indicator. true = input limiter <i>Vimax</i> and <i>Vimin</i> is considered false = input limiter <i>Vimax </i>and <i>Vimin</i> is not considered. Typical value = true. Default: false */
		CIMPP::Boolean inlim;

		/** \brief Voltage regulator gain (<i>Ka</i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (<i>Kc</i>) (&gt;= 0). Typical value = 0,55. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Demagnetizing factor, a function of exciter alternator reactances (<i>Kd</i>) (&gt;= 0).  Typical value = 1,1. Default: 0.0 */
		CIMPP::PU kd;

		/** \brief Voltage regulator derivative gain (<i>Kdr</i>) (&gt;= 0).  Typical value = 10. Default: 0.0 */
		CIMPP::PU kdr;

		/** \brief Exciter constant related to self-excited field (<i>Ke</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ke;

		/** \brief Voltage regulator integral gain (<i>Kir</i>) (&gt;= 0).  Typical value = 5. Default: 0.0 */
		CIMPP::PU kir;

		/** \brief Voltage regulator proportional gain (<i>Kpr</i>) (&gt; 0 if ExcAC8B.kir = 0).  Typical value = 80. Default: 0.0 */
		CIMPP::PU kpr;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (<i>Ks</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ks;

		/** \brief PID limiter indicator. true = input limiter <i>Vpidmax</i> and <i>Vpidmin</i> is considered false = input limiter <i>Vpidmax</i> and <i>Vpidmin</i> is not considered. Typical value = true. Default: false */
		CIMPP::Boolean pidlim;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>Ve</i><i><sub>1</sub></i>, back of commutating reactance (<i>Se[Ve</i><i><sub>1</sub></i><i>]</i>) (&gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>Ve</i><i><sub>2</sub></i>, back of commutating reactance (<i>Se[Ve</i><i><sub>2</sub></i><i>]</i>) (&gt;= 0).  Typical value = 3. Default: 0.0 */
		CIMPP::Float seve2;

		/** \brief Voltage regulator time constant (<i>Ta</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Lag time constant (<i>Tdr</i>) (&gt; 0 if ExcAC8B.kdr &gt; 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds tdr;

		/** \brief Exciter time constant, integration rate associated with exciter control (<i>Te</i>) (&gt; 0).  Typical value = 1,2. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Selector for the limiter on the block (<i>1/sTe</i>).  See diagram for meaning of true and false. Typical value = false. Default: false */
		CIMPP::Boolean telim;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (<i>Ve</i><i><sub>1</sub></i>) (&gt; 0).  Typical value = 6,5. Default: 0.0 */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (<i>Ve</i><i><sub>2</sub></i>) (&gt; 0).  Typical value = 9. Default: 0.0 */
		CIMPP::PU ve2;

		/** \brief Minimum exciter voltage output (<i>Vemin</i>) (&lt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU vemin;

		/** \brief Exciter field current limit reference (<i>Vfemax</i>).  Typical value = 6. Default: 0.0 */
		CIMPP::PU vfemax;

		/** \brief Input signal maximum (<i>Vimax</i>) (&gt; ExcAC8B.vimin).  Typical value = 35. Default: 0.0 */
		CIMPP::PU vimax;

		/** \brief Input signal minimum (<i>Vimin</i>) (&lt; ExcAC8B.vimax).  Typical value = -10. Default: 0.0 */
		CIMPP::PU vimin;

		/** \brief PID maximum controller output (<i>Vpidmax</i>) (&gt; ExcAC8B.vpidmin).  Typical value = 35. Default: 0.0 */
		CIMPP::PU vpidmax;

		/** \brief PID minimum controller output (<i>Vpidmin</i>) (&lt; ExcAC8B.vpidmax).  Typical value = -10. Default: 0.0 */
		CIMPP::PU vpidmin;

		/** \brief Maximum voltage regulator output (<i>Vrmax</i>) (&gt; 0). Typical value = 35. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (<i>Vrmin</i>) (&lt; 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU vrmin;

		/** \brief Multiply by generator`s terminal voltage indicator. true =the limits <i>Vrmax</i> and <i>Vrmin</i> are multiplied by the generator`s terminal voltage to represent a thyristor power stage fed from the generator terminals false = limits are not multiplied by generator`s terminal voltage.  Typical value = false. Default: false */
		CIMPP::Boolean vtmult;

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

	BaseClass* ExcAC8B_factory();
}
#endif
