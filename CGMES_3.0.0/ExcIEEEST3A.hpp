#ifndef ExcIEEEST3A_H
#define ExcIEEEST3A_H
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

#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE 421.5-2005 type ST3A model.  Some static systems utilize a field voltage control loop to linearize the exciter control characteristic. This also makes the output independent of supply source variations until supply limitations are reached.  These systems utilize a variety of controlled-rectifier designs: full thyristor complements or hybrid bridges in either series or shunt configurations. The power source can consist of only a potential source, either fed from the machine terminals or from internal windings. Some designs can have compound power sources utilizing both machine potential and current. These power sources are represented as phasor combinations of machine terminal current and voltage and are accommodated by suitable parameters in model type ST3A which is represented by ExcIEEEST3A. Reference: IEEE 421.5-2005, 7.3. */
	class ExcIEEEST3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST3A();
		~ExcIEEEST3A() override;

		/** \brief Voltage regulator gain (<i>K</i><i><sub>A</sub></i>) (&gt; 0). This is parameter <i>K</i> in the IEEE standard. Typical value = 200. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (<i>K</i><i><sub>C</sub></i>) (&gt;= 0). Typical value = 0,2. Default: 0.0 */
		CIMPP::PU kc;

		/** \brief Feedback gain constant of the inner loop field regulator (<i>K</i><i><sub>G</sub></i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kg;

		/** \brief Potential circuit gain coefficient (<i>K</i><i><sub>I</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ki;

		/** \brief Forward gain constant of the inner loop field regulator (<i>K</i><i><sub>M</sub></i>) (&gt; 0).  Typical value = 7,93. Default: 0.0 */
		CIMPP::PU km;

		/** \brief Potential circuit gain coefficient (<i>K</i><i><sub>P</sub></i>) (&gt; 0).  Typical value = 6,15. Default: 0.0 */
		CIMPP::PU kp;

		/** \brief Voltage regulator time constant (<i>T</i><i><sub>A</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (<i>T</i><i><sub>B</sub></i>) (&gt;= 0).  Typical value = 10. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (<i>T</i><i><sub>C</sub></i>) (&gt;= 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Potential circuit phase angle (<i>thetap</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::AngleDegrees thetap;

		/** \brief Forward time constant of inner loop field regulator (<i>T</i><i><sub>M</sub></i>) (&gt; 0).  Typical value = 0,4. Default: 0.0 */
		CIMPP::Seconds tm;

		/** \brief Maximum excitation voltage (<i>V</i><i><sub>BMax</sub></i>) (&gt; 0).  Typical value = 6,9. Default: 0.0 */
		CIMPP::PU vbmax;

		/** \brief Maximum inner loop feedback voltage (<i>V</i><i><sub>GMax</sub></i>) (&gt;= 0).  Typical value = 5,8. Default: 0.0 */
		CIMPP::PU vgmax;

		/** \brief Maximum voltage regulator input limit (<i>V</i><i><sub>IMAX</sub></i>) (&gt; 0).  Typical value = 0,2. Default: 0.0 */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (<i>V</i><i><sub>IMIN</sub></i>) (&lt; 0).  Typical value = -0,2. Default: 0.0 */
		CIMPP::PU vimin;

		/** \brief Maximum inner loop output (<i>V</i><i><sub>MMax</sub></i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::PU vmmax;

		/** \brief Minimum inner loop output (<i>V</i><i><sub>MMin</sub></i>) (&lt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::PU vmmin;

		/** \brief Maximum voltage regulator output (<i>V</i><i><sub>RMAX</sub></i>) (&gt; 0).  Typical value = 10. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (<i>V</i><i><sub>RMIN</sub></i>) (&lt; 0).  Typical value = -10. Default: 0.0 */
		CIMPP::PU vrmin;

		/** \brief Reactance associated with potential source (<i>X</i><i><sub>L</sub></i>) (&gt;= 0).  Typical value = 0,081. Default: 0.0 */
		CIMPP::PU xl;

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

	BaseClass* ExcIEEEST3A_factory();
}
#endif
