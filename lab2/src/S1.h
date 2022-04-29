#pragma once
#include "systemc.h"

SC_MODULE(s1_unit)
{
	sc_in<int> x_in, y_in;
	sc_out<int> sum_out;//, f1_out;

	void outSum()
	{
		
		sum_out.write(y_in.read() + x_in.read());
	}

	
	SC_CTOR(s1_unit)
	{
		SC_METHOD(outSum);

		sensitive << x_in << y_in;
	}
};
