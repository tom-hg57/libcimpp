#ifndef RotatingMachineDynamics_H
#define RotatingMachineDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DynamicsFunctionBlock.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Abstract parent class for all synchronous and asynchronous machine standard models. */
	class RotatingMachineDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		RotatingMachineDynamics();
		~RotatingMachineDynamics() override;

		/** \brief Damping torque coefficient (<i>D</i>) (&gt;= 0).  A proportionality constant that, when multiplied by the angular velocity of the rotor poles with respect to the magnetic field (frequency), results in the damping torque.  This value is often zero when the sources of damping torques (generator damper windings, load damping effects, etc.) are modelled in detail.  Typical value = 0. Default: 0.0 */
		CIMPP::Float damping;

		/** \brief Inertia constant of generator or motor and mechanical load (<i>H</i>) (&gt; 0).  This is the specification for the stored energy in the rotating mass when operating at rated speed.  For a generator, this includes the generator plus all other elements (turbine, exciter) on the same shaft and has units of MW x s.  For a motor, it includes the motor plus its mechanical load. Conventional units are PU on the generator MVA base, usually expressed as MW x s / MVA or just s. This value is used in the accelerating power reference frame for operator training simulator solutions.  Typical value = 3. Default: 0.0 */
		CIMPP::Seconds inertia;

		/** \brief Saturation factor at rated terminal voltage (<i>S1</i>) (&gt;= 0).  Not used by simplified model.  Defined by defined by <i>S</i>(<i>E1</i>) in the SynchronousMachineSaturationParameters diagram.  Typical value = 0,02. Default: 0.0 */
		CIMPP::Float saturationFactor;

		/** \brief Saturation factor at 120% of rated terminal voltage (<i>S12</i>) (&gt;= RotatingMachineDynamics.saturationFactor). Not used by the simplified model, defined by <i>S</i>(<i>E2</i>) in the SynchronousMachineSaturationParameters diagram.  Typical value = 0,12. Default: 0.0 */
		CIMPP::Float saturationFactor120;

		/** \brief Stator leakage reactance (<i>Xl</i>) (&gt;= 0). Typical value = 0,15. Default: 0.0 */
		CIMPP::PU statorLeakageReactance;

		/** \brief Stator (armature) resistance (<i>Rs</i>) (&gt;= 0). Typical value = 0,005. Default: 0.0 */
		CIMPP::PU statorResistance;

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

	BaseClass* RotatingMachineDynamics_factory();
}
#endif
