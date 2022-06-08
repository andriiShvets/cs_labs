#define _CRT_SECURE_NO_WARNINGS
#include "systemc.h"
#include "display.h"
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

void display::print()
{
	printf("powr= %f\n\n", powr.read());
}
