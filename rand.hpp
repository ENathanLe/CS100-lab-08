#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "op.hpp"
#include "visitor.hpp"


class Rand: public Op {
    public:
	Rand();
    int number_of_children() { return 2; }
    Base* get_child(int i) {
	if(!i) { return p1; }
	else { return p2; }
    }
    void accept(Visitor* visitor, int index) {
	visitor->visit_rand(this);
    }
	
};
#endif //__RAND_HPP__
