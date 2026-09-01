#ifndef ExcST7BUELselectorKind_H
#define ExcST7BUELselectorKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Types of connections for the UEL input used for static excitation systems type 7B. */
	class ExcST7BUELselectorKind
	{
	public:
		enum ExcST7BUELselectorKind_ENUM
		{
			/** No UEL input is used.  Corresponds to <i>UELin</i> not = 1 and not = 2 and not = 3 on the ExcST7B diagram. Original ExcST7B model would have called this <i>UELin</i> = 0. */
			noUELinput,
			/** The signal is added to <i>Vref</i>. Corresponds to <i>UELin</i> = 1 on the ExcST7B diagram. */
			addVref,
			/** The signal is connected into the input <i>HVGate</i>.  Corresponds to <i>UELin</i> = 2 on the ExcST7B diagram. */
			inputHVgate,
			/** The signal is connected into the output <i>HVGate</i>.  Corresponds to <i>UELin</i> = 3 on the ExcST7B diagram. */
			outputHVgate,
		};

		ExcST7BUELselectorKind() : value(), initialized(false) {}
		ExcST7BUELselectorKind(ExcST7BUELselectorKind_ENUM value) : value(value), initialized(true) {}

		ExcST7BUELselectorKind& operator=(ExcST7BUELselectorKind_ENUM rop);
		operator ExcST7BUELselectorKind_ENUM() const;

		ExcST7BUELselectorKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, ExcST7BUELselectorKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const ExcST7BUELselectorKind& obj);
	};
}
#endif
