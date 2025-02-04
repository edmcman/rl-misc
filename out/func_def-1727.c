#include <math.h>

#include <stdlib.h>

# 1 
void initializeStatesAndConstants(double *states, double *variables)
{
    states[0] = 0.0;
    variables[0] = 1.0;
    variables[1] = 2.0;
    variables[2] = 3.0;
    variables[3] = 4.0;
    variables[4] = 5.0;
    variables[5] = 6.0;
    variables[6] = 7.0;
    variables[175] = 123.0;
    variables[176] = 123.456789;
    variables[177] = 123.0e99;
    variables[178] = 123.456789e99;
    variables[180] = 1.0;
    variables[181] = 0.0;
    variables[182] = 2.71828182845905;
    variables[183] = 3.14159265358979;
    variables[184] = INFINITY;
    variables[185] = NAN;
}