#ifndef PssIEEE3B_H
#define PssIEEE3B_H
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

#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE 421.5-2005 type PSS3B power system stabilizer model. The PSS model PSS3B has dual inputs of electrical power and rotor angular frequency deviation. The signals are used to derive an equivalent mechanical power signal. This model has 2 input signals. They have the following fixed types (expressed in terms of InputSignalKind values): the first one is of rotorAngleFrequencyDeviation type and the second one is of generatorElectricalPower type. Reference: IEEE 3B 421.5-2005, 8.3. */
	class PssIEEE3B : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssIEEE3B();
		~PssIEEE3B() override;

		/** \brief Notch filter parameter (<i>A1</i>).  Typical value = 0,359. Default: 0.0 */
		CIMPP::PU a1;

		/** \brief Notch filter parameter (<i>A2</i>).  Typical value = 0,586. Default: 0.0 */
		CIMPP::PU a2;

		/** \brief Notch filter parameter (<i>A3</i>).  Typical value = 0,429. Default: 0.0 */
		CIMPP::PU a3;

		/** \brief Notch filter parameter (<i>A4</i>).  Typical value = 0,564. Default: 0.0 */
		CIMPP::PU a4;

		/** \brief Notch filter parameter (<i>A5</i>).  Typical value = 0,001. Default: 0.0 */
		CIMPP::PU a5;

		/** \brief Notch filter parameter (<i>A6</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU a6;

		/** \brief Notch filter parameter (<i>A7</i>).  Typical value = 0,031. Default: 0.0 */
		CIMPP::PU a7;

		/** \brief Notch filter parameter (<i>A8</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU a8;

		/** \brief Gain on signal # 1 (<i>Ks1</i>).  Typical value = -0,602. Default: 0.0 */
		CIMPP::PU ks1;

		/** \brief Gain on signal # 2 (<i>Ks2</i>).  Typical value = 30,12. Default: 0.0 */
		CIMPP::PU ks2;

		/** \brief Transducer time constant (<i>T1</i>) (&gt;= 0).  Typical value = 0,012. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Transducer time constant (<i>T2</i>) (&gt;= 0).  Typical value = 0,012. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Washout time constant (<i>Tw1</i>) (&gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Seconds tw1;

		/** \brief Washout time constant (<i>Tw2</i>) (&gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Seconds tw2;

		/** \brief Washout time constant (<i>Tw3</i>) (&gt;= 0).  Typical value = 0,6. Default: 0.0 */
		CIMPP::Seconds tw3;

		/** \brief Stabilizer output maximum limit (<i>Vstmax</i>) (&gt; PssIEEE3B.vstmin).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU vstmax;

		/** \brief Stabilizer output minimum limit (<i>Vstmin</i>) (&lt; PssIEEE3B.vstmax).  Typical value = -0,1. Default: 0.0 */
		CIMPP::PU vstmin;

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

	BaseClass* PssIEEE3B_factory();
}
#endif
