#ifndef __LATEX_VISITOR_TEST_HPP__
#define __LATEX_VISITOR_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "visitor.hpp"
#include "latex_visitor.hpp"
#include "op.hpp"
#include "rand.hpp" 
#include "mockop.hpp"

TEST(LatexTest, AddBegin) {
    Add* node;
    LatexVisitor test;
    EXPECT_EQ(test.visit_add_begin(node), "{(");
}//unit test visitor add begin

TEST(LatexTest, AddMiddle) {
    Add* node;
    LatexVisitor test;
    EXPECT_EQ(test.visit_add_middle(node), "+");
}

TEST(LatexTest, SubBegin) {
    Sub* node;
    LatexVisitor test;
    EXPECT_EQ(test.visit_sub_begin(node), "{(");
}

TEST(LatexTest, SubMiddle) {
    Sub* node;
    LatexVisitor test;
    EXPECT_EQ(test.visit_sub_middle(node), "-");
}

TEST(LatexTest, DivBegin) {
    Div* node;
    LatexVisitor test;
    EXPECT_EQ(test.visit_div_begin(node), "{\frac");
}

TEST(LatexTest, DivMiddle) {
    Div* node;
    LatexVisitor test;
    EXPECT_EQ(test.visit_div_middle(node), "");
}

TEST(LatexTest, PowBegin) {
    Pow* node;
    LatexVisitor test;
    EXPECT_EQ(test.visit_pow_begin(node), "{(");
}

TEST(LatexTest, PowMiddle) {
    Pow* node;
    LatexVisitor test;
    EXPECT_EQ(test.visit_pow_middle(node), "^");
}

TEST(LatexTest, Op) {
    Op* node = new MockOpEight();
    LatexVisitor test;
    EXPECT_EQ(test.visit_op(node), "{8.0}");
}

TEST(LatexTest, Rand) {
    Rand* node = new MockRandEight();
    LatexVisitor test;
    EXPECT_EQ(test.visit_rand(node), "{8.0}");
}

#endif
