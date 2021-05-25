#include "visitor.hpp"
#include "iterator.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include <iostream>
#include <string>

class LatexVisitor : public Visitor{
    public:
	std::string visit_op(Op* node) { 
		return "{" + node->stringify() + "}";
	}
        std::string visit_rand(Rand* node) {
		return "{" + node->stringify() + "}";
	}
	std::string visit_add_begin(Add* node) {
		return "{(";
	}
        std::string visit_add_middle(Add* node) {
		return "+";
	}
        std::string visit_add_end(Add* node) {
		return ")}";
	}
        std::string visit_sub_begin(Sub* node) {
		return "{(";
	}
        std::string visit_sub_middle(Sub* node) {
		return "-";
	}
        std::string visit_sub_end(Sub* node) {
		return ")}";
	}
        std::string visit_mult_begin(Mult* node) {
		return "{(";
	}
        std::string visit_mult_middle(Mult* node) {
		return "\\cdot";
	}
        std::string visit_mult_end(Mult* node) {
		return ")}";
	}
        std::string visit_div_begin(Div* node) {
		return "{\frac";
	}
        std::string visit_div_middle(Div* node) {
		return "";
	}
        std::string visit_div_end(Div* node) {
		return "}";
	}
        std::string visit_pow_begin(Pow* node) {
		return "{(";
	}	
        std::string visit_pow_middle(Pow* node) {
		return "^";
	}
        std::string visit_pow_end(Pow* node) {
		return ")}";
	}
};

