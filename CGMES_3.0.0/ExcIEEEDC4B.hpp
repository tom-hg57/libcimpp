#ifndef ExcIEEEDC4B_H
#define ExcIEEEDC4B_H
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

	/** \brief IEEE 421.5-2005 type DC4B model. These excitation systems utilize a field-controlled DC commutator exciter with a continuously acting voltage regulator having supplies obtained from the generator or auxiliary bus. Reference: IEEE 421.5-2005, 5.4. */
	class ExcIEEEDC4B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEDC4B();
		~ExcIEEEDC4B() override;

		/** \brief Exciter voltage at which exciter saturation is defined (<i>E</i><i><sub>FD1</sub></i>) (&gt; 0).  Typical value = 1,75. Default: 0.0 */
		CIMPP::PU efd1;

		/** \brief Exciter voltage at which exciter saturation is defined (<i>E</i><i><sub>FD2</sub></i>) (&gt; 0).  Typical value = 2,33. Default: 0.0 */
		CIMPP::PU efd2;

		/** \brief Voltage regulator gain (<i>K</i><i><sub>A</sub></i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Regulator derivative gain (<i>K</i><i><sub>D</sub></i>) (&gt;= 0).  Typical value = 20. Default: 0.0 */
		CIMPP::PU kd;

		/** \brief Exciter constant related to self-excited field (<i>K</i><i><sub>E</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gain (<i>K</i><i><sub>F</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kf;

		/** \brief Regulator integral gain (<i>K</i><i><sub>I</sub></i>) (&gt;= 0).  Typical value = 20. Default: 0.0 */
		CIMPP::PU ki;

		/** \brief Regulator proportional gain (<i>K</i><i><sub>P</sub></i>) (&gt;= 0).  Typical value = 20. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief OEL input (<i>OELin</i>). true = LV gate false = subtract from error signal. Typical value = true. Default: false */
		CIMPP::Boolean oelin;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>E</i><i><sub>FD1</sub></i> (<i>S</i><i><sub>E</sub></i><i>[E</i><i><sub>FD1</sub></i><i>]</i>) (&gt;= 0).  Typical value = 0,08. Default: 0.0 */
		CIMPP::Float seefd1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>E</i><i><sub>FD2</sub></i> (<i>S</i><i><sub>E</sub></i><i>[E</i><i><sub>FD2</sub></i><i>]</i>) (&gt;= 0).  Typical value = 0,27. Default: 0.0 */
		CIMPP::Float seefd2;

		/** \brief Voltage regulator time constant (<i>T</i><i><sub>A</sub></i>) (&gt; 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Regulator derivative filter time constant (<i>T</i><i><sub>D</sub></i>) (&gt; 0 if ExcIEEEDC4B.kd &gt; 0).  Typical value = 0,01. Default: 0.0 */
		CIMPP::Seconds td;

		/** \brief Exciter time constant, integration rate associated with exciter control (<i>T</i><i><sub>E</sub></i>) (&gt; 0).  Typical value = 0,8. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (<i>T</i><i><sub>F</sub></i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief UEL input (<i>UELin</i>). true = HV gate false = add to error signal. Typical value = true. Default: false */
		CIMPP::Boolean uelin;

		/** \brief Minimum exciter voltage output (<i>V</i><i><sub>EMIN</sub></i>) (&lt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU vemin;

		/** \brief Maximum voltage regulator output (<i>V</i><i><sub>RMAX</sub></i>) (&gt; ExcIEEEDC4B.vrmin).  Typical value = 2,7. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (<i>V</i><i><sub>RMIN</sub></i>) (&lt;= 0 and &lt; ExcIEEEDC4B.vrmax).  Typical value = -0,9. Default: 0.0 */
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

	BaseClass* ExcIEEEDC4B_factory();
}
#endif
