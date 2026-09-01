#ifndef PssSTAB2A_H
#define PssSTAB2A_H
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

	/** \brief Power system stabilizer part of an ABB excitation system. [Footnote: ABB excitation systems are an example of suitable products available commercially. This information is given for the convenience of users of this document and does not constitute an endorsement by IEC of these products.] */
	class PssSTAB2A : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssSTAB2A();
		~PssSTAB2A() override;

		/** \brief Stabilizer output limiter (<i>H</i><i><sub>LIM</sub></i>).  Typical value = 0,5. Default: 0.0 */
		CIMPP::PU hlim;

		/** \brief Gain (<i>K2</i>).  Typical value = 1,0. Default: 0.0 */
		CIMPP::PU k2;

		/** \brief Gain (<i>K3</i>).  Typical value = 0,25. Default: 0.0 */
		CIMPP::PU k3;

		/** \brief Gain (<i>K4</i>).  Typical value = 0,075. Default: 0.0 */
		CIMPP::PU k4;

		/** \brief Gain (<i>K5</i>).  Typical value = 2,5. Default: 0.0 */
		CIMPP::PU k5;

		/** \brief Time constant (<i>T2</i>).  Typical value = 4,0. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Time constant (<i>T3</i>).  Typical value = 2,0. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Time constant (<i>T5</i>).  Typical value = 4,5. Default: 0.0 */
		CIMPP::Seconds t5;

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

	BaseClass* PssSTAB2A_factory();
}
#endif
