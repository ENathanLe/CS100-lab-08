#include "div.hpp"

void Div::accept(Visitor* visitor, int index)
{

	if (index == 0) { visitor->visit_div_begin(this); }
	else if (index == 1) { visitor->visit_div_middle(this); }
	else if (index == 2) { visitor->visit_div_end(this); }
	//else
}
	
