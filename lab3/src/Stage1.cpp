#include "systemc.h"
#include "stage1.h"
//Definition of addsub method
void stage1::addsub()
{
	double a;
	double b;
	a = in1.read();
	b = in2.read();
	sum.write(a + b);
	diff.write(a - b);
} // end of addsub method
