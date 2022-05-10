#include "systemc.h"
#include "numgen.h"

// definition of the `generate' method
void numgen::generate()
{
	static double a = 134.56;
	static double b = 98.24;
	a -= 1.5;
	b -= 2.8;
	out1.write(a);
	out2.write(b);

} // end of `generate' method
