#ifndef DiagramObject_H
#define DiagramObject_H
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
#include "AngleDegrees.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "Integer.hpp"

namespace CIMPP
{
	class Diagram;
	class DiagramObjectPoint;
	class DiagramObjectStyle;
	class IdentifiedObject;
	class VisibilityLayer;

	/*
	An object that defines one or more points in a given space. This object can be associated with anything that specializes IdentifiedObject. For single line diagrams such objects typically include such items as analog values, breakers, disconnectors, power transformers, and transmission lines.
	*/
	class DiagramObject : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DiagramObject();
		~DiagramObject() override;

		CIMPP::Diagram* Diagram;  /* A diagram object is part of a diagram. Default: 0 */
		std::list<CIMPP::DiagramObjectPoint*> DiagramObjectPoints;  /* A diagram object can have 0 or more points to reflect its layout position, routing (for polylines) or boundary (for polygons). Default: 0 */
		CIMPP::DiagramObjectStyle* DiagramObjectStyle;  /* A diagram object has a style associated that provides a reference for the style used in the originating system. Default: 0 */
		CIMPP::IdentifiedObject* IdentifiedObject;  /* The domain object to which this diagram object is associated. Default: 0 */
		std::list<CIMPP::VisibilityLayer*> VisibilityLayers;  /* A diagram object can be part of multiple visibility layers. Default: 0 */
		CIMPP::Integer drawingOrder;  /* The drawing order of this element. The higher the number, the later the element is drawn in sequence. This is used to ensure that elements that overlap are rendered in the correct order. Default: 0 */
		CIMPP::Boolean isPolygon;  /* Defines whether or not the diagram objects points define the boundaries of a polygon or the routing of a polyline. If this value is true then a receiving application should consider the first and last points to be connected. Default: false */
		CIMPP::Float offsetX;  /* The offset in the X direction. This is used for defining the offset from centre for rendering an icon (the default is that a single point specifies the centre of the icon).  The offset is in per-unit with 0 indicating there is no offset from the horizontal centre of the icon.  -0.5 indicates it is offset by 50% to the left and 0.5 indicates an offset of 50% to the right. Default: 0.0 */
		CIMPP::Float offsetY;  /* The offset in the Y direction. This is used for defining the offset from centre for rendering an icon (the default is that a single point specifies the centre of the icon).  The offset is in per-unit with 0 indicating there is no offset from the vertical centre of the icon.  The offset direction is dependent on the orientation of the diagram, with -0.5 and 0.5 indicating an offset of +/- 50% on the vertical axis. Default: 0.0 */
		CIMPP::AngleDegrees rotation;  /* Sets the angle of rotation of the diagram object.  Zero degrees is pointing to the top of the diagram.  Rotation is clockwise.  DiagramObject.rotation=0 has the following meaning: The connection point of an element which has one terminal is pointing to the top side of the diagram. The connection point `From side` of an element which has more than one terminal is pointing to the top side of the diagram. DiagramObject.rotation=90 has the following meaning: The connection point of an element which has one terminal is pointing to the right hand side of the diagram. The connection point `From side` of an element which has more than one terminal is pointing to the right hand side of the diagram. Default: nullptr */

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

	BaseClass* DiagramObject_factory();
}
#endif
