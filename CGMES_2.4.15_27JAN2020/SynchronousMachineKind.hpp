#ifndef SynchronousMachineKind_H
#define SynchronousMachineKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Synchronous machine type. */
	class SynchronousMachineKind
	{
	public:
		enum SynchronousMachineKind_ENUM
		{
			generator,
			condenser,
			generatorOrCondenser,
			motor,
			generatorOrMotor,
			motorOrCondenser,
			generatorOrCondenserOrMotor,
		};

		SynchronousMachineKind() : value(), initialized(false) {}
		SynchronousMachineKind(SynchronousMachineKind_ENUM value) : value(value), initialized(true) {}

		SynchronousMachineKind& operator=(SynchronousMachineKind_ENUM rop);
		operator SynchronousMachineKind_ENUM() const;

		SynchronousMachineKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, SynchronousMachineKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const SynchronousMachineKind& obj);
	};
}
#endif
