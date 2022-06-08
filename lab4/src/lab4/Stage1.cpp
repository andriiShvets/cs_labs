#define _CRT_SECURE_NO_WARNINGS
#include "systemc.h"
#include "stage1.h"
#include <math.h>

void stage1::user_funk1()
{
	double x_val = x.read();
	double y_val = y.read();
	o1.write(x_val + !y_val);
	//double temp1 = ((x_val + y_val) / 2.0);
	//double temp2 = ((int)x_val >> 2);
	if (y_val != 0) {
		o2.write(x_val + y_val);
	}
		
}
