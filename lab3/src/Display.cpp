#include "systemc.h"
#include "display.h"
#include <stdio.h>
//Definition of print_result method 
void display::print_result()
{
	printf("Result = %f\n", in.read());
} // end of print method
