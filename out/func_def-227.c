#include <math.h>

#include <stdlib.h>

# 1 
void computeRates(double voi, double *states, double *rates, double *variables)
{
    rates[0] = 1.0;
    rates[1] = variables[0];
}