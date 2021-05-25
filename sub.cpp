#include "sub.hpp"

void Sub::accept(Visitor* visitor, int index)
{
	if (index == 0) { return visitor->visit_sub_begin(this); }
	else if (index == 1) { return visitor->visit_sub_middle(this); }
	else if (index == 2) { return visitor->visit_sub_end(this); }
	//else
}
	
