#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

using namespace std;

class Mult : public Base {
	private: 
		Base* p1;
		Base* p2;
	public:
		Mult(Base* operand1, Base* operand2) : Base() {
			this->p1 = operand1;
			this->p2 = operand2;
		}
		~Mult() {
		    if(p1 == p2) delete p1;
                    else{
                        delete p1;
                        delete p2;
                    }
		}	
		double evaluate() {return p1->evaluate() * p2->evaluate();}

		string stringify() {return "(" + p1->stringify() + " * " + p2->stringify() + ")";}

                int number_of_children() { return 2; }
                
                Base* get_child(int i) { //i is either 0 or 1
                        if(!i) { return p1; }
                        else { return p2; }
                }
		void accept(Visitor* visitor, int index) {
			if(index==0) { visitor->visit_mult_begin(this); }
			else if(index==1) { visitor->visit_mult_middle(this); }
			else if(index==2) { visitor->visit_mult_end(this); }
			//else
		}
};

#endif
