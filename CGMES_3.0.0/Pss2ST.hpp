#ifndef Pss2ST_H
#define Pss2ST_H
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

	/** \brief PTI microprocessor-based stabilizer type 1. */
	class Pss2ST : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss2ST();
		~Pss2ST() override;

		/** \brief Type of input signal #1 (rotorAngularFrequencyDeviation, busFrequencyDeviation, generatorElectricalPower, generatorAcceleratingPower, busVoltage, or busVoltageDerivative - shall be different than Pss2ST.inputSignal2Type).  Typical value = rotorAngularFrequencyDeviation. Default: 0 */
		CIMPP::InputSignalKind inputSignal1Type;

		/** \brief Type of input signal #2 (rotorAngularFrequencyDeviation, busFrequencyDeviation, generatorElectricalPower, generatorAcceleratingPower, busVoltage, or busVoltageDerivative - shall be different than Pss2ST.inputSignal1Type).  Typical value = busVoltageDerivative. Default: 0 */
		CIMPP::InputSignalKind inputSignal2Type;

		/** \brief Gain (<i>K</i><i><sub>1</sub></i>). Default: 0.0 */
		CIMPP::PU k1;

		/** \brief Gain (<i>K</i><i><sub>2</sub></i>). Default: 0.0 */
		CIMPP::PU k2;

		/** \brief Limiter (<i>L</i><i><sub>SMAX</sub></i>) (&gt; Pss2ST.lsmin). Default: 0.0 */
		CIMPP::PU lsmax;

		/** \brief Limiter (<i>L</i><i><sub>SMIN</sub></i>) (&lt; Pss2ST.lsmax). Default: 0.0 */
		CIMPP::PU lsmin;

		/** \brief Time constant (<i>T</i><i><sub>1</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Time constant (<i>T</i><i><sub>10</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t10;

		/** \brief Time constant (<i>T</i><i><sub>2</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Time constant (<i>T</i><i><sub>3</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Time constant (<i>T</i><i><sub>4</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Time constant (<i>T</i><i><sub>5</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Time constant (<i>T</i><i><sub>6</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Time constant (<i>T</i><i><sub>7</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t7;

		/** \brief Time constant (<i>T</i><i><sub>8</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t8;

		/** \brief Time constant (<i>T</i><i><sub>9</sub></i>) (&gt;= 0). Default: 0.0 */
		CIMPP::Seconds t9;

		/** \brief Cutoff limiter (<i>V</i><i><sub>CL</sub></i>). Default: 0.0 */
		CIMPP::PU vcl;

		/** \brief Cutoff limiter (<i>V</i><i><sub>CU</sub></i>). Default: 0.0 */
		CIMPP::PU vcu;

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

	BaseClass* Pss2ST_factory();
}
#endif
