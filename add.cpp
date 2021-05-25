#include "add.hpp"

void Add::accept(Visitor* visitor, int index) {
	if (index == 0) { visitor->visit_add_begin(this); }
	else if (index == 1) { visitor->visit_add_middle(this); }
	else if (index == 2) { visitor->visit_add_end(this); }
	//else
}
