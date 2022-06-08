#pragma once
#include "systemc.h"
#include "S1.h"

SC_MODULE(s2_unit)
{
	sc_in<int> sum_in, f1_in;
	sc_out<int> r1, r2;

	void OutR1()
	{
		int result = sum_in.read() ^ f1_in.read();
		r1.write(result);
	}

	void OutR2()
	{
		OutR1();
		r2.write(!(sum_in.read() ^ f1_in.read()));
	}

	SC_CTOR(s2_unit)
	{
		SC_METHOD(OutR2);

		sensitive << sum_in << f1_in;
	}
};
