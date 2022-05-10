#include "systemc.h"
#ifndef DISPLAY_H
#define DISPLAY_H 

//#include "stage1.h"	// Added by ClassView
struct display : sc_module {
	sc_in<double> in;        // input port 1
	sc_in<bool>   clk;       // clock
	sc_in<double> diff;
	void print_result();            // method to display input port values

	//Constructor
	SC_CTOR(display) {
		SC_METHOD(print_result);    // declare print as SC_METHOD and 
		sensitive_pos << clk;  // make it sensitive to positive clock edge
	}

public:
};
#endif
