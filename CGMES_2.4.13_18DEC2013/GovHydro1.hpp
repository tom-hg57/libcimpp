#ifndef GovHydro1_H
#define GovHydro1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "ActivePower.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief Basic Hydro turbine governor model. */
	class GovHydro1 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro1();
		~GovHydro1() override;

		/** \brief Turbine gain (At) (>0).  Typical Value = 1.2. Default: 0.0 */
		CIMPP::PU at;

		/** \brief Turbine damping factor (Dturb) (>=0).  Typical Value = 0.5. Default: 0.0 */
		CIMPP::PU dturb;

		/** \brief Maximum gate opening (Gmax) (>0).  Typical Value = 1. Default: 0.0 */
		CIMPP::PU gmax;

		/** \brief Minimum gate opening (Gmin) (>=0).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU gmin;

		/** \brief Turbine nominal head (hdam).  Typical Value = 1. Default: 0.0 */
		CIMPP::PU hdam;

		/** \brief Base for power values (MWbase) (> 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief No-load flow at nominal head (qnl) (>=0).  Typical Value = 0.08. Default: 0.0 */
		CIMPP::PU qnl;

		/** \brief Permanent droop (R) (>0).  Typical Value = 0.04. Default: 0.0 */
		CIMPP::PU rperm;

		/** \brief Temporary droop (r) (>R).  Typical Value = 0.3. Default: 0.0 */
		CIMPP::PU rtemp;

		/** \brief Filter time constant () (>0).  Typical Value = 0.05. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Gate servo time constant (Tg) (>0).  Typical Value = 0.5. Default: 0.0 */
		CIMPP::Seconds tg;

		/** \brief Washout time constant (Tr) (>0).  Typical Value = 5. Default: 0.0 */
		CIMPP::Seconds tr;

		/** \brief Water inertia time constant (Tw) (>0).  Typical Value = 1. Default: 0.0 */
		CIMPP::Seconds tw;

		/** \brief Maximum gate velocity (Vlem) (>0).  Typical Value = 0.2. Default: 0.0 */
		CIMPP::Simple_Float velm;

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

	BaseClass* GovHydro1_factory();
}
#endif
