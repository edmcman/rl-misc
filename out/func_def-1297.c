#include <math.h>

#include <stdlib.h>

# 1 
void initializeStatesAndConstants(double *states, double *variables)
{
    states[0] = 0.01;
    states[1] = 0.8;
    states[2] = 0.01;
    states[3] = -87.0;
    variables[0] = -60.0;
    variables[1] = 0.075;
    variables[2] = 12.0;
    variables[3] = 40.0;
    variables[4] = 400.0;
}