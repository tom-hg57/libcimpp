#ifndef PFVArType1IEEEPFController_H
#define PFVArType1IEEEPFController_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PFVArControllerType1Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE PF controller type 1 which operates by moving the voltage reference directly. Reference: IEEE 421.5-2005, 11.2. */
	class PFVArType1IEEEPFController : public PFVArControllerType1Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PFVArType1IEEEPFController();
		~PFVArType1IEEEPFController() override;

		/** \brief Overexcitation Flag (<i>OVEX</i>) true = overexcited false = underexcited. Default: false */
		CIMPP::Boolean ovex;

		/** \brief PF controller time delay (<i>T</i><i><sub>PFC</sub></i>) (&gt;= 0).  Typical value = 5. Default: 0.0 */
		CIMPP::Seconds tpfc;

		/** \brief Minimum machine terminal current needed to enable pf/var controller (<i>V</i><i><sub>ITMIN</sub></i>). Default: 0.0 */
		CIMPP::PU vitmin;

		/** \brief Synchronous machine power factor (<i>V</i><i><sub>PF</sub></i>). Default: 0.0 */
		CIMPP::PU vpf;

		/** \brief PF controller deadband (<i>V</i><i><sub>PFC_BW</sub></i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Float vpfcbw;

		/** \brief PF controller reference (<i>V</i><i><sub>PFREF</sub></i>). Default: 0.0 */
		CIMPP::PU vpfref;

		/** \brief Maximum machine terminal voltage needed for pf/var controller to be enabled (<i>V</i><i><sub>VTMAX</sub></i>) (&gt; PFVArType1IEEEPFController.vvtmin). Default: 0.0 */
		CIMPP::PU vvtmax;

		/** \brief Minimum machine terminal voltage needed to enable pf/var controller (<i>V</i><i><sub>VTMIN</sub></i>) (&lt; PFVArType1IEEEPFController.vvtmax). Default: 0.0 */
		CIMPP::PU vvtmin;

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

	BaseClass* PFVArType1IEEEPFController_factory();
}
#endif
