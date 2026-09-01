#ifndef PssIEEE1A_H
#define PssIEEE1A_H
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

#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE 421.5-2005 type PSS1A power system stabilizer model. PSS1A is the generalized form of a PSS with a single input signal.  Reference: IEEE 1A 421.5-2005, 8.1. */
	class PssIEEE1A : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssIEEE1A();
		~PssIEEE1A() override;

		/** \brief PSS signal conditioning frequency filter constant (<i>A1</i>).  Typical value = 0,061. Default: 0.0 */
		CIMPP::PU a1;

		/** \brief PSS signal conditioning frequency filter constant (<i>A2</i>).  Typical value = 0,0017. Default: 0.0 */
		CIMPP::PU a2;

		/** \brief Type of input signal (rotorAngularFrequencyDeviation, generatorElectricalPower, or busFrequencyDeviation).  Typical value = rotorAngularFrequencyDeviation. Default: 0 */
		CIMPP::InputSignalKind inputSignalType;

		/** \brief Stabilizer gain (<i>Ks</i>).  Typical value = 5. Default: 0.0 */
		CIMPP::PU ks;

		/** \brief Lead/lag time constant (<i>T1</i>) (&gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Lead/lag time constant (<i>T2</i>) (&gt;= 0).  Typical value = 0,03. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Lead/lag time constant (<i>T3</i>) (&gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Lead/lag time constant (<i>T4</i>) (&gt;= 0).  Typical value = 0,03. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Washout time constant (<i>T5</i>) (&gt;= 0).  Typical value = 10. Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Transducer time constant (<i>T6</i>) (&gt;= 0).  Typical value = 0,01. Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Maximum stabilizer output (<i>Vrmax</i>) (&gt; PssIEEE1A.vrmin).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum stabilizer output (<i>Vrmin</i>) (&lt; PssIEEE1A.vrmax).  Typical value = -0,05. Default: 0.0 */
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

	BaseClass* PssIEEE1A_factory();
}
#endif
