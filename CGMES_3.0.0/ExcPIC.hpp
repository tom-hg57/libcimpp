#ifndef ExcPIC_H
#define ExcPIC_H
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

	/** \brief Proportional/integral regulator excitation system.  This model can be used to represent excitation systems with a proportional-integral (PI) voltage regulator controller. */
	class ExcPIC : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcPIC();
		~ExcPIC() override;

		/** \brief Field voltage value 1 (<i>E</i><i><sub>1</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU e1;

		/** \brief Field voltage value 2 (<i>E</i><i><sub>2</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU e2;

		/** \brief Exciter maximum limit (<i>E</i><i><sub>fdmax</sub></i>) (&gt; ExcPIC.efdmin).  Typical value = 8. Default: 0.0 */
		CIMPP::PU efdmax;

		/** \brief Exciter minimum limit (<i>E</i><i><sub>fdmin</sub></i>) (&lt; ExcPIC.efdmax).  Typical value = -0,87. Default: 0.0 */
		CIMPP::PU efdmin;

		/** \brief PI controller gain (<i>K</i><i><sub>a</sub></i>).  Typical value = 3,15. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Exciter regulation factor (<i>K</i><i><sub>c</sub></i>).  Typical value = 0,08. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Exciter constant (<i>K</i><i><sub>e</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ke;

		/** \brief Rate feedback gain (<i>K</i><i><sub>f</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU kf;

		/** \brief Current source gain (<i>K</i><i><sub>i</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ki;

		/** \brief Potential source gain (<i>K</i><i><sub>p</sub></i>).  Typical value = 6,5. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Saturation factor at <i>E</i><i><sub>1</sub></i> (<i>Se</i><i><sub>1</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU se1;

		/** \brief Saturation factor at <i>E</i><i><sub>2</sub></i> (<i>Se</i><i><sub>2</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU se2;

		/** \brief PI controller time constant (<i>T</i><i><sub>a1</sub></i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds ta1;

		/** \brief Voltage regulator time constant (<i>T</i><i><sub>a2</sub></i>) (&gt;= 0).  Typical value = 0,01. Default: 0.0 */
		CIMPP::Seconds ta2;

		/** \brief Lead time constant (<i>T</i><i><sub>a3</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ta3;

		/** \brief Lag time constant (<i>T</i><i><sub>a4</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ta4;

		/** \brief Exciter time constant (<i>T</i><i><sub>e</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Rate feedback time constant (<i>T</i><i><sub>f1</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tf1;

		/** \brief Rate feedback lag time constant (<i>T</i><i><sub>f2</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tf2;

		/** \brief PI maximum limit (<i>V</i><i><sub>r1</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU vr1;

		/** \brief PI minimum limit (<i>V</i><i><sub>r2</sub></i>).  Typical value = -0,87. Default: 0.0 */
		CIMPP::PU vr2;

		/** \brief Voltage regulator maximum limit (<i>V</i><i><sub>rmax</sub></i>) (&gt; ExcPIC.vrmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Voltage regulator minimum limit (<i>V</i><i><sub>rmin</sub></i>) (&lt; ExcPIC.vrmax).  Typical value = -0,87. Default: 0.0 */
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

	BaseClass* ExcPIC_factory();
}
#endif
