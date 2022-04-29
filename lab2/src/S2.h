#pragma once
#include "systemc.h"
#include "S1.h"

SC_MODULE(s2_unit)
{
	sc_in<int> sum_in;// f1_in;
	sc_out<int>  r1;

	void OutR1()
	{
		int result = sum_in.read() /*^ f1_in.read()*/;
		r1.write(result);
	}

	

	SC_CTOR(s2_unit)
	{
		SC_METHOD(OutR1);

		sensitive << sum_in /*<< f1_in*/;
	}
};
