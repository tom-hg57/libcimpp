#ifndef ExcAVR1_H
#define ExcAVR1_H
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

	/** \brief Italian excitation system corresponding to IEEE (1968) type 1 model. It represents an exciter dynamo and electromechanical regulator. */
	class ExcAVR1 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAVR1();
		~ExcAVR1() override;

		/** \brief Field voltage value 1 (<i>E</i><i><sub>1</sub></i>).  Typical value = 4.18. Default: 0.0 */
		CIMPP::PU e1;

		/** \brief Field voltage value 2 (<i>E</i><i><sub>2</sub></i>).  Typical value = 3,14. Default: 0.0 */
		CIMPP::PU e2;

		/** \brief AVR gain (<i>K</i><i><sub>A</sub></i>).  Typical value = 500. Default: 0.0 */
		CIMPP::Float ka;

		/** \brief Rate feedback gain (<i>K</i><i><sub>F</sub></i>).  Typical value = 0,12. Default: 0.0 */
		CIMPP::Float kf;

		/** \brief Saturation factor at <i>E</i><i><sub>1</sub></i> (<i>S[E</i><i><sub>1</sub></i><i>]</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Float se1;

		/** \brief Saturation factor at <i>E</i><i><sub>2</sub></i> (<i>S[E</i><i><sub>2</sub></i><i>]</i>).  Typical value = 0,03. Default: 0.0 */
		CIMPP::Float se2;

		/** \brief AVR time constant (<i>T</i><i><sub>A</sub></i>) (&gt;= 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief AVR time constant (<i>T</i><i><sub>B</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Exciter time constant (<i>T</i><i><sub>E</sub></i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Rate feedback time constant (<i>T</i><i><sub>F</sub></i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Minimum AVR output (<i>V</i><i><sub>RMN</sub></i>).  Typical value = -6. Default: 0.0 */
		CIMPP::PU vrmn;

		/** \brief Maximum AVR output (<i>V</i><i><sub>RMX</sub></i>).  Typical value = 7. Default: 0.0 */
		CIMPP::PU vrmx;

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

	BaseClass* ExcAVR1_factory();
}
#endif
