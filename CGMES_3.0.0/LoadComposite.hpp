#ifndef LoadComposite_H
#define LoadComposite_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "LoadDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

#include "Float.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Combined static load and induction motor load effects. The dynamics of the motor are simplified by linearizing the induction machine equations. */
	class LoadComposite : public LoadDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		LoadComposite();
		~LoadComposite() override;

		/** \brief Active load-frequency dependence index (dynamic) (<i>Epfd</i>).  Typical value = 1,5. Default: 0.0 */
		CIMPP::Float epfd;

		/** \brief Active load-frequency dependence index (static) (<i>Epfs</i>).  Typical value = 1,5. Default: 0.0 */
		CIMPP::Float epfs;

		/** \brief Active load-voltage dependence index (dynamic) (<i>Epvd</i>).  Typical value = 0,7. Default: 0.0 */
		CIMPP::Float epvd;

		/** \brief Active load-voltage dependence index (static) (<i>Epvs</i>).  Typical value = 0,7. Default: 0.0 */
		CIMPP::Float epvs;

		/** \brief Reactive load-frequency dependence index (dynamic) (<i>Eqfd</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::Float eqfd;

		/** \brief Reactive load-frequency dependence index (static) (<i>Eqfs</i>).  Typical value = 0. Default: 0.0 */
		CIMPP::Float eqfs;

		/** \brief Reactive load-voltage dependence index (dynamic) (<i>Eqvd</i>).  Typical value = 2. Default: 0.0 */
		CIMPP::Float eqvd;

		/** \brief Reactive load-voltage dependence index (static) (<i>Eqvs</i>).  Typical value = 2. Default: 0.0 */
		CIMPP::Float eqvs;

		/** \brief Inertia constant (<i>H</i>) (&gt;= 0).  Typical value = 2,5. Default: 0.0 */
		CIMPP::Seconds h;

		/** \brief Loading factor (<i>L</i><i><sub>fac</sub></i>). The ratio of initial <i>P</i> to motor MVA base.  Typical value = 0,8. Default: 0.0 */
		CIMPP::Float lfac;

		/** \brief Fraction of constant-power load to be represented by this motor model (<i>P</i><i><sub>FRAC</sub></i>) (&gt;= 0,0 and &lt;= 1,0).  Typical value = 0,5. Default: 0.0 */
		CIMPP::Float pfrac;

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

	BaseClass* LoadComposite_factory();
}
#endif
