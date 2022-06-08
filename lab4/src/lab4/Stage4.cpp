#define _CRT_SECURE_NO_WARNINGS
#include "systemc.h"
#include "stage4.h"

void stage4::multdiv()
{
	double a;
	double b;
	a = sum.read();
	b = diff.read();
	if (b == 0)
		b = 5.0;
	prod.write(a * b);
	quot.write(a / b);

}
