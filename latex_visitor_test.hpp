#ifndef __LATEX_VISITOR_TEST_HPP__
#define __LATEX_VISITOR_TEST_HPP__

#include "gtest/gtest.h"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "visitor.hpp"
#include "op.hpp"
#include "rand.hpp" 
#include "mockop.hpp"

TEST(LatexTest, AddBegin) {
    Add* node;
    LatexVisitor test;
    test.visit_add_begin(node);
    EXPECT_EQ(test.PrintLaTeX(node), "${($");
}//unit test visitor add begin

TEST(LatexTest, AddMiddle) {
    Add* node;
    LatexVisitor test;
    test.visit_add_middle(node);
    EXPECT_EQ(test.PrintLaTeX(node), "$+$");
}

TEST(LatexTest, SubBegin) {
    Sub* node;
    LatexVisitor test;
    test.visit_sub_begin(node);
    EXPECT_EQ(test.PrintLaTeX(node), "${($");
}

TEST(LatexTest, SubMiddle) {
    Sub* node;
    LatexVisitor test;
    test.visit_sub_middle(node);
    EXPECT_EQ(test.PrintLaTeX(node), "$-$");
}

TEST(LatexTest, DivBegin) {
    Div* node;
    LatexVisitor test;
    test.visit_div_begin(node);
    EXPECT_EQ(test.PrintLaTeX(node), "${\frac$");
}

TEST(LatexTest, DivMiddle) {
    Div* node;
    LatexVisitor test;
    test.visit_div_middle(node);
    EXPECT_EQ(test.PrintLaTeX(node), "$$");
}

TEST(LatexTest, PowBegin) {
    Pow* node;
    LatexVisitor test;
    test.visit_pow_begin(node);
    EXPECT_EQ(test.PrintLaTeX(node), "${($");
}

TEST(LatexTest, PowMiddle) {
    Pow* node;
    LatexVisitor test;
    test.visit_pow_middle(node);
    EXPECT_EQ(test.PrintLaTeX(node), "$^$");
}

TEST(LatexTest, Op) {
    Op* node = new MockOpEight();
    LatexVisitor test;
    test.visit_op(node);
    EXPECT_EQ(test.PrintLaTeX(node), "${8.0}$");
}

TEST(LatexTest, Rand) {
    Rand* node = new MockRandEight();
    LatexVisitor test;
    test.visit_rand(node);
    EXPECT_EQ(test.PrintLaTeX(node), "${8.0}$");
}

#endif
