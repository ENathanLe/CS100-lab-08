#include "op.hpp"

void Op::accept(Visitor* visitor, int index)
{
	return visitor->visit_op(this);
}

