#ifndef GovHydroPelton_H
#define GovHydroPelton_H
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
#include "Float.hpp"
#include "Frequency.hpp"
#include "Length.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "VolumeFlowRate.hpp"

namespace CIMPP
{

	/** \brief Detailed hydro unit - Pelton model.  This model can be used to represent the dynamic related to water tunnel and surge chamber. The DetailedHydroModelHydraulicSystem diagram, located under the GovHydroFrancis class, provides a schematic of the hydraulic system of detailed hydro unit models, such as Francis and Pelton. */
	class GovHydroPelton : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovHydroPelton();
		~GovHydroPelton() override;

		/** \brief Area of the surge tank (<i>A</i><i><sub>V0</sub></i>). Unit = m<sup>2</sup>. Typical value = 30. Default: 0.0 */
		CIMPP::Area av0;

		/** \brief Area of the compensation tank (<i>A</i><i><sub>V1</sub></i>). Unit = m<sup>2</sup>. Typical value = 700. Default: 0.0 */
		CIMPP::Area av1;

		/** \brief Droop (<i>bp</i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU bp;

		/** \brief Intentional dead-band width (<i>DB1</i>).  Unit = Hz.  Typical value = 0. Default: 0.0 */
		CIMPP::Frequency db1;

		/** \brief Intentional dead-band width of valve opening error (<i>DB2</i>). Unit = Hz.  Typical value = 0,01. Default: 0.0 */
		CIMPP::Frequency db2;

		/** \brief Head of compensation chamber water level with respect to the level of penstock (<i>H</i><i><sub>1</sub></i>).  Unit = km.  Typical value = 0,004. Default: 0.0 */
		CIMPP::Length h1;

		/** \brief Head of surge tank water level with respect to the level of penstock (<i>H</i><i><sub>2</sub></i>).  Unit = km.  Typical value = 0,040. Default: 0.0 */
		CIMPP::Length h2;

		/** \brief Rated hydraulic head (<i>H</i><i><sub>n</sub></i>).  Unit = km.  Typical value = 0,250. Default: 0.0 */
		CIMPP::Length hn;

		/** \brief Penstock loss coefficient (due to friction) (<i>Kc</i>).  Typical value = 0,025. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Water tunnel and surge chamber loss coefficient (due to friction) (<i>Kg</i>).  Typical value = 0,025. Default: 0.0 */
		CIMPP::PU kg;

		/** \brief No-load turbine flow at nominal head (<i>Qc0</i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU qc0;

		/** \brief Rated flow (<i>Q</i><i><sub>n</sub></i>). Unit = m<sup>3</sup>/s. Typical value = 250. Default: 0.0 */
		CIMPP::VolumeFlowRate qn;

		/** \brief Simplified Pelton model simulation (<i>Sflag</i>). true = enable of simplified Pelton model simulation false = enable of complete Pelton model simulation (non-linear gain). Typical value = true. Default: false */
		CIMPP::Boolean simplifiedPelton;

		/** \brief Static compensating characteristic (<i>Cflag</i>). It should be true if simplifiedPelton = false. true = enable of static compensating characteristic  false = inhibit of static compensating characteristic. Typical value = false. Default: false */
		CIMPP::Boolean staticCompensating;

		/** \brief Derivative gain (accelerometer time constant) (<i>Ta</i>) (&gt;= 0).  Typical value = 3. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Gate servo time constant (<i>Ts</i>) (&gt;= 0).  Typical value = 0,15. Default: 0.0 */
		CIMPP::Seconds ts;

		/** \brief Servomotor integrator time constant (<i>Tv</i>) (&gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Seconds tv;

		/** \brief Water inertia time constant (<i>Twnc</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds twnc;

		/** \brief Water tunnel and surge chamber inertia time constant (<i>Twng</i>) (&gt;= 0). Typical value = 3. Default: 0.0 */
		CIMPP::Seconds twng;

		/** \brief Electronic integrator time constant (<i>Tx</i>) (&gt;= 0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Seconds tx;

		/** \brief Maximum gate opening velocity (<i>Va</i>).  Unit = PU / s.  Typical value = 0,06. Default: 0.0 */
		CIMPP::Float va;

		/** \brief Maximum gate opening (<i>ValvMax</i>) (&gt; GovHydroPelton.valvmin).  Typical value = 1,1. Default: 0.0 */
		CIMPP::PU valvmax;

		/** \brief Minimum gate opening (<i>ValvMin</i>) (&lt; GovHydroPelton.valvmax).  Typical value = 0. Default: 0.0 */
		CIMPP::PU valvmin;

		/** \brief Maximum servomotor valve opening velocity (<i>Vav</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU vav;

		/** \brief Maximum gate closing velocity (<i>Vc</i>).  Unit = PU / s.  Typical value = -0,06. Default: 0.0 */
		CIMPP::Float vc;

		/** \brief Maximum servomotor valve closing velocity (<i>Vcv</i>).  Typical value = -0,1. Default: 0.0 */
		CIMPP::PU vcv;

		/** \brief Water tunnel and surge chamber simulation (<i>Tflag</i>). true = enable of water tunnel and surge chamber simulation false = inhibit of water tunnel and surge chamber simulation. Typical value = false. Default: false */
		CIMPP::Boolean waterTunnelSurgeChamberSimulation;

		/** \brief Head of upper water level with respect to the level of penstock (<i>Zsfc</i>).  Unit = km.  Typical value = 0,025. Default: 0.0 */
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

	BaseClass* GovHydroPelton_factory();
}
#endif
