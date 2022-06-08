#ifndef STAGE3_H
#define STAGE3_H

struct stage3 : sc_module {

	sc_in<double> r1;    //input 1
	sc_in<double> r2;    //input 2
	sc_out<double> sum;  //output 1
	sc_out<double> diff; //output 2
	sc_in<bool>    clk;  //clock

	void addsub();       //method implementing functionality
						 //Counstructor
	SC_CTOR(stage3) {
		SC_METHOD(addsub);
		sensitive_pos << clk;  //make it sensitive to positive clock edge
	}

public:

};

#endif
