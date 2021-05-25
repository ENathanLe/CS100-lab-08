#include "visitor.hpp"
#include <iostream>
#include <string>

std::string LatexVisitor::visit_op(Op* node) {
	return "{" + node->stringify() + "}";
	
}

std::string LatexVisitor::visit_rand(Rand* node) {
	return "{" + node->stringify() + "}";
}

std::string LatexVisitor::visit_add_begin(Add* node) {
	return "{(";
}

std::string LatexVisitor::visit_add_middle(Add* node) {
	return "+";
}

std::string LatexVisitor::visit_add_end(Add* node) {
	return ")}";
}

std::string LatexVisitor::visit_sub_begin(Sub* node) {
	return "{(";
}

std::string LatexVisitor::visit_sub_middle(Sub* node) {
	return "-";
}

std::string LatexVisitor::visit_sub_end(Sub* node) {
	return ")}";
}

std::string LatexVisitor::visit_mult_begin(Mult* node) {
	return "{(";
}

std::string LatexVisitor::visit_mult_middle(Mult* node) {
	return "\\cdot";
}

std::string LatexVisitor::visit_mult_end(Mult* node) {
	return ")}";
}

std::string LatexVisitor::visit_div_begin(Div* node) {
	return "{\frac";
}

std::string LatexVisitor::visit_div_middle(Div* node) { return "";}

std::string LatexVisitor::visit_div_end(Div* node) {
	return "}";
}

std::string LatexVisitor::visit_pow_begin(Pow* node) {
	return "{(";
}

std::string LatexVisitor::visit_pow_middle(Pow* node) {
	return "^";
}

std::string LatexVisitor::visit_pow_end(Pow* node) {
	return ")}";
}

