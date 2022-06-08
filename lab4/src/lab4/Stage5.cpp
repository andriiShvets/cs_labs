#define _CRT_SECURE_NO_WARNINGS
#include "systemc.h"
#include "stage5.h"
void stage5::power()
{
	double a;
	double b;
	double c;

	a = prod.read();
	b = quot.read();
	c = (a > 0 && b > 0) ? pow(a, b) : 0.;
	powr.write(c);

} // end of power method
