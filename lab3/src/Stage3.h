#include "systemc.h"
#ifndef STAGE3_H
#define STAGE3_H

struct stage3 : sc_module {
	sc_in<double>  prod;     //input port 1
	sc_in<double>  quot;     //input port 2
	sc_out<double> powr;     //output port 1 
	sc_in<bool>    clk;      //clock

	void power();            //method implementing functionality

	//Constructor
	SC_CTOR(stage3) {
		SC_METHOD(power);    //declare power as SC_METHOD and 
		sensitive_pos << clk;  //make it sensitive to positive clock edge 
	}

};
#endif
