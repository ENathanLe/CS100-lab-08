#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "op.hpp"


class Rand: public Op {
    public:
	Rand();
	std::string accept(Visitor* visitor, int index) {
		return visitor->visit_rand(this);
	}
	int number_of_children() { return 0; }
	Base* get_child(int i) { return nullptr; }
};
#endif //__RAND_HPP__
