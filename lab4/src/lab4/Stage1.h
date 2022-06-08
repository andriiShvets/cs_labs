#ifndef STAGE1_H
#define STAGE1_H

struct stage1 : sc_module {

	sc_in<double> x;     //input 1
	sc_in<double> y;     //input 2
	sc_out<double> o1;   //output 1
	sc_out<double> o2;   //output 2
	sc_in<bool>    clk;  //clock

	void user_funk1();   //method implementing functionality
						 //Counstructor
	SC_CTOR(stage1) {
		SC_METHOD(user_funk1);
		sensitive_pos << clk;  //make it sensitive to positive clock edge
	}

public:

};

#endif

