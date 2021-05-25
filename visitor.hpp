#ifndef __VISITOR_HPP__
#define __VISITOR_HPP__

#include "op.hpp"
#include "rand.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include <string>

class Visitor{
    public:
        virtual ~Visitor() = default;

        // Nodes with no children are visited only once (index = 0)
        virtual std::string visit_op(Op* node) = 0;
        virtual std::string visit_rand(Rand* node) = 0;

        // Nodes with two children are visited three times.
        // index = 0 -> begin
        // index = 1 -> middle
        // index = 2 -> end
        virtual std::string visit_add_begin(Add* node) = 0;
        virtual std::string visit_add_middle(Add* node) = 0;
        virtual std::string visit_add_end(Add* node) = 0;
        virtual std::string visit_sub_begin(Sub* node) = 0;
        virtual std::string visit_sub_middle(Sub* node) = 0;
        virtual std::string visit_sub_end(Sub* node) = 0;
        virtual std::string visit_mult_begin(Mult* node) = 0;
        virtual std::string visit_mult_middle(Mult* node) = 0;
        virtual std::string visit_mult_end(Mult* node) = 0;
        virtual std::string visit_div_begin(Div* node) = 0;
        virtual std::string visit_div_middle(Div* node) = 0;
        virtual std::string visit_div_end(Div* node) = 0;
        virtual std::string visit_pow_begin(Pow* node) = 0;
        virtual std::string visit_pow_middle(Pow* node) = 0;
        virtual std::string visit_pow_end(Pow* node) = 0;
};

class LatexVisitor : public Visitor{
    public:
	std::string visit_op(Op* node);
        std::string visit_rand(Rand* node);
	std::string visit_add_begin(Add* node);
        std::string visit_add_middle(Add* node);
        std::string visit_add_end(Add* node);
        std::string visit_sub_begin(Sub* node);
        std::string visit_sub_middle(Sub* node);
        std::string visit_sub_end(Sub* node);
        std::string visit_mult_begin(Mult* node);
        std::string visit_mult_middle(Mult* node);
        std::string visit_mult_end(Mult* node);
        std::string visit_div_begin(Div* node);
        std::string visit_div_middle(Div* node);
        std::string visit_div_end(Div* node);
        std::string visit_pow_begin(Pow* node);
        std::string visit_pow_middle(Pow* node);
        std::string visit_pow_end(Pow* node);


};

#endif //__VISITOR_HPP__
