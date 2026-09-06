#ifndef PssSK_H
#define PssSK_H
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

	/** \brief Slovakian PSS with three inputs. */
	class PssSK : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssSK();
		~PssSK() override;

		/** \brief Gain <i>P</i> (<i>K</i><i><sub>1</sub></i>).  Typical value = -0,3. Default: 0.0 */
		CIMPP::PU k1;

		/** \brief Gain <i>f</i><i><sub>E</sub></i><i> </i>(<i>K</i><i><sub>2</sub></i>).  Typical value = -0,15. Default: 0.0 */
		CIMPP::PU k2;

		/** \brief Gain <i>I</i><i><sub>f</sub></i><i> </i>(<i>K</i><i><sub>3</sub></i>).  Typical value = 10. Default: 0.0 */
		CIMPP::PU k3;

		/** \brief Denominator time constant (<i>T</i><i><sub>1</sub></i>) (&gt; 0,005).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Seconds t1;

		/** \brief Filter time constant (<i>T</i><i><sub>2</sub></i>) (&gt; 0,005).  Typical value = 0,35. Default: 0.0 */
		CIMPP::Seconds t2;

		/** \brief Denominator time constant (<i>T</i><i><sub>3</sub></i>) (&gt; 0,005).  Typical value = 0,22. Default: 0.0 */
		CIMPP::Seconds t3;

		/** \brief Filter time constant (<i>T</i><i><sub>4</sub></i>) (&gt; 0,005).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds t4;

		/** \brief Denominator time constant (<i>T</i><i><sub>5</sub></i>) (&gt; 0,005).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Filter time constant (<i>T</i><i><sub>6</sub></i>) (&gt; 0,005).  Typical value = 0,02. Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Stabilizer output maximum limit (<i>V</i><i><sub>SMAX</sub></i>) (&gt; PssSK.vsmin).  Typical value = 0,4. Default: 0.0 */
		CIMPP::PU vsmax;

		/** \brief Stabilizer output minimum limit (<i>V</i><i><sub>SMIN</sub></i>) (&lt; PssSK.vsmax).  Typical value = -0.4. Default: 0.0 */
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

	BaseClass* PssSK_factory();
}
#endif
