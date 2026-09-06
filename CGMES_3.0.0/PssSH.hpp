#ifndef PssSH_H
#define PssSH_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Siemens<sup>TM</sup> "H infinity" power system stabilizer with generator electrical power input. [Footnote: Siemens "H infinity" power system stabilizers are an example of suitable products available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of these products.] */
	class PssSH : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssSH();
		~PssSH() override;

		/** \brief Main gain (<i>K</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU k;

		/** \brief Gain 0 (<i>K0</i>).  Typical value = 0,012. Default: 0.0 */
		CIMPP::PU k0;

		/** \brief Gain 1 (<i>K1</i>).  Typical value = 0,488. Default: 0.0 */
		CIMPP::PU k1;

		/** \brief Gain 2 (<i>K2</i>).  Typical value = 0,064. Default: 0.0 */
		CIMPP::PU k2;

		/** \brief Gain 3 (<i>K3</i>).  Typical value = 0,224. Default: 0.0 */
		CIMPP::PU k3;

		/** \brief Gain 4 (<i>K4</i>).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU k4;

		/** \brief Time constant 1 (<i>T1</i>) (&gt; 0).  Typical value = 0,076. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Time constant 2 (<i>T2</i>) (&gt; 0).  Typical value = 0,086. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Time constant 3 (<i>T3</i>) (&gt; 0).   Typical value = 1,068. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Time constant 4 (<i>T4</i>) (&gt; 0).  Typical value = 1,913. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Input time constant (<i>T</i><i><sub>d</sub></i>) (&gt;= 0).  Typical value = 10. Default: 0.0 */
		CIMPP::Seconds td;

		/** \brief Output maximum limit (<i>Vsmax</i>) (&gt; PssSH.vsmin).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU vsmax;

		/** \brief Output minimum limit (<i>Vsmin</i>) (&lt; PssSH.vsmax).  Typical value = -0,1. Default: 0.0 */
		CIMPP::PU vsmin;

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

	BaseClass* PssSH_factory();
}
#endif
