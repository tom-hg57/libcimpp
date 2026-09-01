#ifndef ExcAVR3_H
#define ExcAVR3_H
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

	/** \brief Italian excitation system. It represents an exciter dynamo and electric regulator. */
	class ExcAVR3 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAVR3();
		~ExcAVR3() override;

		/** \brief Field voltage value 1 (<i>E</i><i><sub>1</sub></i>).  Typical value = 4,18. Default: 0.0 */
		CIMPP::PU e1;

		/** \brief Field voltage value 2 (<i>E</i><i><sub>2</sub></i>).  Typical value = 3,14. Default: 0.0 */
		CIMPP::PU e2;

		/** \brief AVR gain (<i>K</i><i><sub>A</sub></i>).  Typical value = 100. Default: 0.0 */
		CIMPP::Float ka;

		/** \brief Saturation factor at <i>E</i><i><sub>1</sub></i><i> </i>(<i>S[E</i><i><sub>1</sub></i><i>]</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Float se1;

		/** \brief Saturation factor at <i>E</i><i><sub>2</sub></i><i> </i>(<i>S[E</i><i><sub>2</sub></i><i>]</i>).  Typical value = 0,03. Default: 0.0 */
		CIMPP::Float se2;

		/** \brief AVR time constant (<i>T</i><i><sub>1</sub></i>) (&gt;= 0).  Typical value = 20. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief AVR time constant (<i>T</i><i><sub>2</sub></i>) (&gt;= 0).  Typical value = 1,6. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief AVR time constant (<i>T</i><i><sub>3</sub></i>) (&gt;= 0).  Typical value = 0,66. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief AVR time constant (<i>T</i><i><sub>4</sub></i>) (&gt;= 0).  Typical value = 0,07. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Exciter time constant (<i>T</i><i><sub>E</sub></i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Minimum AVR output (<i>V</i><i><sub>RMN</sub></i>).  Typical value = -7,5. Default: 0.0 */
		CIMPP::PU vrmn;

		/** \brief Maximum AVR output (<i>V</i><i><sub>RMX</sub></i>).  Typical value = 7,5. Default: 0.0 */
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

	BaseClass* ExcAVR3_factory();
}
#endif
