#include "visitor.hpp"
#include <iostream>
#include <string>

void LatexVisitor::visit_op(Op* node) {
	runningEq += "{" + node->stringify() + "}";
	
}

void LatexVisitor::visit_rand(Rand* node) {
	runningEq += "{" + node->stringify() + "}";
}

void LatexVisitor::visit_add_begin(Add* node) {
	runningEq += "{(";
}

void LatexVisitor::visit_add_middle(Add* node) {
	runningEq += "+";
}

void LatexVisitor::visit_add_end(Add* node) {
	runningEq += ")}";
}

void LatexVisitor::visit_sub_begin(Sub* node) {
	runningEq += "{(";
}

void LatexVisitor::visit_sub_middle(Sub* node) {
	runningEq += "-";
}

void LatexVisitor::visit_sub_end(Sub* node) {
	runningEq += ")}";
}

void LatexVisitor::visit_mult_begin(Mult* node) {
	runningEq += "{(";
}

void LatexVisitor::visit_mult_middle(Mult* node) {
	runningEq += "\\cdot";
}

void LatexVisitor::visit_mult_end(Mult* node) {
	runningEq += ")}";
}

void LatexVisitor::visit_div_begin(Div* node) {
	runningEq += "{\frac";
}

void LatexVisitor::visit_div_middle(Div* node) { runningEq += "";}

void LatexVisitor::visit_div_end(Div* node) {
	runningEq += "}";
}

void LatexVisitor::visit_pow_begin(Pow* node) {
	runningEq += "{(";
}

void LatexVisitor::visit_pow_middle(Pow* node) {
	runningEq += "^";
}

void LatexVisitor::visit_pow_end(Pow* node) {
	runningEq += ")}";
}

