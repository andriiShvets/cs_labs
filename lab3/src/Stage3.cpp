#include "systemc.h"
#include "stage3.h"
void stage3::power()
{
	double a;
	double b;
	double c;

	a = prod.read();
	b = quot.read();
	c = (a > 0 && b > 0) ? pow(a, b) : 0.;
	powr.write(c);

} // end of power method
