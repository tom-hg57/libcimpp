#ifndef PssPTIST1_H
#define PssPTIST1_H
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

	/** \brief PTI microprocessor-based stabilizer type 1. */
	class PssPTIST1 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssPTIST1();
		~PssPTIST1() override;

		/** \brief Time step related to activation of controls (<i>deltatc</i>) (&gt;= 0).  Typical value = 0,025. Default: 0.0 */
		CIMPP::Seconds dtc;

		/** \brief Time step frequency calculation (<i>deltatf</i>) (&gt;= 0).  Typical value = 0,025. Default: 0.0 */
		CIMPP::Seconds dtf;

		/** \brief Time step active power calculation (<i>deltatp</i>) (&gt;= 0).  Typical value = 0,0125. Default: 0.0 */
		CIMPP::Seconds dtp;

		/** \brief Gain (<i>K</i>).  Typical value = 9. Default: 0.0 */
		CIMPP::PU k;

		/** \brief (<i>M</i>).  <i>M </i>= 2 x <i>H</i>.  Typical value = 5. Default: 0.0 */
		CIMPP::PU m;

		/** \brief Time constant (<i>T1</i>) (&gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Time constant (<i>T2</i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Time constant (<i>T3</i>) (&gt;= 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Time constant (<i>T4</i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Time constant (<i>Tf</i>) (&gt;= 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Time constant (<i>Tp</i>) (&gt;= 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::Seconds tp;

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

	BaseClass* PssPTIST1_factory();
}
#endif
