#ifndef LoadMotor_H
#define LoadMotor_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class LoadAggregate;

	/** \brief Aggregate induction motor load. This model is used to represent a fraction of an ordinary load as "induction motor load".  It allows a load that is treated as an ordinary constant power in power flow analysis to be represented by an induction motor in dynamic simulation. This model is intended for representation of aggregations of many motors dispersed through a load represented at a high voltage bus but where there is no information on the characteristics of individual motors. Either a "one-cage" or "two-cage" model of the induction machine can be modelled. Magnetic saturation is not modelled. This model treats a fraction of the constant power part of a load as a motor. During initialisation, the initial power drawn by the motor is set equal to <i>Pfrac</i> times the constant <i>P</i> part of the static load.  The remainder of the load is left as a static load. The reactive power demand of the motor is calculated during initialisation as a function of voltage at the load bus. This reactive power demand can be less than or greater than the constant <i>Q</i> component of the load.  If the motor's reactive demand is greater than the constant <i>Q</i> component of the load, the model inserts a shunt capacitor at the terminal of the motor to bring its reactive demand down to equal the constant <i>Q</i> reactive load.   If an induction motor load model and a static load model are both present for a load, the motor <i>Pfrac</i> is assumed to be subtracted from the power flow constant <i>P</i> load before the static load model is applied.  The remainder of the load, if any, is then represented by the static load model. */
	class LoadMotor : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		LoadMotor();
		~LoadMotor() override;

		/** \brief Aggregate load to which this aggregate motor (dynamic) load belongs. Default: nullptr */
		CIMPP::LoadAggregate* LoadAggregate;

		/** \brief Damping factor (<i>D</i>).  Unit = delta <i>P</i>/delta speed.  Typical value = 2. Default: 0.0 */
		CIMPP::Float d;

		/** \brief Inertia constant (<i>H</i>) (&gt;= 0).  Typical value = 0,4. Default: 0.0 */
		CIMPP::Seconds h;

		/** \brief Loading factor (<i>Lfac</i>). The ratio of initial <i>P</i> to motor MVA base.  Typical value = 0,8. Default: 0.0 */
		CIMPP::Float lfac;

		/** \brief Transient reactance (<i>Lp</i>).  Typical value = 0,15. Default: 0.0 */
		CIMPP::PU lp;

		/** \brief Subtransient reactance (<i>Lpp</i>).  Typical value = 0,15. Default: 0.0 */
		CIMPP::PU lpp;

		/** \brief Synchronous reactance (<i>Ls</i>).  Typical value = 3,2. Default: 0.0 */
		CIMPP::PU ls;

		/** \brief Fraction of constant-power load to be represented by this motor model (<i>Pfrac</i>) (&gt;= 0,0 and &lt;= 1,0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float pfrac;

		/** \brief Stator resistance (<i>Ra</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ra;

		/** \brief Circuit breaker operating time (<i>Tbkr</i>) (&gt;= 0).  Typical value = 0,08. Default: 0.0 */
		CIMPP::Seconds tbkr;

		/** \brief Transient rotor time constant (<i>Tpo</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tpo;

		/** \brief Subtransient rotor time constant (<i>Tppo</i>) (&gt;= 0).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds tppo;

		/** \brief Voltage trip pickup time (<i>Tv</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds tv;

		/** \brief Voltage threshold for tripping (<i>Vt</i>).  Typical value = 0,7. Default: 0.0 */
		CIMPP::PU vt;

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

	BaseClass* LoadMotor_factory();
}
#endif
