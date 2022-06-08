#define _CRT_SECURE_NO_WARNINGS
#include "systemc.h"
#include "numgen.h"

void numgen::generate()
{
	double a = 27;//варіант
	double b = 148;//A+S
	out1.write(a);
	out2.write(b);
}

