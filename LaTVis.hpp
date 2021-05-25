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
	std::string PrintLateX(Base* ptr) {
		return "$" + runningEq + "$";	
	}
	void visit_op(Op* node) { 
		runningEq +=  "{" + node->stringify() + "}";
	}
        void visit_rand(Rand* node) {
		runningEq +=  "{" + node->stringify() + "}";
	}
	void visit_add_begin(Add* node) {
		runningEq +=  "{(";
	}
        void visit_add_middle(Add* node) {
		runningEq +=  "+";
	}
        void visit_add_end(Add* node) {
		runningEq +=  ")}";
	}
        void visit_sub_begin(Sub* node) {
		runningEq +=  "{(";
	}
        void visit_sub_middle(Sub* node) {
		runningEq +=  "-";
	}
        void visit_sub_end(Sub* node) {
		runningEq +=  ")}";
	}
        void visit_mult_begin(Mult* node) {
		runningEq +=  "{(";
	}
        void visit_mult_middle(Mult* node) {
		runningEq +=  "\\cdot";
	}
        void visit_mult_end(Mult* node) {
		runningEq +=  ")}";
	}
};
