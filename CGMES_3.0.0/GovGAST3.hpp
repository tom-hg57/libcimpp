#ifndef GovGAST3_H
#define GovGAST3_H
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

#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Temperature.hpp"

namespace CIMPP
{

	/** \brief Generic turbogas with acceleration and temperature controller. */
	class GovGAST3 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST3();
		~GovGAST3() override;

		/** \brief Acceleration limit set-point (<i>Bca</i>).  Unit = 1/s.  Typical value = 0,01. Default: 0.0 */
		CIMPP::Float bca;

		/** \brief Droop (<i>bp</i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU bp;

		/** \brief Exhaust temperature variation due to fuel flow increasing from 0 to 1 PU (<i>deltaTc</i>).  Typical value = 390. Default: 0.0 */
		CIMPP::Temperature dtc;

		/** \brief Minimum fuel flow (<i>Ka</i>).  Typical value = 0,23. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Fuel system feedback (<i>K</i><i><sub>AC</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::Float kac;

		/** \brief Acceleration control integral gain (<i>Kca</i>). Unit = 1/s.  Typical value = 100. Default: 0.0 */
		CIMPP::Float kca;

		/** \brief Gain of radiation shield (<i>Ksi</i>).  Typical value = 0,8. Default: 0.0 */
		CIMPP::Float ksi;

		/** \brief Coefficient of transfer function of fuel valve positioner (<i>Ky</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::Float ky;

		/** \brief Fuel flow maximum negative error value (<i>MNef</i>).  Typical value = -0,05. Default: 0.0 */
		CIMPP::PU mnef;

		/** \brief Fuel flow maximum positive error value (<i>MXef</i>).  Typical value = 0,05. Default: 0.0 */
		CIMPP::PU mxef;

		/** \brief Minimum fuel flow (<i>RCMN</i>).  Typical value = -0,1. Default: 0.0 */
		CIMPP::PU rcmn;

		/** \brief Maximum fuel flow (<i>RCMX</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU rcmx;

		/** \brief Fuel control time constant (<i>Tac</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds tac;

		/** \brief Compressor discharge volume time constant (<i>Tc</i>) (&gt;= 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Temperature controller derivative gain (<i>Td</i>) (&gt;= 0).  Typical value = 3,3. Default: 0.0 */
		CIMPP::Seconds td;

		/** \brief Turbine rated exhaust temperature correspondent to Pm=1 PU (<i>Tfen</i>).  Typical value = 540. Default: 0.0 */
		CIMPP::Temperature tfen;

		/** \brief Time constant of speed governor (<i>Tg</i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds tg;

		/** \brief Time constant of radiation shield (<i>Tsi</i>) (&gt;= 0).  Typical value = 15. Default: 0.0 */
		CIMPP::Seconds tsi;

		/** \brief Temperature controller integration rate (<i>Tt</i>).  Typical value = 250. Default: 0.0 */
		CIMPP::Temperature tt;

		/** \brief Time constant of thermocouple (<i>Ttc</i>) (&gt;= 0).  Typical value = 2,5. Default: 0.0 */
		CIMPP::Seconds ttc;

		/** \brief Time constant of fuel valve positioner (<i>Ty</i>) (&gt;= 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds ty;

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

	BaseClass* GovGAST3_factory();
}
#endif
