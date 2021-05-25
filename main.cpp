#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "iterator.hpp"
#include "visitor.hpp"
#include <string>

int main() {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    Base* mult = new Mult(seven, four);
    Base* add = new Add(three, mult);
    Base* minus = new Sub(add, two);
    
    std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl;

    Visitor* v = new LatexVisitor();
    std::string str = "";
    for(Iterator it(minus); !it.is_done(); it.next()){
	it.current_node()->accept(v, it.current_index());
    }
    cout << v->PrintLaTeX(minus) << endl;

    Base* one = new Op(1);
    Base* five = new Op(5);
    Base* zero = new Op(0);
    Base* sub = new Sub(five, zero);
    delete add;
    add = new Add(one, sub);
    delete v;
    v = new LatexVisitor();
    for(Iterator it(add); !it.is_done(); it.next()) {
	it.current_node()->accept(v, it.current_index());
    }
    cout << add->stringify() << "=>" << v->PrintLaTeX(add) << endl;


    delete minus;
    delete add;
    return 0;
}
