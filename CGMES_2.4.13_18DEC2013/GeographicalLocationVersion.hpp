#ifndef GeographicalLocationVersion_H
#define GeographicalLocationVersion_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Date.hpp"
#include "String.hpp"

namespace CIMPP
{

	/*
	Version details.
	*/
	class GeographicalLocationVersion : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		GeographicalLocationVersion();
		~GeographicalLocationVersion() override;

		CIMPP::String baseUML;  /* Base UML provided by CIM model manager. Default: '' */
		CIMPP::String baseURI;  /* Profile URI used in the Model Exchange header and defined in IEC standards.  It uniquely identifies the Profile and its version. It is given for information only and to identify the closest IEC profile to which this CGMES profile is based on. Default: '' */
		CIMPP::Date date;  /* Profile creation date Form is YYYY-MM-DD for example for January 5, 2009 it is 2009-01-05. Default: '' */
		CIMPP::String differenceModelURI;  /* Difference model URI defined by IEC 61970-552. Default: '' */
		CIMPP::String entsoeUML;  /* UML provided by ENTSO-E. Default: '' */
		CIMPP::String entsoeURI;  /* Profile URI defined by ENTSO-E and used in the Model Exchange header.  It uniquely identifies the Profile and its version. The last two elements in the URI (http://entsoe.eu/CIM/GeographicalLocation/yy/zzz) indicate major and minor versions where:  - yy - indicates a major version; - zzz - indicates a minor version. Default: '' */
		CIMPP::String modelDescriptionURI;  /* Model Description URI defined by IEC 61970-552. Default: '' */
		CIMPP::String namespaceRDF;  /* RDF namespace. Default: '' */
		CIMPP::String namespaceUML;  /* CIM UML namespace. Default: '' */
		CIMPP::String shortName;  /* The short name of the profile used in profile documentation. Default: '' */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* GeographicalLocationVersion_factory();
}
#endif