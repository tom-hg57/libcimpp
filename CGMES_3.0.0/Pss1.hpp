#ifndef Pss1_H
#define Pss1_H
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

#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Italian PSS with three inputs (speed, frequency, power). */
	class Pss1 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss1();
		~Pss1() override;

		/** \brief Frequency power input gain (<i>K</i><i><sub>F</sub></i>).  Typical value = 5. Default: 0.0 */
		CIMPP::Float kf;

		/** \brief Shaft speed power input gain (<i>K</i><i><sub>omega</sub></i>).  Typical value = 0. Default: 0.0 */
		CIMPP::Float komega;

		/** \brief Electric power input gain (<i>K</i><i><sub>PE</sub></i>).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float kpe;

		/** \brief PSS gain (<i>Ks</i>).  Typical value = 1. Default: 0.0 */
		CIMPP::Float ks;

		/** \brief Minimum power PSS enabling (<i>Pmin</i>).  Typical value = 0,25. Default: 0.0 */
		CIMPP::PU pmin;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>10</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t10;

		/** \brief Washout (<i>T</i><i><sub>5</sub></i>) (&gt;= 0).  Typical value = 3,5. Default: 0.0 */
		CIMPP::Seconds t5;

		/** \brief Filter time constant (<i>T</i><i><sub>6</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t6;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>7</sub></i>) (&gt;= 0). If = 0, both blocks are bypassed.  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t7;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>8</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t8;

		/** \brief Lead/lag time constant (<i>T</i><i><sub>9</sub></i>) (&gt;= 0).  If = 0, both blocks are bypassed.  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds t9;

		/** \brief Electric power filter time constant (<i>T</i><i><sub>PE</sub></i>) (&gt;= 0).  Typical value = 0,05. Default: 0.0 */
		CIMPP::Seconds tpe;

		/** \brief <font color=`#0f0f0f`>Signal selector (<i>V</i><i><sub>ADAT</sub></i>).</font> <font color=`#0f0f0f`>true = closed (generator power is greater than <i>Pmin</i>)</font> <font color=`#0f0f0f`>false = open (<i>Pe</i> is smaller than <i>Pmin</i>).</font> <font color=`#0f0f0f`>Typical value = true.</font> Default: false */
		CIMPP::Boolean vadat;

		/** \brief Stabilizer output maximum limit (<i>V</i><i><sub>SMN</sub></i>).  Typical value = -0,06. Default: 0.0 */
		CIMPP::PU vsmn;

		/** \brief Stabilizer output minimum limit (<i>V</i><i><sub>SMX</sub></i>).  Typical value = 0,06. Default: 0.0 */
		CIMPP::PU vsmx;

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

	BaseClass* Pss1_factory();
}
#endif
