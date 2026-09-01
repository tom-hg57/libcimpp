#ifndef ExcAC6A_H
#define ExcAC6A_H
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

#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE AC6A alternator-supplied rectifier excitation system with speed input. */
	class ExcAC6A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAC6A();
		~ExcAC6A() override;

		/** \brief Voltage regulator gain (<i>Ka</i>) (&gt; 0).  Typical value = 536. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (<i>Kc</i>) (&gt;= 0).  Typical value = 0,173. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Demagnetizing factor, a function of exciter alternator reactances (<i>Kd</i>) (&gt;= 0).  Typical value = 1,91. Default: 0.0 */
		CIMPP::PU kd;

		/** \brief Exciter constant related to self-excited field (<i>Ke</i>).  Typical value = 1,6. Default: 0.0 */
		CIMPP::PU ke;

		/** \brief Exciter field current limiter gain (<i>Kh</i>) (&gt;= 0).  Typical value = 92. Default: 0.0 */
		CIMPP::PU kh;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (<i>Ks</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ks;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>Ve</i><i><sub>1</sub></i>, back of commutating reactance (<i>Se[Ve</i><i><sub>1</sub></i><i>]</i>) (&gt;= 0).  Typical value = 0,214. Default: 0.0 */
		CIMPP::Float seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>Ve</i><i><sub>2</sub></i>, back of commutating reactance (<i>Se[Ve</i><i><sub>2</sub></i><i>]</i>) (&gt;= 0).  Typical value = 0,044. Default: 0.0 */
		CIMPP::Float seve2;

		/** \brief Voltage regulator time constant (<i>Ta</i>) (&gt;= 0).  Typical value = 0,086. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (<i>Tb</i>) (&gt;= 0).  Typical value = 9. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (<i>Tc</i>) (&gt;= 0).  Typical value = 3. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (<i>Te</i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Exciter field current limiter time constant (<i>Th</i>) (&gt; 0).  Typical value = 0,08. Default: 0.0 */
		CIMPP::Seconds th;

		/** \brief Exciter field current limiter time constant (<i>Tj</i>) (&gt;= 0).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds tj;

		/** \brief Voltage regulator time constant (<i>Tk</i>) (&gt;= 0).  Typical value = 0,18. Default: 0.0 */
		CIMPP::Seconds tk;

		/** \brief Maximum voltage regulator output (<i>Vamax</i>) (&gt; 0).  Typical value = 75. Default: 0.0 */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (<i>Vamin</i>) (&lt; 0).  Typical value = -75. Default: 0.0 */
		CIMPP::PU vamin;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (<i>Ve</i><i><sub>1</sub></i>) (&gt; 0).  Typical value = 7,4. Default: 0.0 */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (<i>Ve</i><i><sub>2</sub></i>) (&gt; 0).  Typical value = 5,55. Default: 0.0 */
		CIMPP::PU ve2;

		/** \brief Exciter field current limit reference (<i>Vfelim</i>) (&gt; 0).  Typical value = 19. Default: 0.0 */
		CIMPP::PU vfelim;

		/** \brief Maximum field current limiter signal reference (<i>Vhmax</i>) (&gt; 0).  Typical value = 75. Default: 0.0 */
		CIMPP::PU vhmax;

		/** \brief Maximum voltage regulator output (<i>Vrmax</i>) (&gt; 0).  Typical value = 44. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (<i>Vrmin</i>) (&lt; 0).  Typical value = -36. Default: 0.0 */
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

	BaseClass* ExcAC6A_factory();
}
#endif
