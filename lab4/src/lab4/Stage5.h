#ifndef STAGE5_H
#define STAGE5_H

struct stage5 : sc_module {

	sc_in<double>  prod;     //input port 1
	sc_in<double>  quot;     //input port 2
	sc_out<double> powr;     //output port 1 
	sc_in<bool>    clk;      //clock

	void power();          //method providing functionality
							 //Constructor
	SC_CTOR(stage5) {
		SC_METHOD(power);       //Declare power as SC_METHOD and
		sensitive_pos << clk;   //make it sensitive to positive clock edge. 
	}
};
#endif
