#ifndef GovHydroFrancis_H
#define GovHydroFrancis_H
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

#include "Area.hpp"
#include "Boolean.hpp"
#include "FrancisGovernorControlKind.hpp"
#include "Frequency.hpp"
#include "Length.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"
#include "VolumeFlowRate.hpp"

namespace CIMPP
{

	/** \brief Detailed hydro unit - Francis model.  This model can be used to represent three types of governors. A schematic of the hydraulic system of detailed hydro unit models, like Francis and Pelton, is provided in the DetailedHydroModelHydraulicSystem diagram. */
	class GovHydroFrancis : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroFrancis();
		~GovHydroFrancis() override;

		/** \brief Opening section S at the maximum efficiency (Am).  Typical Value = 0.7. Default: 0.0 */
		CIMPP::PU am;

		/** \brief Area of the surge tank (A). Unit = m. Typical Value = 30. Default: 0.0 */
		CIMPP::Area av0;

		/** \brief Area of the compensation tank (A). Unit = m. Typical Value = 700. Default: 0.0 */
		CIMPP::Area av1;

		/** \brief Droop (Bp).  Typical Value = 0.05. Default: 0.0 */
		CIMPP::PU bp;

		/** \brief Intentional dead-band width (DB1).  Unit = Hz.  Typical Value = 0. Default: 0.0 */
		CIMPP::Frequency db1;

		/** \brief Maximum efficiency (EtaMax).  Typical Value = 1.05. Default: 0.0 */
		CIMPP::PU etamax;

		/** \brief Governor control flag (Cflag).  Typical Value = mechanicHydrolicTachoAccelerator. Default: 0 */
		CIMPP::FrancisGovernorControlKind governorControl;

		/** \brief Head of compensation chamber water level with respect to the level of penstock (H).  Unit = m. Typical Value = 4. Default: 0.0 */
		CIMPP::Length h1;

		/** \brief Head of surge tank water level with respect to the level of penstock (H).  Unit = m. Typical Value = 40. Default: 0.0 */
		CIMPP::Length h2;

		/** \brief Rated hydraulic head (H).  Unit = m. Typical Value = 250. Default: 0.0 */
		CIMPP::Length hn;

		/** \brief Penstock loss coefficient (due to friction) (Kc).  Typical Value = 0.025. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Water tunnel and surge chamber loss coefficient (due to friction) (Kg).  Typical Value = 0.025. Default: 0.0 */
		CIMPP::PU kg;

		/** \brief Washout gain (Kt).  Typical Value = 0.25. Default: 0.0 */
		CIMPP::PU kt;

		/** \brief No-load turbine flow at nominal head (Qc0).  Typical Value = 0.21. Default: 0.0 */
		CIMPP::PU qc0;

		/** \brief Rated flow (Q). Unit = m/s. Typical Value = 40. Default: 0.0 */
		CIMPP::VolumeFlowRate qn;

		/** \brief Derivative gain (Ta).  Typical Value = 3. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Washout time constant (Td).  Typical Value = 3. Default: 0.0 */
		CIMPP::Seconds td;

		/** \brief Gate servo time constant (Ts).  Typical Value = 0.5. Default: 0.0 */
		CIMPP::Seconds ts;

		/** \brief Water inertia time constant (Twnc).  Typical Value = 1. Default: 0.0 */
		CIMPP::Seconds twnc;

		/** \brief Water tunnel and surge chamber inertia time constant (Twng). Typical Value = 3. Default: 0.0 */
		CIMPP::Seconds twng;

		/** \brief Derivative feedback gain (Tx).  Typical Value = 1. Default: 0.0 */
		CIMPP::Seconds tx;

		/** \brief Maximum gate opening velocity (Va).  Unit = PU/sec.  Typical Value = 0.011. Default: 0.0 */
		CIMPP::Simple_Float va;

		/** \brief Maximum gate opening (ValvMax).  Typical Value = 1. Default: 0.0 */
		CIMPP::PU valvmax;

		/** \brief Minimum gate opening (ValvMin).  Typical Value = 0. Default: 0.0 */
		CIMPP::PU valvmin;

		/** \brief Maximum gate closing velocity (Vc).  Unit = PU/sec.  Typical Value = -0.011. Default: 0.0 */
		CIMPP::Simple_Float vc;

		/** \brief Water tunnel and surge chamber simulation (Tflag). true = enable of water tunnel and surge chamber simulation false = inhibit of water tunnel and surge chamber simulation. Typical Value = false. Default: false */
		CIMPP::Boolean waterTunnelSurgeChamberSimulation;

		/** \brief Head of upper water level with respect to the level of penstock (Zsfc).  Unit = m.  Typical Value = 25. Default: 0.0 */
		CIMPP::Length zsfc;

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

	BaseClass* GovHydroFrancis_factory();
}
#endif
