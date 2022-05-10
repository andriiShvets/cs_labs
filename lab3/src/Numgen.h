#include "systemc.h"
#ifndef NUMGEN_H
#define NUMGEN_H

struct numgen : sc_module {
	sc_out<double> out1;      //output 1
	sc_out<double> out2;      //output 2
	sc_in<bool>    clk;       //clock

	// method to write values to the output ports
	void generate();

	//Constructor
	SC_CTOR(numgen) {
		SC_METHOD(generate);   //Declare generate as SC_METHOD and
		sensitive_pos << clk;    //make it sensitive to positive clock edge

	}
};

#endif
