#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

using namespace std;

class Add : public Base {
	private: 
		Base* p1;
		Base* p2;
	public:
		Add(Base* operand1, Base* operand2) : Base() {
			this->p1 = operand1;
			this->p2 = operand2;
		}
		~Add() {
		    if(p1 == p2) delete p1;
            	    else{
                	delete p1;
                	delete p2;
            	    }
		}	
		double evaluate() {return p1->evaluate() +  p2->evaluate();}

		string stringify() {return "(" + p1->stringify() + " + " + p2->stringify() + ")";}

		int number_of_children() { return 2; }

		Base* get_child(int i) { //i is either 0 or 1
			if(!i) { return p1; }
			else { return p2; }
		}
		
		std::string accept(Visitor* visitor, int index) {
			if(index==0) { return visitor->visit_add_begin(this); }
			else if(index==1) { return visitor->visit_add_middle(this); }
			else if(index==2) { return visitor->visit_add_end(this); }
			//else
		}
};

#endif
