#ifndef _children_test_hpp_
#define _children_test_hpp_

#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"

#include "gtest/gtest.h"

TEST(OpTest, OpGetChildNum) { //op
	Base* val1 = new Op(1);
	EXPECT_EQ(val1->number_of_children(), 0);	
	delete val1;
}

TEST(OpTest, OpGetChild) {
	Base* val1 = new Op(1);
	EXPECT_EQ(val1->get_child(0), nullptr);	
	delete val1;
}

TEST(AddTest, AddGetChildNum) { //and
	Base* val1 = new Op(1);
	Base* val2 = new Op(2);
	Add* sum = new Add(val1, val2);
	EXPECT_EQ(sum->number_of_children(), 2);	
	delete sum;
}

TEST(AddTest, AddGetChild) {
	Base* val1 = new Op(1);
	Base* val2 = new Op(2);
	Add* sum = new Add(val1, val2);
	EXPECT_EQ(sum->get_child(0), val1);	
	delete sum;
}

TEST(SubTest, SubGetChildNum) { //sub
	Base* val1 = new Op(1);
	Base* val2 = new Op(2);
	Sub* dif = new Sub(val1, val2);
	EXPECT_EQ(dif->number_of_children(), 2);	
	delete dif;
}

TEST(SubTest, SubGetChild) {
	Base* val1 = new Op(1);
	Base* val2 = new Op(2);
	Sub* dif = new Sub(val1, val2);
	EXPECT_EQ(dif->get_child(0), val1);	
	delete dif;
}

TEST(MultTest, MultGetChildNum) { //mult
	Base* val1 = new Op(1);
	Base* val2 = new Op(2);
	Mult* prod = new Mult(val1, val2);
	EXPECT_EQ(prod->number_of_children(), 2);	
	delete prod;
}

TEST(MultTest, MultGetChild) {
	Base* val1 = new Op(1);
	Base* val2 = new Op(2);
	Mult* prod = new Mult(val1, val2);
	EXPECT_EQ(prod->get_child(0), val1);	
	delete prod;
}

TEST(DivTest, DivGetChildNum) { //div
	Base* val1 = new Op(1);
	Base* val2 = new Op(2);
	Div* quo = new Div(val1, val2);
	EXPECT_EQ(quo->number_of_children(), 2);	
	delete quo;
}

TEST(DivTest, DivGetChild) {
	Base* val1 = new Op(1);
	Base* val2 = new Op(2);
	Div* quo = new Div(val1, val2);
	EXPECT_EQ(quo->get_child(0), val1);	
	delete quo;
}

TEST(PowTest, PowGetChildNum) { //pow
	Base* val1 = new Op(1);
	Base* val2 = new Op(2);
	Pow* prod = new Pow(val1, val2);
	EXPECT_EQ(prod->number_of_children(), 2);	
	delete prod;
}

TEST(PowTest, PowGetChild) {
	Base* val1 = new Op(1);
	Base* val2 = new Op(2);
	Pow* prod = new Pow(val1, val2);
	EXPECT_EQ(prod->get_child(0), val1);	
	delete prod;
}
#endif //_children_test_hpp_
