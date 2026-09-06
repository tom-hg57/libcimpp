#ifndef PssIEEE4B_H
#define PssIEEE4B_H
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

#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE 421.5-2005 type PSS4B power system stabilizer. The PSS4B model represents a structure based on multiple working frequency bands. Three separate bands, respectively dedicated to the low-, intermediate- and high-frequency modes of oscillations, are used in this delta omega (speed input) PSS. There is an error in the in IEEE 421.5-2005 PSS4B model: the <i>Pe</i> input should read -<i>Pe</i>. This implies that the input <i>Pe</i> needs to be multiplied by -1. Reference: IEEE 4B 421.5-2005, 8.4.  Parameter details: This model has 2 input signals. They have the following fixed types (expressed in terms of InputSignalKind values): the first one is of rotorAngleFrequencyDeviation type and the second one is of generatorElectricalPower type. */
	class PssIEEE4B : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssIEEE4B();
		~PssIEEE4B() override;

		/** \brief Notch filter 1 (high-frequency band): three dB bandwidth (<i>B</i><i><sub>wi</sub></i>). Default: 0.0 */
		CIMPP::Float bwh1;

		/** \brief Notch filter 2 (high-frequency band): three dB bandwidth (<i>B</i><i><sub>wi</sub></i>). Default: 0.0 */
		CIMPP::Float bwh2;

		/** \brief Notch filter 1 (low-frequency band): three dB bandwidth (<i>B</i><i><sub>wi</sub></i>). Default: 0.0 */
		CIMPP::Float bwl1;

		/** \brief Notch filter 2 (low-frequency band): three dB bandwidth (<i>B</i><i><sub>wi</sub></i>). Default: 0.0 */
		CIMPP::Float bwl2;

		/** \brief High band gain (<i>K</i><i><sub>H</sub></i>).  Typical value = 120. Default: 0.0 */
		CIMPP::PU kh;

		/** \brief High band differential filter gain (<i>K</i><i><sub>H1</sub></i>).  Typical value = 66. Default: 0.0 */
		CIMPP::PU kh1;

		/** \brief High band first lead-lag blocks coefficient (<i>K</i><i><sub>H11</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kh11;

		/** \brief High band first lead-lag blocks coefficient (<i>K</i><i><sub>H17</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kh17;

		/** \brief High band differential filter gain (<i>K</i><i><sub>H2</sub></i>).  Typical value = 66. Default: 0.0 */
		CIMPP::PU kh2;

		/** \brief Intermediate band gain (<i>K</i><i><sub>I</sub></i>).  Typical value = 30. Default: 0.0 */
		CIMPP::PU ki;

		/** \brief Intermediate band differential filter gain (<i>K</i><i><sub>I1</sub></i>).  Typical value = 66. Default: 0.0 */
		CIMPP::PU ki1;

		/** \brief Intermediate band first lead-lag blocks coefficient (<i>K</i><i><sub>I11</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ki11;

		/** \brief Intermediate band first lead-lag blocks coefficient (<i>K</i><i><sub>I17</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU ki17;

		/** \brief Intermediate band differential filter gain (<i>K</i><i><sub>I2</sub></i>).  Typical value = 66. Default: 0.0 */
		CIMPP::PU ki2;

		/** \brief Low band gain (<i>K</i><i><sub>L</sub></i>).  Typical value = 7.5. Default: 0.0 */
		CIMPP::PU kl;

		/** \brief Low band differential filter gain (<i>K</i><i><sub>L1</sub></i>).  Typical value = 66. Default: 0.0 */
		CIMPP::PU kl1;

		/** \brief Low band first lead-lag blocks coefficient (<i>K</i><i><sub>L11</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kl11;

		/** \brief Low band first lead-lag blocks coefficient (<i>K</i><i><sub>L17</sub></i>).  Typical value = 1. Default: 0.0 */
		CIMPP::PU kl17;

		/** \brief Low band differential filter gain (<i>K</i><i><sub>L2</sub></i>).  Typical value = 66. Default: 0.0 */
		CIMPP::PU kl2;

		/** \brief Notch filter 1 (high-frequency band): filter frequency (<i>omega</i><i><sub>ni</sub></i>). Default: 0.0 */
		CIMPP::Float omeganh1;

		/** \brief Notch filter 2 (high-frequency band): filter frequency (<i>omega</i><i><sub>ni</sub></i>). Default: 0.0 */
		CIMPP::Float omeganh2;

		/** \brief Notch filter 1 (low-frequency band): filter frequency (<i>omega</i><i><sub>ni</sub></i>). Default: 0.0 */
		CIMPP::Float omeganl1;

		/** \brief Notch filter 2 (low-frequency band): filter frequency (<i>omega</i><i><sub>ni</sub></i>). Default: 0.0 */
		CIMPP::Float omeganl2;

		/** \brief High band time constant (<i>T</i><i><sub>H1</sub></i>) (&gt;= 0).  Typical value = 0,01513. Default: 0.0 */
		CIMPP::Seconds th1;

		/** \brief High band time constant (<i>T</i><i><sub>H10</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds th10;

		/** \brief High band time constant (<i>T</i><i><sub>H11</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds th11;

		/** \brief High band time constant (<i>T</i><i><sub>H12</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds th12;

		/** \brief High band time constant (<i>T</i><i><sub>H2</sub></i>) (&gt;= 0).  Typical value = 0,01816. Default: 0.0 */
		CIMPP::Seconds th2;

		/** \brief High band time constant (<i>T</i><i><sub>H3</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds th3;

		/** \brief High band time constant (<i>T</i><i><sub>H4</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds th4;

		/** \brief High band time constant (<i>T</i><i><sub>H5</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds th5;

		/** \brief High band time constant (<i>T</i><i><sub>H6</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds th6;

		/** \brief High band time constant (<i>T</i><i><sub>H7</sub></i>) (&gt;= 0).  Typical value = 0,01816. Default: 0.0 */
		CIMPP::Seconds th7;

		/** \brief High band time constant (<i>T</i><i><sub>H8</sub></i>) (&gt;= 0).  Typical value = 0,02179. Default: 0.0 */
		CIMPP::Seconds th8;

		/** \brief High band time constant (<i>T</i><i><sub>H9</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds th9;

		/** \brief Intermediate band time constant (<i>T</i><i><sub>I1</sub></i>) (&gt;= 0).  Typical value = 0,173. Default: 0.0 */
		CIMPP::Seconds ti1;

		/** \brief Intermediate band time constant (<i>T</i><i><sub>I10</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ti10;

		/** \brief Intermediate band time constant (<i>T</i><i><sub>I11</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ti11;

		/** \brief Intermediate band time constant (<i>T</i><i><sub>I12</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ti12;

		/** \brief Intermediate band time constant (<i>T</i><i><sub>I2</sub></i>) (&gt;= 0).  Typical value = 0,2075. Default: 0.0 */
		CIMPP::Seconds ti2;

		/** \brief Intermediate band time constant (<i>T</i><i><sub>I3</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ti3;

		/** \brief Intermediate band time constant (<i>T</i><i><sub>I4</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ti4;

		/** \brief Intermediate band time constant (<i>T</i><i><sub>I5</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ti5;

		/** \brief Intermediate band time constant (<i>T</i><i><sub>I6</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ti6;

		/** \brief Intermediate band time constant (<i>T</i><i><sub>I7</sub></i>) (&gt;= 0).  Typical value = 0,2075. Default: 0.0 */
		CIMPP::Seconds ti7;

		/** \brief Intermediate band time constant (<i>T</i><i><sub>I8</sub></i>) (&gt;= 0).  Typical value = 0,2491. Default: 0.0 */
		CIMPP::Seconds ti8;

		/** \brief Intermediate band time constant (<i>T</i><i><sub>I9</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds ti9;

		/** \brief Low band time constant (<i>T</i><i><sub>L1</sub></i>) (&gt;= 0).  Typical value = 1,73. Default: 0.0 */
		CIMPP::Seconds tl1;

		/** \brief Low band time constant (<i>T</i><i><sub>L10</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tl10;

		/** \brief Low band time constant (<i>T</i><i><sub>L11</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tl11;

		/** \brief Low band time constant (<i>T</i><i><sub>L12</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tl12;

		/** \brief Low band time constant (<i>T</i><i><sub>L2</sub></i>) (&gt;= 0).  Typical value = 2,075. Default: 0.0 */
		CIMPP::Seconds tl2;

		/** \brief Low band time constant (<i>T</i><i><sub>L3</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tl3;

		/** \brief Low band time constant (<i>T</i><i><sub>L4</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tl4;

		/** \brief Low band time constant (<i>T</i><i><sub>L5</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tl5;

		/** \brief Low band time constant (<i>T</i><i><sub>L6</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tl6;

		/** \brief Low band time constant (<i>T</i><i><sub>L7</sub></i>) (&gt;= 0).  Typical value = 2,075. Default: 0.0 */
		CIMPP::Seconds tl7;

		/** \brief Low band time constant (<i>T</i><i><sub>L8</sub></i>) (&gt;= 0).  Typical value = 2,491. Default: 0.0 */
		CIMPP::Seconds tl8;

		/** \brief Low band time constant (<i>T</i><i><sub>L9</sub></i>) (&gt;= 0).  Typical value = 0. Default: 0.0 */
		CIMPP::Seconds tl9;

		/** \brief High band output maximum limit (<i>V</i><i><sub>Hmax</sub></i>) (&gt; PssIEEE4B.vhmin).  Typical value = 0,6. Default: 0.0 */
		CIMPP::PU vhmax;

		/** \brief High band output minimum limit (<i>V</i><i><sub>Hmin</sub></i>) (&lt; PssIEEE4V.vhmax).  Typical value = -0,6. Default: 0.0 */
		CIMPP::PU vhmin;

		/** \brief Intermediate band output maximum limit (<i>V</i><i><sub>Imax</sub></i>) (&gt; PssIEEE4B.vimin).  Typical value = 0,6. Default: 0.0 */
		CIMPP::PU vimax;

		/** \brief Intermediate band output minimum limit (<i>V</i><i><sub>Imin</sub></i>) (&lt; PssIEEE4B.vimax).  Typical value = -0,6. Default: 0.0 */
		CIMPP::PU vimin;

		/** \brief Low band output maximum limit (<i>V</i><i><sub>Lmax</sub></i>) (&gt; PssIEEE4B.vlmin).  Typical value = 0,075. Default: 0.0 */
		CIMPP::PU vlmax;

		/** \brief Low band output minimum limit (<i>V</i><i><sub>Lmin</sub></i>) (&lt; PssIEEE4B.vlmax).  Typical value = -0,075. Default: 0.0 */
		CIMPP::PU vlmin;

		/** \brief PSS output maximum limit (<i>V</i><i><sub>STmax</sub></i>) (&gt; PssIEEE4B.vstmin).  Typical value = 0,15. Default: 0.0 */
		CIMPP::PU vstmax;

		/** \brief PSS output minimum limit (<i>V</i><i><sub>STmin</sub></i>) (&lt; PssIEEE4B.vstmax).  Typical value = -0,15. Default: 0.0 */
		CIMPP::PU vstmin;

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

	BaseClass* PssIEEE4B_factory();
}
#endif
