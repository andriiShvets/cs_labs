#pragma once
#include "systemc.h"
#include <iomanip>

SC_MODULE(Monitor)
{
	sc_in<int> X, Y;
	sc_in<int> Sum, F1, o;
	sc_in<int> R1, R2;
	sc_in<bool> CLK;

	void monitor()
	{
		cout << std::setw(15) << "Time";
		cout << std::setw(7) << "X";
		cout << std::setw(7) << "Y";
		cout << std::setw(7) << "Sum";
		cout << std::setw(7) << "F1";
		cout << std::setw(7) << "R1";
		cout << std::setw(7) << "R2";
		cout << std::setw(7) << "out" << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << std::setw(15) << sc_time_stamp();
			cout << std::setw(7) << X.read();
			cout << std::setw(7) << Y.read();
			cout << std::setw(7) << Sum.read();
			cout << std::setw(7) << F1.read();
			cout << std::setw(7) << R1.read();
			cout << std::setw(7) << R2.read();
			cout << std::setw(7) << o.read() << endl;
			wait();
		}
		sc_stop();
	}

	SC_CTOR(Monitor)
	{
		SC_THREAD(monitor);
		sensitive << CLK.pos();
	}
};
