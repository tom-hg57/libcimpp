#ifndef ExcIEEEAC7B_H
#define ExcIEEEAC7B_H
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

	/** \brief IEEE 421.5-2005 type AC7B model. The model represents excitation systems which consist of an AC alternator with either stationary or rotating rectifiers to produce the DC field requirements. It is an upgrade to earlier AC excitation systems, which replace only the controls but retain the AC alternator and diode rectifier bridge. Reference: IEEE 421.5-2005, 6.7. Note, however, that in IEEE 421.5-2005, the [1 / <i>sT</i><i><sub>E</sub></i>] block is shown as [1 / (1 + <i>sT</i><i><sub>E</sub></i>)], which is incorrect. */
	class ExcIEEEAC7B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEAC7B();
		~ExcIEEEAC7B() override;

		/** \brief Rectifier loading factor proportional to commutating reactance (<i>K</i><i><sub>C</sub></i>) (&gt;= 0). Typical value = 0,18. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Demagnetizing factor, a function of exciter alternator reactances (<i>K</i><i><sub>D</sub></i>) (&gt;= 0).  Typical value = 0,02. Default: 0.0 */
		CIMPP::PU kd;

		/** \brief Voltage regulator derivative gain (<i>K</i><i><sub>DR</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kdr;

		/** \brief Exciter constant related to self-excited field (<i>K</i><i><sub>E</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gain (<i>K</i><i><sub>F1</sub></i>) (&gt;= 0).  Typical value = 0,212. Default: 0.0 */
		CIMPP::PU kf1;

		/** \brief Excitation control system stabilizer gain (<i>K</i><i><sub>F2</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kf2;

		/** \brief Excitation control system stabilizer gain (<i>K</i><i><sub>F3</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kf3;

		/** \brief Voltage regulator integral gain (<i>K</i><i><sub>IA</sub></i>) (&gt;= 0).  Typical value = 59,69. Default: 0.0 */
		CIMPP::PU kia;

		/** \brief Voltage regulator integral gain (<i>K</i><i><sub>IR</sub></i>) (&gt;= 0).  Typical value = 4,24. Default: 0.0 */
		CIMPP::PU kir;

		/** \brief Exciter field voltage lower limit parameter (<i>K</i><i><sub>L</sub></i>).  Typical value = 10. Default: 0.0 */
		CIMPP::PU kl;

		/** \brief Potential circuit gain coefficient (<i>K</i><i><sub>P</sub></i>) (&gt; 0).  Typical value = 4,96. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Voltage regulator proportional gain (<i>K</i><i><sub>PA</sub></i>) (&gt; 0 if ExcIEEEAC7B.kia = 0).  Typical value = 65,36. Default: 0.0 */
		CIMPP::PU kpa;

		/** \brief Voltage regulator proportional gain (<i>K</i><i><sub>PR</sub></i>) (&gt; 0 if ExcIEEEAC7B.kir = 0).  Typical value = 4,24. Default: 0.0 */
		CIMPP::PU kpr;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>V</i><i><sub>E1</sub></i>, back of commutating reactance (<i>S</i><i><sub>E</sub></i><i>[V</i><i><sub>E1</sub></i><i>]</i>) (&gt;= 0).  Typical value = 0,44. Default: 0.0 */
		CIMPP::Float seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>V</i><i><sub>E2</sub></i>, back of commutating reactance (<i>S</i><i><sub>E</sub></i><i>[V</i><i><sub>E2</sub></i><i>]</i>) (&gt;= 0).  Typical value = 0,075. Default: 0.0 */
		CIMPP::Float seve2;

		/** \brief Lag time constant (<i>T</i><i><sub>DR</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tdr;

		/** \brief Exciter time constant, integration rate associated with exciter control (<i>T</i><i><sub>E</sub></i>) (&gt; 0).  Typical value = 1,1. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (<i>T</i><i><sub>F</sub></i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Maximum voltage regulator output (<i>V</i><i><sub>AMAX</sub></i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU vamax;

		/** \brief Minimum voltage regulator output (<i>V</i><i><sub>AMIN</sub></i>) (&lt; 0).  Typical value = -0,95. Default: 0.0 */
		CIMPP::PU vamin;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (<i>V</i><i><sub>E1</sub></i>) (&gt; 0).  Typical value = 6,3. Default: 0.0 */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (<i>V</i><i><sub>E2</sub></i>) (&gt; 0).  Typical value = 3,02. Default: 0.0 */
		CIMPP::PU ve2;

		/** \brief Minimum exciter voltage output (<i>V</i><i><sub>EMIN</sub></i>) (&lt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU vemin;

		/** \brief Exciter field current limit reference (<i>V</i><i><sub>FEMAX</sub></i>).  Typical value = 6,9. Default: 0.0 */
		CIMPP::PU vfemax;

		/** \brief Maximum voltage regulator output (<i>V</i><i><sub>RMAX</sub></i>) (&gt; 0).  Typical value = 5,79. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (<i>V</i><i><sub>RMIN</sub></i>) (&lt; 0).  Typical value = -5,79. Default: 0.0 */
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

	BaseClass* ExcIEEEAC7B_factory();
}
#endif
