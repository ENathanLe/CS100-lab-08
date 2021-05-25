#ifndef _latex_vista_
#define _latex_vista_

#include "visitor.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "iterator.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include <iostream>
#include <string>

class LatexVisitor : public Visitor {
    private:
	string runningEq;
    public:
	std::string PrintLaTeX(Base* ptr) {
		return "$" + runningEq + "$";	
	}
	virtual void visit_op(Op* node) { 
		runningEq +=  "{" + node->stringify() + "}";
	}
        virtual void visit_rand(Rand* node) {
		runningEq +=  "{" + node->stringify() + "}";
	}
	virtual void visit_add_begin(Add* node) {
		runningEq +=  "{(";
	}
        virtual void visit_add_middle(Add* node) {
		runningEq +=  "+";
	}
        virtual void visit_add_end(Add* node) {
		runningEq +=  ")}";
	}
        virtual void visit_sub_begin(Sub* node) {
		runningEq +=  "{(";
	}
        virtual void visit_sub_middle(Sub* node) {
		runningEq +=  "-";
	}
        virtual void visit_sub_end(Sub* node) {
		runningEq +=  ")}";
	}
        virtual void visit_mult_begin(Mult* node) {
		runningEq +=  "{(";
	}
        virtual void visit_mult_middle(Mult* node) {
		runningEq +=  "\\cdot";
	}
        virtual void visit_mult_end(Mult* node) {
		runningEq +=  ")}";
	}
};

#endif
