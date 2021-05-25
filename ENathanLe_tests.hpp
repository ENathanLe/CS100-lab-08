#ifndef __ENATHANLE_TESTS_HPP__
#define __ENATHANLE_TESTS_HPP__

#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "rand.hpp"
#include "iterator.hpp"

TEST(ENathanLeTest, RandNegEval) {
	srand(1);
	Base* val1 = new Rand();
	Base* val2 = new Rand();
	Base* val3 = new Rand();
	Base* add = new Add(val1, val2);
	Base* sub = new Sub(val3, add);
	EXPECT_EQ(sub->evaluate(), -92);
	delete sub;
}  //creates a random value and gets the negative of it, by x - (x + x)

TEST(ENathanLeTest, SubAddMultEval) {
        Base* val1 = new Op(1);
        Base* val2 = new Op(3);
        Base* val3 = new Op(5);
        Base* val4 = new Op(2);
	Base* sub = new Sub(val2, val1);
        Base* add = new Add(sub, val3);
        Base* mult = new Mult(add, val4);
        EXPECT_EQ(mult->evaluate(), 14);
	delete mult;
}

TEST(ENathanLeTest, SubDivNegEval) {
        Base* val1 = new Op(7);
	Base* val2 = new Op(12);
	Base* val3 = new Op(4);
        Base* sub = new Sub(val1, val2);
        Base* div = new Div(sub, val3);
        EXPECT_EQ(div->evaluate(), -1.25);
	delete div;
}

TEST(ENathanLeTest, NegMultSubEval) {
        Base* val = new Op(-6);
	Base* val2 = new Op(2.2);
	Base* val3 = new Op(21.5);
        Base* mult = new Mult(val, val2);
        Base* sub = new Sub(mult, val3);
        EXPECT_EQ(sub->evaluate(), -34.7);
	delete sub;
}

TEST(IntegrateVisitorTests, commonCase) {
	Base* pos = new Op(4);
	Base* neg = new Op(-1);
	Base* two = new Op(2);
	Base* add = new Add(pos, neg);
	Base* pow = new Pow(add, two);
	std::string str = "";
	Visitor* v = new LatexVisitor();
	for(Iterator it(pow); !it.is_done(); it.next()){
	    it.current_node()->accept(v, it.current_index());
	}
	EXPECT_EQ(v->PrintLaTeX(pow), "${({({4}+{-1})}^{2})}$");
}

TEST(IntegrateVisitorTests, multDiv) {
        Base* four = new Op(4);
        Base* three = new Op(3);
        Base* two = new Op(2);
        Base* mult = new Mult(four, three);
        Base* div = new Div(mult, two);
        std::string str = "";
        Visitor* v = new LatexVisitor();
        for(Iterator it(div); !it.is_done(); it.next()){
            it.current_node()->accept(v, it.current_index());
        }
        EXPECT_EQ(v->PrintLaTeX(div), "${\frac{({4}\\cdot{3})}{2}}$");
}


#endif
