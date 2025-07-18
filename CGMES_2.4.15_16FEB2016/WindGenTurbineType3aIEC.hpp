#ifndef WindGenTurbineType3aIEC_H
#define WindGenTurbineType3aIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindGenTurbineType3IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief IEC Type 3A generator set model.  Reference: IEC Standard 61400-27-1 Section 6.6.3.2. */
	class WindGenTurbineType3aIEC : public WindGenTurbineType3IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenTurbineType3aIEC();
		~WindGenTurbineType3aIEC() override;

		/** \brief Current PI controller proportional gain (K). It is type dependent parameter. Default: nullptr */
		CIMPP::Simple_Float kpc;

		/** \brief Current PI controller integration time constant (T). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tic;

		/** \brief Electromagnetic transient reactance (x). It is type dependent parameter. Default: nullptr */
		CIMPP::PU xs;

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

	BaseClass* WindGenTurbineType3aIEC_factory();
}
#endif
