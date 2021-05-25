#include "mult.hpp"

void Mult::accept(Visitor* visitor, int index)
{
	if (index == 0) { visitor->visit_mult_begin(this); }
	else if (index == 1) { visitor->visit_mult_middle(this); }
	else if (index == 2) { visitor->visit_mult_end(this); }
	//else
}
	
