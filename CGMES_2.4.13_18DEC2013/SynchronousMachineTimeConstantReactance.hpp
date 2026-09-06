#ifndef SynchronousMachineTimeConstantReactance_H
#define SynchronousMachineTimeConstantReactance_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "SynchronousMachineDetailed.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "PU.hpp"
#include "RotorKind.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "SynchronousMachineModelKind.hpp"

namespace CIMPP
{

	/** \brief Synchronous machine detailed modelling types are defined by the combination of the attributes SynchronousMachineTimeConstantReactance.modelType and SynchronousMachineTimeConstantReactance.rotorType.     The parameters used for models expressed in time constant reactance form include: */
	class SynchronousMachineTimeConstantReactance : public SynchronousMachineDetailed
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachineTimeConstantReactance();
		~SynchronousMachineTimeConstantReactance() override;

		/** \brief Saturation loading correction factor (Ks) (>= 0).  Used only by Type J model.  Typical Value = 0. Default: 0.0 */
		CIMPP::Simple_Float ks;

		/** \brief Type of synchronous machine model used in Dynamic simulation applications. Default: 0 */
		CIMPP::SynchronousMachineModelKind modelType;

		/** \brief Type of rotor on physical machine. Default: 0 */
		CIMPP::RotorKind rotorType;

		/** \brief Damping time constant for `Canay` reactance.  Typical Value = 0. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Direct-axis transient rotor time constant (T`do) (> T``do).  Typical Value = 5. Default: 0.0 */
		CIMPP::Seconds tpdo;

		/** \brief Direct-axis subtransient rotor time constant (T``do) (> 0).  Typical Value = 0.03. Default: 0.0 */
		CIMPP::Seconds tppdo;

		/** \brief Quadrature-axis subtransient rotor time constant (T``qo) (> 0). Typical Value = 0.03. Default: 0.0 */
		CIMPP::Seconds tppqo;

		/** \brief Quadrature-axis transient rotor time constant (T`qo) (> T``qo). Typical Value = 0.5. Default: 0.0 */
		CIMPP::Seconds tpqo;

		/** \brief Direct-axis subtransient reactance (unsaturated) (X``d) (> Xl).  Typical Value = 0.2. Default: 0.0 */
		CIMPP::PU xDirectSubtrans;

		/** \brief Direct-axis synchronous reactance (Xd) (>= X`d). The quotient of a sustained value of that AC component of armature voltage that is produced by the total direct-axis flux due to direct-axis armature current and the value of the AC component of this current, the machine running at rated speed. Typical Value = 1.8. Default: 0.0 */
		CIMPP::PU xDirectSync;

		/** \brief Direct-axis transient reactance (unsaturated) (X`d) (> =X``d).  Typical Value = 0.5. Default: 0.0 */
		CIMPP::PU xDirectTrans;

		/** \brief Quadrature-axis subtransient reactance (X``q) (> Xl).  Typical Value = 0.2. Default: 0.0 */
		CIMPP::PU xQuadSubtrans;

		/** \brief Quadrature-axis synchronous reactance (Xq) (> =X`q). The ratio of the component of reactive armature voltage, due to the quadrature-axis component of armature current, to this component of current, under steady state conditions and at rated frequency.  Typical Value = 1.6. Default: 0.0 */
		CIMPP::PU xQuadSync;

		/** \brief Quadrature-axis transient reactance (X`q) (> =X``q).  Typical Value = 0.3. Default: 0.0 */
		CIMPP::PU xQuadTrans;

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

	BaseClass* SynchronousMachineTimeConstantReactance_factory();
}
#endif
