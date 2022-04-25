#pragma once
#include "systemc.h"

SC_MODULE(Stimulator)
{
	sc_out<int> X, Y;
	sc_in<bool> CLK;

	void Generator()
	{
		X.write(27);	//option
		Y.write(static_cast<int>('A') + static_cast<int>('S'));	//summary of ASCII codes of 'A' and 'S'
		wait();
	}

	SC_CTOR(Stimulator)
	{
		SC_THREAD(Generator);
		sensitive << CLK.pos();
	}
};
