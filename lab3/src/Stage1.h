#ifndef STAGE1_H
#define STAGE1_H

struct stage1 : sc_module {

	sc_in<double> in1;   //input 1
	sc_in<double> in2;   //input 2
	sc_out<double> sum;  //output 1
	sc_out<double> diff; //output 2
	sc_in<bool>    clk;  //clock

	void addsub();       //method implementing functionality

	//Counstructor
	SC_CTOR(stage1) {
		SC_METHOD(addsub);   //Declare addsub as SC_METHOD and  
		sensitive_pos << clk;  //make it sensitive to positive clock edge
	}

public:

};

#endif
