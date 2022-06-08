#ifndef OBSERVER_H
#define OBSERVER_H

struct observer : sc_module {

	sc_in<double> x;          // All stages
	sc_in<double> y;
	sc_in<double> o1;
	sc_in<double> o2;
	sc_in<double> r1;
	sc_in<double> r2;
	sc_in<double> sum;
	sc_in<double> diff;
	sc_in<double> prod;
	sc_in<double> quot;
	sc_in<double> powr;
	sc_in<bool>   clk;

	void observe();

	SC_CTOR(observer) {
		SC_METHOD(observe);    // declare observe as SC_METHOD and 
		sensitive_pos << clk;  // make it sensitive to positive clock edge
	}

public:
};
#endif
