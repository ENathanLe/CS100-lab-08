#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <math.h>
#include <iostream>
class Pow : public Base {
    public:
	Pow(Base* op1, Base* op2) : Base(), operand1(op1), operand2(op2) {}
	std::string stringify() { return "(" + operand1->stringify() + " ** " + operand2->stringify() + ")";}
	double evaluate() {
		return pow(operand1->evaluate(), operand2->evaluate());
	}
	~Pow() {
	    if(operand1 == operand2) delete operand1;
	    else{
		delete operand1;
		delete operand2;
	    }
	}

        int number_of_children() { return 2; }
                
        Base* get_child(int i) { //i is either 0 or 1
               if(!i) { return operand1; }
               else { return operand2; }
       	} 
		void accept(Visitor* visitor, int index);
    private:
	Base* operand1;
	Base* operand2;
};

#endif
