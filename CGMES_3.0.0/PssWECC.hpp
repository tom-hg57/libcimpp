#ifndef PssWECC_H
#define PssWECC_H
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

	/** \brief Dual input power system stabilizer, based on IEEE type 2, with modified output limiter defined by WECC (Western Electricity Coordinating Council, USA). */
	class PssWECC : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssWECC();
		~PssWECC() override;

		/** \brief Type of input signal #1 (rotorAngularFrequencyDeviation, busFrequencyDeviation, generatorElectricalPower, generatorAcceleratingPower, busVoltage, or busVoltageDerivative - shall be different than PssWECC.inputSignal2Type).  Typical value = rotorAngularFrequencyDeviation. Default: 0 */
		CIMPP::InputSignalKind inputSignal1Type;

		/** \brief Type of input signal #2 (rotorAngularFrequencyDeviation, busFrequencyDeviation, generatorElectricalPower, generatorAcceleratingPower, busVoltage, busVoltageDerivative - shall be different than PssWECC.inputSignal1Type).  Typical value = busVoltageDerivative. Default: 0 */
		CIMPP::InputSignalKind inputSignal2Type;

		/** \brief Input signal 1 gain (<i>K</i><i><sub>1</sub></i>).  Typical value = 1,13. Default: 0.0 */
		CIMPP::PU k1;

		/** \brief Input signal 2 gain (<i>K</i><i><sub>2</sub></i>).  Typical value = 0,0. Default: 0.0 */
		CIMPP::PU k2;

		/** \brief Input signal 1 transducer time constant (<i>T</i><i><sub>1</sub></i>) (&gt;= 0).  Typical value = 0,037. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Lag time constant (<i>T</i><i><sub>10</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t10;

		/** \brief Input signal 2 transducer time constant (<i>T</i><i><sub>2</sub></i>) (&gt;= 0).  Typical value = 0,0. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Stabilizer washout time constant (<i>T</i><i><sub>3</sub></i>) (&gt;= 0).  Typical value = 9,5. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Stabilizer washout time lag constant (<i>T</i><i><sub>4</sub></i>) (&gt;= 0).  Typical value = 9,5. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Lead time constant (<i>T</i><i><sub>5</sub></i>) (&gt;= 0).  Typical value = 1,7. Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Lag time constant (<i>T</i><i><sub>6</sub></i>) (&gt;= 0).  Typical value = 1,5. Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Lead time constant (<i>T</i><i><sub>7</sub></i>) (&gt;= 0).  Typical value = 1,7. Default: 0.0 */
		CIMPP::Seconds t7;

		/** \brief Lag time constant (<i>T</i><i><sub>8</sub></i>) (&gt;= 0).  Typical value = 1,5. Default: 0.0 */
		CIMPP::Seconds t8;

		/** \brief Lead time constant (<i>T</i><i><sub>9</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t9;

		/** \brief Minimum value for voltage compensator output (<i>V</i><i><sub>CL</sub></i>). Typical value = 0. Default: 0.0 */
		CIMPP::PU vcl;

		/** \brief Maximum value for voltage compensator output (<i>V</i><i><sub>CU</sub></i>). Typical value = 0. Default: 0.0 */
		CIMPP::PU vcu;

		/** \brief Maximum output signal (<i>Vsmax</i>) (&gt; PssWECC.vsmin). Typical value = 0,05. Default: 0.0 */
		CIMPP::PU vsmax;

		/** \brief Minimum output signal (<i>Vsmin</i>) (&lt; PssWECC.vsmax).  Typical value = -0,05. Default: 0.0 */
		CIMPP::PU vsmin;

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

	BaseClass* PssWECC_factory();
}
#endif
