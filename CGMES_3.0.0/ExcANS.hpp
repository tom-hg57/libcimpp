#ifndef ExcANS_H
#define ExcANS_H
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
#include "Integer.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Italian excitation system. It represents static field voltage or excitation current feedback excitation system. */
	class ExcANS : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcANS();
		~ExcANS() override;

		/** \brief Governor control flag (<i>BLINT</i>).  0 = lead-lag regulator 1 = proportional integral regulator. Typical value = 0. Default: 0 */
		CIMPP::Integer blint;

		/** \brief Minimum exciter current (<i>I</i><i><sub>FMN</sub></i>).  Typical value = -5,2. Default: 0.0 */
		CIMPP::PU ifmn;

		/** \brief Maximum exciter current (<i>I</i><i><sub>FMX</sub></i>).  Typical value = 6,5. Default: 0.0 */
		CIMPP::PU ifmx;

		/** \brief Exciter gain (<i>K</i><i><sub>2</sub></i>).  Typical value = 20. Default: 0.0 */
		CIMPP::Float k2;

		/** \brief AVR gain (<i>K</i><i><sub>3</sub></i>).  Typical value = 1000. Default: 0.0 */
		CIMPP::Float k3;

		/** \brief Ceiling factor (<i>K</i><i><sub>CE</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::Float kce;

		/** \brief Feedback enabling (<i>K</i><i><sub>RVECC</sub></i>).  0 = open loop control 1 = closed loop control. Typical value = 1. Default: 0 */
		CIMPP::Integer krvecc;

		/** \brief Rate feedback signal flag (<i>K</i><i><sub>VFIF</sub></i>).  0 = output voltage of the exciter 1 = exciter field current. Typical value = 0. Default: 0 */
		CIMPP::Integer kvfif;

		/** \brief Time constant (<i>T</i><i><sub>1</sub></i>) (&gt;= 0).  Typical value = 20. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Time constant (<i>T</i><i><sub>2</sub></i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Time constant (<i>T</i><i><sub>3</sub></i>) (&gt;= 0).  Typical value = 1,6. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Exciter time constant (<i>T</i><i><sub>B</sub></i>) (&gt;= 0).  Typical value = 0,04. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Minimum AVR output (<i>V</i><i><sub>RMN</sub></i>).  Typical value = -5,2. Default: 0.0 */
		CIMPP::PU vrmn;

		/** \brief Maximum AVR output (<i>V</i><i><sub>RMX</sub></i>).  Typical value = 6,5. Default: 0.0 */
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

	BaseClass* ExcANS_factory();
}
#endif
