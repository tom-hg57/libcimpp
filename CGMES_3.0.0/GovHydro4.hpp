#ifndef GovHydro4_H
#define GovHydro4_H
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
#include "Float.hpp"
#include "Frequency.hpp"
#include "GovHydro4ModelKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Hydro turbine and governor. Represents plants with straight-forward penstock configurations and hydraulic governors of the traditional 'dashpot' type.  This model can be used to represent simple, Francis/Pelton or Kaplan turbines. */
	class GovHydro4 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydro4();
		~GovHydro4() override;

		/** \brief Turbine gain (<i>At</i>).  Typical value = 1,2. Default: 0.0 */
		CIMPP::PU at;

		/** \brief Kaplan blade servo point 0 (<i>Bgv0</i>) (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 0. Default: 0.0 */
		CIMPP::PU bgv0;

		/** \brief Kaplan blade servo point 1 (<i>Bgv1</i>) (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 0. Default: 0.0 */
		CIMPP::PU bgv1;

		/** \brief Kaplan blade servo point 2 (<i>Bgv2</i>) (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 0,1. Default: 0.0 */
		CIMPP::PU bgv2;

		/** \brief Kaplan blade servo point 3 (<i>Bgv3</i>) (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 0,667. Default: 0.0 */
		CIMPP::PU bgv3;

		/** \brief Kaplan blade servo point 4 (<i>Bgv4</i>) (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 0,9. Default: 0.0 */
		CIMPP::PU bgv4;

		/** \brief Kaplan blade servo point 5 (<i>Bgv5</i>) (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 1. Default: 0.0 */
		CIMPP::PU bgv5;

		/** \brief Maximum blade adjustment factor (<i>Bmax</i>)  (= 0 for simple, = 0 for Francis/Pelton).  Typical value for Kaplan = 1,1276. Default: 0.0 */
		CIMPP::Float bmax;

		/** \brief Intentional deadband width (<i>db1</i>).  Unit = Hz.  Typical value = 0. Default: 0.0 */
		CIMPP::Frequency db1;

		/** \brief Unintentional dead-band (<i>db2</i>).  Unit = MW.  Typical value = 0. Default: 0.0 */
		CIMPP::ActivePower db2;

		/** \brief Turbine damping factor (<i>Dturb</i>).  Unit = delta P (PU of <i>MWbase</i>) / delta speed (PU).  Typical value for simple = 0,5, Francis/Pelton = 1,1, Kaplan = 1,1. Default: 0.0 */
		CIMPP::PU dturb;

		/** \brief Intentional db hysteresis (<i>eps</i>).  Unit = Hz.  Typical value = 0. Default: 0.0 */
		CIMPP::Frequency eps;

		/** \brief Maximum gate opening, PU of <i>MWbase</i> (<i>Gmax</i>) (&gt; GovHydro4.gmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU gmax;

		/** \brief Minimum gate opening, PU of <i>MWbase</i> (<i>Gmin</i>) (&lt; GovHydro4.gmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU gmin;

		/** \brief Nonlinear gain point 0, PU gv (<i>Gv0</i>) (= 0 for simple).  Typical for Francis/Pelton = 0,1, Kaplan = 0,1. Default: 0.0 */
		CIMPP::PU gv0;

		/** \brief Nonlinear gain point 1, PU gv (<i>Gv1</i>) (= 0 for simple, &gt; GovHydro4.gv0 for Francis/Pelton and Kaplan). Typical value for Francis/Pelton = 0,4, Kaplan = 0,4. Default: 0.0 */
		CIMPP::PU gv1;

		/** \brief Nonlinear gain point 2, PU gv (<i>Gv2</i>) (= 0 for simple, &gt; GovHydro4.gv1 for Francis/Pelton and Kaplan). Typical value for Francis/Pelton = 0,5, Kaplan = 0,5. Default: 0.0 */
		CIMPP::PU gv2;

		/** \brief Nonlinear gain point 3, PU gv (<i>Gv3</i>)  (= 0 for simple, &gt; GovHydro4.gv2 for Francis/Pelton and Kaplan). Typical value for Francis/Pelton = 0,7, Kaplan = 0,7. Default: 0.0 */
		CIMPP::PU gv3;

		/** \brief Nonlinear gain point 4, PU gv (<i>Gv4</i>)  (= 0 for simple, &gt; GovHydro4.gv3 for Francis/Pelton and Kaplan). Typical value for  Francis/Pelton = 0,8, Kaplan = 0,8. Default: 0.0 */
		CIMPP::PU gv4;

		/** \brief Nonlinear gain point 5, PU gv (<i>Gv5</i>)  (= 0 for simple, &lt; 1 and &gt; GovHydro4.gv4 for Francis/Pelton and Kaplan). Typical value for Francis/Pelton = 0,9, Kaplan = 0,9. Default: 0.0 */
		CIMPP::PU gv5;

		/** \brief Head available at dam (<i>hdam</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU hdam;

		/** \brief The kind of model being represented (simple, Francis/Pelton or Kaplan). Default: 0 */
		CIMPP::GovHydro4ModelKind model;

		/** \brief Base for power values (<i>MWbase</i>) (&gt; 0).  Unit = MW. Default: 0.0 */
		CIMPP::ActivePower mwbase;

		/** \brief Nonlinear gain point 0, PU power (<i>Pgv0</i>) (= 0 for simple).  Typical value = 0. Default: 0.0 */
		CIMPP::PU pgv0;

		/** \brief Nonlinear gain point 1, PU power (<i>Pgv1</i>) (= 0 for simple). Typical value for Francis/Pelton = 0,42, Kaplan = 0,35. Default: 0.0 */
		CIMPP::PU pgv1;

		/** \brief Nonlinear gain point 2, PU power (<i>Pgv2</i>) (= 0 for simple). Typical value for Francis/Pelton = 0,56, Kaplan = 0,468. Default: 0.0 */
		CIMPP::PU pgv2;

		/** \brief Nonlinear gain point 3, PU power (<i>Pgv3</i>) (= 0 for simple). Typical value for Francis/Pelton = 0,8, Kaplan = 0,796. Default: 0.0 */
		CIMPP::PU pgv3;

		/** \brief Nonlinear gain point 4, PU power (<i>Pgv4</i>) (= 0 for simple). Typical value for Francis/Pelton = 0,9, Kaplan = 0,917. Default: 0.0 */
		CIMPP::PU pgv4;

		/** \brief Nonlinear gain point 5, PU power (<i>Pgv5</i>) (= 0 for simple).  Typical value for Francis/Pelton = 0,97, Kaplan = 0,99. Default: 0.0 */
		CIMPP::PU pgv5;

		/** \brief No-load flow at nominal head (<i>Qnl</i>). Typical value for simple = 0,08, Francis/Pelton = 0, Kaplan = 0. Default: 0.0 */
		CIMPP::PU qnl;

		/** \brief Permanent droop (<i>Rperm</i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds rperm;

		/** \brief Temporary droop (<i>Rtemp</i>) (&gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Seconds rtemp;

		/** \brief Blade servo time constant (<i>Tblade</i>) (&gt;= 0).  Typical value = 100. Default: 0.0 */
		CIMPP::Seconds tblade;

		/** \brief Gate servo time constant (<i>Tg</i>) (&gt; 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Seconds tg;

		/** \brief Pilot servo time constant (<i>Tp</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds tp;

		/** \brief Dashpot time constant (<i>Tr</i>) (&gt;= 0).  Typical value = 5. Default: 0.0 */
		CIMPP::Seconds tr;

		/** \brief Water inertia time constant (<i>Tw</i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tw;

		/** \brief Max gate closing velocity (<i>Uc</i>).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Float uc;

		/** \brief Max gate opening velocity (<i>Uo</i>).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Float uo;

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

	BaseClass* GovHydro4_factory();
}
#endif
