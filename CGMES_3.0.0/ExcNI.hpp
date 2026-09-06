#ifndef ExcNI_H
#define ExcNI_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Bus or solid fed SCR (silicon-controlled rectifier) bridge excitation system model type NI (NVE). */
	class ExcNI : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcNI();
		~ExcNI() override;

		/** \brief Fed by selector (<i>BusFedSelector</i>).  true = bus fed (switch is closed) false = solid fed (switch is open). Typical value = true. Default: false */
		CIMPP::Boolean busFedSelector;

		/** \brief Voltage regulator gain (<i>Ka</i>) (&gt; 0).  Typical value = 210. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Excitation control system stabilizer gain (<i>Kf</i>) (&gt; 0).  Typical value 0,01. Default: 0.0 */
		CIMPP::PU kf;

		/** \brief <i>rc</i> / <i>rfd</i> (<i>R</i>) (&gt;= 0).  0 means exciter has negative current capability &gt; 0 means exciter does not have negative current capability.   Typical value = 5. Default: 0.0 */
		CIMPP::PU r;

		/** \brief Voltage regulator time constant (<i>Ta</i>) (&gt; 0).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Excitation control system stabilizer time constant (<i>Tf1</i>) (&gt; 0). Typical value = 1,0. Default: 0.0 */
		CIMPP::Seconds tf1;

		/** \brief Excitation control system stabilizer time constant (<i>Tf2</i>) (&gt; 0). Typical value = 0,1. Default: 0.0 */
		CIMPP::Seconds tf2;

		/** \brief Time constant (<i>Tr</i>) (&gt;= 0). Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds tr;

		/** \brief Maximum voltage regulator ouput (<i>Vrmax</i>) (&gt; ExcNI.vrmin). Typical value = 5,0. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator ouput (<i>Vrmin</i>) (&lt; ExcNI.vrmax). Typical value = -2,0. Default: 0.0 */
		CIMPP::PU vrmin;

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

	BaseClass* ExcNI_factory();
}
#endif
