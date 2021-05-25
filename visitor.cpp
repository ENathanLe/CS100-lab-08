#include "visitor.hpp"
#include <iostream>

void LatexVisitor::visit_op(Op* node) {
	cout << "{" << node->stringify() << "}";
}

void LatexVisitor::visit_rand(Rand* node) {
	cout << "{" << node->stringify() << "}";
}

void LatexVisitor::visit_add_begin(Add* node) {
	cout << "{(";
}

void Latex_Visitor::visit_add_middle(Add* node) {
	cout << "+";
}

void Latex_Visitor::visit_add_end(Add* node) {
	cout << ")}";
}

void Latex_Visitor::visit_sub_begin(Sub* node) {
	cout << "{(";
}

void Latex_Visitor::visit_sub_middle(Sub* node) {
	cout << "-";
}

void Latex_Visitor::visit_sub_end(Sub* node) {
	cout << ")}";
}

void Latex_Visitor::visit_mult_begin(Mult* node) {
	cout << "{(";
}

void Latex_Visitor::visit_mult_middle(Mult* node) {
	cout << "\cdot";
}

void Latex_Visitor::visit_mult_end(Mult* node) {
	cout << ")}";
}

void Latex_Visitor::visit_div_begin(Div* node) {
	cout << "{\frac";
}

void Latex_Visitor::visit_div_middle(Div* node) {}

void Latex_Visitor::visit_div_end(Div* node) {
	cout << "}";
}

void Latex_Visitor::visit_pow_begin(Pow* node) {
	cout << "{(";
}

void Latex_Visitor::visit_pow_middle(Pow* node) {
	cout << "^";
}

void Latex_Visitor::visit_pow_end(Pow* node) {
	cout << ")}";
}

