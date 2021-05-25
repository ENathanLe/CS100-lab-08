#include "pow.hpp"

void Pow::accept(Visitor* visitor, int index)
{
	if (index == 0) { return visitor->visit_pow_begin(this); }
	else if (index == 1) { return visitor->visit_pow_middle(this); }
	else if (index == 2) { return visitor->visit_pow_end(this); }
	//else
}
	
