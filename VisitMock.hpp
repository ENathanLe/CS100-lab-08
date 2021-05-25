#ifndef _visit_mock_hpp_
#define _visit_mock_hpp_

#include "visitor.hpp"

class VisitorMock : public Visitor {
    public:
	VisitorMock() {}

        // Nodes with no children are visited only once (index = 0)
        virtual std::string visitop(Op* node) { return "vo"; }
        virtual std::string visit_rand(Rand* node) { return "vr"; }

        // Nodes with two children are visited three times.
        // index = 0 -> begin
        // index = 1 -> middle
        // index = 2 -> end
        virtual std::string visit_add_begin(Add* node) { return "ab"; }
        virtual std::string visit_add_middle(Add* node) { return "am"; }
        virtual std::string visit_add_end(Add* node) { return "ae"; }
        virtual std::string visit_sub_begin(Sub* node) { return "sb"; }
        virtual std::string visit_sub_middle(Sub* node) { return "sm"; }
        virtual std::string visit_sub_end(Sub* node) { return "se"; }
        virtual std::string visit_mult_begin(Mult* node) { return "mb"; }
        virtual std::string visit_mult_middle(Mult* node) { return "mm"; }
        virtual std::string visit_mult_end(Mult* node) { return "me"; }
        virtual std::string visit_div_begin(Div* node) { return "db"; }
        virtual std::string visit_div_middle(Div* node) { return "dm"; }
        virtual std::string visit_div_end(Div* node) { return "de"; }
        virtual std::string visit_pow_begin(Pow* node) { return "pb"; }
        virtual std::string visit_pow_middle(Pow* node) { return "pm"; }
        virtual std::string visit_pow_end(Pow* node) { return "pe"; }
};

#endif //_visit_mock_hpp_
