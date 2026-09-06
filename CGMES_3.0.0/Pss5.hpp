#ifndef Pss5_H
#define Pss5_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Detailed Italian PSS. */
	class Pss5 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss5();
		~Pss5() override;

		/** \brief Selector for second washout enabling (<i>C</i><i><sub>TW2</sub></i>). true = second washout filter is bypassed false = second washout filter in use. Typical value = true. Default: false */
		CIMPP::Boolean ctw2;

		/** \brief Stabilizer output deadband (<i>DEADBAND</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU deadband;

		/** \brief Selector for frequency/shaft speed input (<i>isFreq</i>). true = speed (same meaning as InputSignaKind.rotorSpeed) false = frequency (same meaning as InputSignalKind.busFrequency). Typical value = true (same meaning as InputSignalKind.rotorSpeed). Default: false */
		CIMPP::Boolean isfreq;

		/** \brief Frequency/shaft speed input gain (<i>K</i><i><sub>F</sub></i>).  Typical value = 5. Default: 0.0 */
		CIMPP::Float kf;

		/** \brief Electric power input gain (<i>K</i><i><sub>PE</sub></i>).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float kpe;

		/** \brief PSS gain (<i>K</i><i><sub>PSS</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::Float kpss;

		/** \brief Minimum power PSS enabling (<i>Pmin</i>).  Typical value = 0,25. Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>L1</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tl1;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>L2</sub></i>) (&gt;= 0).  If = 0, both blocks are bypassed.  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tl2;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>L3</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tl3;

		/** \brief Lead/lag time constant (T<sub>L4</sub>) (&gt;= 0).  If = 0, both blocks are bypassed.  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tl4;

		/** \brief Electric power filter time constant (<i>T</i><i><sub>PE</sub></i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds tpe;

		/** \brief First washout (<i>T</i><i><sub>W1</sub></i>) (&gt;= 0).  Typical value = 3,5. Default: 0.0 */
		CIMPP::Seconds tw1;

		/** \brief Second washout (<i>T</i><i><sub>W2</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tw2;

		/** \brief <font color=`#0f0f0f`>Signal selector (<i>V</i><i><sub>adAtt</sub></i>).</font> <font color=`#0f0f0f`>true = closed (generator power is greater than <i>Pmin</i>)</font> <font color=`#0f0f0f`>false = open (<i>Pe</i> is smaller than <i>Pmin</i>).</font> <font color=`#0f0f0f`>Typical value = true.</font> Default: false */
		CIMPP::Boolean vadat;

		/** \brief Stabilizer output maximum limit (<i>V</i><i><sub>SMN</sub></i>).  Typical value = -0,1. Default: 0.0 */
		CIMPP::PU vsmn;

		/** \brief Stabilizer output minimum limit (<i>V</i><i><sub>SMX</sub></i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU vsmx;

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

	BaseClass* Pss5_factory();
}
#endif
