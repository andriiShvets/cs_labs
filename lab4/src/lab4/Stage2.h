#ifndef STAGE2_H
#define STAGE2_H

struct stage2 : sc_module {

	sc_in<double> a;   //input 1
	sc_in<double> b;   //input 2
	sc_out<double> r1; //output 1
	sc_out<double> r2; //output 2
	sc_in<bool> clk;   //clock

	void user_funk2();
	//Counstructor
	SC_CTOR(stage2) {
		SC_METHOD(user_funk2);
		sensitive_pos << clk;  //make it sensitive to positive clock edge
	}

public:

};
#endif
