#ifndef ExcAC2A_H
#define ExcAC2A_H
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

	/** \brief Modified IEEE AC2A alternator-supplied rectifier excitation system with different field current limit. */
	class ExcAC2A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC2A();
		~ExcAC2A() override;

		/** \brief Indicates if HV gate is active (<i>HVgate</i>). true = gate is used false = gate is not used. Typical value = true. Default: false */
		CIMPP::Boolean hvgate;

		/** \brief Voltage regulator gain (<i>Ka</i>) (&gt; 0).  Typical value = 400. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Second stage regulator gain (<i>Kb</i>) (&gt; 0).  Exciter field current controller gain.  Typical value = 25. Default: 0.0 */
		CIMPP::PU kb;

		/** \brief Second stage regulator gain (<i>Kb1</i>). It is exciter field current controller gain used as alternative to <i>Kb</i> to represent a variant of the ExcAC2A model.  Typical value = 25. Default: 0.0 */
		CIMPP::PU kb1;

		/** \brief Rectifier loading factor proportional to commutating reactance (<i>Kc</i>) (&gt;= 0).  Typical value = 0,28. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Demagnetizing factor, a function of exciter alternator reactances (<i>Kd</i>) (&gt;= 0).  Typical value = 0,35. Default: 0.0 */
		CIMPP::PU kd;

		/** \brief Exciter constant related to self-excited field (<i>Ke</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gains (<i>Kf</i>) (&gt;= 0).  Typical value = 0,03. Default: 0.0 */
		CIMPP::PU kf;

		/** \brief Exciter field current feedback gain (<i>Kh</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kh;

		/** \brief Exciter field current limiter gain (<i>Kl</i>).  Typical value = 10. Default: 0.0 */
		CIMPP::PU kl;

		/** \brief Coefficient to allow different usage of the model (<i>Kl1</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kl1;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (<i>Ks</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ks;

		/** \brief Indicates if LV gate is active (<i>LVgate</i>). true = gate is used false = gate is not used. Typical value = true. Default: false */
		CIMPP::Boolean lvgate;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>Ve</i><i><sub>1</sub></i>, back of commutating reactance (<i>Se[Ve</i><i><sub>1</sub></i><i>]</i>) (&gt;= 0).  Typical value = 0,037. Default: 0.0 */
		CIMPP::Float seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>Ve</i><i><sub>2</sub></i>, back of commutating reactance (<i>Se[Ve</i><i><sub>2</sub></i><i>]</i>) (&gt;= 0).  Typical value = 0,012. Default: 0.0 */
		CIMPP::Float seve2;

		/** \brief Voltage regulator time constant (<i>Ta</i>) (&gt; 0).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (<i>Tb</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (<i>Tc</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (<i>Te</i>) (&gt; 0).  Typical value = 0,6. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (<i>Tf</i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Maximum voltage regulator output (<i>Vamax</i>) (&gt; 0).  Typical value = 8. Default: 0.0 */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (<i>Vamin</i>) (&lt; 0).  Typical value = -8. Default: 0.0 */
		CIMPP::PU vamin;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (<i>Ve</i><i><sub>1</sub></i>) (&gt; 0).  Typical value = 4,4. Default: 0.0 */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (<i>Ve</i><i><sub>2</sub></i>) (&gt; 0).  Typical value = 3,3. Default: 0.0 */
		CIMPP::PU ve2;

		/** \brief Exciter field current limit reference (<i>Vfemax</i>) (&gt;= 0).  Typical value = 4,4. Default: 0.0 */
		CIMPP::PU vfemax;

		/** \brief Maximum exciter field current (<i>Vlr</i>) (&gt; 0).  Typical value = 4,4. Default: 0.0 */
		CIMPP::PU vlr;

		/** \brief Maximum voltage regulator outputs (<i>Vrmax</i>) (&gt; 0).  Typical value = 105. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator outputs (<i>Vrmin</i>) (&lt; 0).  Typical value = -95. Default: 0.0 */
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

	BaseClass* ExcAC2A_factory();
}
#endif
