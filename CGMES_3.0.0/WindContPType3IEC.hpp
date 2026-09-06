#ifndef WindContPType3IEC_H
#define WindContPType3IEC_H
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

#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindTurbineType3IEC;

	/** \brief P control model type 3. Reference: IEC 61400-27-1:2015, 5.6.5.4. */
	class WindContPType3IEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContPType3IEC();
		~WindContPType3IEC() override;

		/** \brief The wind dynamics lookup table associated with this P control type 3 model. Default: {} */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind turbine type 3 model with which this wind control P type 3 model is associated. Default: nullptr */
		CIMPP::WindTurbineType3IEC* WindTurbineType3IEC;

		/** \brief Maximum wind turbine power ramp rate (<i>dp</i><i><sub>max</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU dpmax;

		/** \brief Maximum ramp rate of wind turbine reference power (<i>dp</i><i><sub>refmax</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU dprefmax;

		/** \brief Minimum ramp rate of wind turbine reference power (<i>dp</i><i><sub>refmin</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU dprefmin;

		/** \brief Ramp limitation of torque, required in some grid codes (<i>dt</i><i><sub>max</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU dthetamax;

		/** \brief Limitation of torque rise rate during UVRT (<i>dtheta</i><i><sub>maxUVRT</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU dthetamaxuvrt;

		/** \brief Gain for active drive train damping (<i>K</i><i><sub>DTD</sub></i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU kdtd;

		/** \brief PI controller integration parameter (<i>K</i><sub>Ip</sub>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU kip;

		/** \brief PI controller proportional gain (<i>K</i><sub>Pp</sub>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU kpp;

		/** \brief Enable UVRT power control mode (<i>M</i><i><sub>pUVRT</sub></i><sub>)</sub>.  It is a project-dependent parameter. true = voltage control (1 in the IEC model) false = reactive power control (0 in the IEC model). Default: false */
		CIMPP::Boolean mpuvrt;

		/** \brief Active drive train damping frequency (<i>omega</i><i><sub>DTD</sub></i>). It can be calculated from two mass model parameters. It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU omegadtd;

		/** \brief Offset to reference value that limits controller action during rotor speed changes (<i>omega</i><i><sub>offset</sub></i>). It is a case-dependent parameter. Default: 0.0 */
		CIMPP::PU omegaoffset;

		/** \brief Maximum active drive train damping power (<i>p</i><sub>DTDmax</sub>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU pdtdmax;

		/** \brief Time<sub> </sub>delay after deep voltage sags (<i>T</i><i><sub>DVS</sub></i>) (&gt;= 0). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tdvs;

		/** \brief Minimum electrical generator torque (<i>t</i><sub>emin</sub>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU thetaemin;

		/** \brief Voltage scaling factor of reset-torque (<i>t</i><sub>uscale</sub>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU thetauscale;

		/** \brief Filter time constant for generator speed measurement (<i>T</i><sub>omegafiltp3</sub>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tomegafiltp3;

		/** \brief Time constant in speed reference filter (<i>T</i><sub>omega,ref</sub>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tomegaref;

		/** \brief Filter time constant for power measurement (<i>T</i><sub>pfiltp3</sub>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tpfiltp3;

		/** \brief Time constant in power order lag (<i>T</i><sub>pord</sub>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::PU tpord;

		/** \brief Filter time constant for voltage measurement (<i>T</i><sub>ufiltp3</sub>) (&gt;= 0). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tufiltp3;

		/** \brief Voltage limit for hold UVRT status after deep voltage sags (<i>u</i><i><sub>DVS</sub></i>). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU udvs;

		/** \brief Voltage dip threshold for P-control (<i>u</i><sub>Pdip</sub>).  Part of turbine control, often different (e.g 0.8) from converter thresholds. It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU updip;

		/** \brief Coefficient for active drive train damping (<i>zeta</i>). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Float zeta;

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

	BaseClass* WindContPType3IEC_factory();
}
#endif
