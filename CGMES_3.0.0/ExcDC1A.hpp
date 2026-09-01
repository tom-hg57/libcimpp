#ifndef ExcDC1A_H
#define ExcDC1A_H
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
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Modified IEEE DC1A direct current commutator exciter with speed input and without underexcitation limiters (UEL) inputs. */
	class ExcDC1A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcDC1A();
		~ExcDC1A() override;

		/** \brief Exciter voltage at which exciter saturation is defined (<i>Efd</i><i><sub>1</sub></i>) (&gt; 0).  Typical value = 3,1. Default: 0.0 */
		CIMPP::PU efd1;

		/** \brief Exciter voltage at which exciter saturation is defined (<i>Efd</i><i><sub>2</sub></i>) (&gt; 0).  Typical value = 2,3. Default: 0.0 */
		CIMPP::PU efd2;

		/** \brief Maximum voltage exciter output limiter (<i>Efdmax</i>) (&gt; ExcDC1A.efdmin).  Typical value = 99. Default: 0.0 */
		CIMPP::PU efdmax;

		/** \brief Minimum voltage exciter output limiter (<i>Efdmin</i>) (&lt; ExcDC1A.edfmax).  Typical value = -99. Default: 0.0 */
		CIMPP::PU efdmin;

		/** \brief (<i>exclim</i>).  IEEE standard is ambiguous about lower limit on exciter output.  true = a lower limit of zero is applied to integrator output false = a lower limit of zero is not applied to integrator output. Typical value = true. Default: false */
		CIMPP::Boolean exclim;

		/** \brief Voltage regulator gain (<i>Ka</i>) (&gt; 0).  Typical value = 46. Default: 0.0 */
		CIMPP::PU ka;

		/** \brief Exciter constant related to self-excited field (<i>Ke</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ke;

		/** \brief Excitation control system stabilizer gain (<i>Kf</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::PU kf;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (<i>Ks</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::PU ks;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>Efd</i><i><sub>1</sub></i> (<i>Se[Eefd</i><i><sub>1</sub></i><i>]</i>) (&gt;= 0).  Typical value = 0,33. Default: 0.0 */
		CIMPP::Float seefd1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, <i>Efd</i><i><sub>2</sub></i> (<i>Se[Eefd</i><i><sub>2</sub></i><i>]</i>) (&gt;= 0).  Typical value = 0,1. Default: 0.0 */
		CIMPP::Float seefd2;

		/** \brief Voltage regulator time constant (<i>Ta</i>) (&gt; 0).  Typical value = 0,06. Default: 0.0 */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (<i>Tb</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (<i>Tc</i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tc;

		/** \brief Exciter time constant, integration rate associated with exciter control (<i>Te</i>) (&gt; 0).  Typical value = 0,46. Default: 0.0 */
		CIMPP::Seconds te;

		/** \brief Excitation control system stabilizer time constant (<i>Tf</i>) (&gt; 0).  Typical value = 1. Default: 0.0 */
		CIMPP::Seconds tf;

		/** \brief Maximum voltage regulator output (<i>Vrmax</i>) (&gt; ExcDC1A.vrmin).  Typical value = 1. Default: 0.0 */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (<i>Vrmin</i>) (&lt; 0 and &lt; ExcDC1A.vrmax).  Typical value = -0,9. Default: 0.0 */
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

	BaseClass* ExcDC1A_factory();
}
#endif
