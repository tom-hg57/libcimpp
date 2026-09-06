#ifndef LoadStatic_H
#define LoadStatic_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "Float.hpp"
#include "StaticLoadModelKind.hpp"

namespace CIMPP
{
	class LoadAggregate;

	/** \brief General static load. This model represents the sensitivity of the real and reactive power consumed by the load to the amplitude and frequency of the bus voltage. */
	class LoadStatic : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		LoadStatic();
		~LoadStatic() override;

		/** \brief Aggregate load to which this aggregate static load belongs. Default: nullptr */
		CIMPP::LoadAggregate* LoadAggregate;

		/** \brief First term voltage exponent for active power (<i>Ep1</i>).  Used only when .staticLoadModelType = exponential. Default: 0.0 */
		CIMPP::Float ep1;

		/** \brief Second term voltage exponent for active power (<i>Ep2</i>).  Used only when .staticLoadModelType = exponential. Default: 0.0 */
		CIMPP::Float ep2;

		/** \brief Third term voltage exponent for active power (<i>Ep3</i>).  Used only when .staticLoadModelType = exponential. Default: 0.0 */
		CIMPP::Float ep3;

		/** \brief First term voltage exponent for reactive power (<i>Eq1</i>).  Used only when .staticLoadModelType = exponential. Default: 0.0 */
		CIMPP::Float eq1;

		/** \brief Second term voltage exponent for reactive power (<i>Eq2</i>).  Used only when .staticLoadModelType = exponential. Default: 0.0 */
		CIMPP::Float eq2;

		/** \brief Third term voltage exponent for reactive power (<i>Eq3</i>).  Used only when .staticLoadModelType = exponential. Default: 0.0 */
		CIMPP::Float eq3;

		/** \brief First term voltage coefficient for active power (<i>K</i><i><sub>p1</sub></i>).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kp1;

		/** \brief Second term voltage coefficient for active power (<i>K</i><i><sub>p2</sub></i>).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kp2;

		/** \brief Third term voltage coefficient for active power (<i>K</i><i><sub>p3</sub></i>).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kp3;

		/** \brief Frequency coefficient for active power (<i>K</i><i><sub>p4</sub></i>)  (not = 0 if .staticLoadModelType = zIP2).  Used only when .staticLoadModelType = zIP2. Default: 0.0 */
		CIMPP::Float kp4;

		/** \brief Frequency deviation coefficient for active power (<i>K</i><i><sub>pf</sub></i>).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kpf;

		/** \brief First term voltage coefficient for reactive power (<i>K</i><i><sub>q1</sub></i>).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kq1;

		/** \brief Second term voltage coefficient for reactive power (<i>K</i><i><sub>q2</sub></i>).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kq2;

		/** \brief Third term voltage coefficient for reactive power (<i>K</i><i><sub>q3</sub></i>).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kq3;

		/** \brief Frequency coefficient for reactive power (<i>K</i><i><sub>q4</sub></i>)  (not = 0 when .staticLoadModelType = zIP2).  Used only when .staticLoadModelType - zIP2. Default: 0.0 */
		CIMPP::Float kq4;

		/** \brief Frequency deviation coefficient for reactive power (<i>K</i><i><sub>qf</sub></i>).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kqf;

		/** \brief Type of static load model.  Typical value = constantZ. Default: 0 */
		CIMPP::StaticLoadModelKind staticLoadModelType;

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

	BaseClass* LoadStatic_factory();
}
#endif
