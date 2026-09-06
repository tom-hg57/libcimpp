#ifndef PFVArType2IEEEVArController_H
#define PFVArType2IEEEVArController_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PFVArControllerType2Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"

namespace CIMPP
{

	/** \brief IEEE VAR controller type 2 which is a summing point type controller. It makes up the outside loop of a two-loop system. This controller is implemented as a slow PI type controller, and the voltage regulator forms the inner loop and is implemented as a fast controller. Reference: IEEE 421.5-2005, 11.5. */
	class PFVArType2IEEEVArController : public PFVArControllerType2Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PFVArType2IEEEVArController();
		~PFVArType2IEEEVArController() override;

		/** \brief Overexcitation or under excitation flag (<i>EXLON</i>) true = 1 (not in the overexcitation or underexcitation state, integral action is active) false = 0 (in the overexcitation or underexcitation state, so integral action is disabled to allow the limiter to play its role). Default: false */
		CIMPP::Boolean exlon;

		/** \brief Integral gain of the pf controller (<i>K</i><i><sub>I</sub></i>). Default: 0.0 */
		CIMPP::PU ki;

		/** \brief Proportional gain of the pf controller (<i>K</i><i><sub>P</sub></i>). Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Reactive power reference (<i>Q</i><i><sub>REF</sub></i>). Default: 0.0 */
		CIMPP::PU qref;

		/** \brief Maximum output of the pf controller (<i>V</i><i><sub>CLMT</sub></i>). Default: 0.0 */
		CIMPP::PU vclmt;

		/** \brief Voltage regulator reference (<i>V</i><i><sub>REF</sub></i>). Default: 0.0 */
		CIMPP::PU vref;

		/** \brief Generator sensing voltage (<i>V</i><i><sub>S</sub></i>). Default: 0.0 */
		CIMPP::Float vs;

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

	BaseClass* PFVArType2IEEEVArController_factory();
}
#endif
