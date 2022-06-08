#ifndef DISPLAY_H
#define DISPLAY_H

struct display : sc_module {

	sc_in<double> powr;      // Common test
	sc_in<bool>   clk;

	void print();

	SC_CTOR(display) {
		SC_METHOD(print);
		sensitive_pos << clk;
	}

public:
};
#endif
