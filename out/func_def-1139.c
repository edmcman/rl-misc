#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
void temp_init(double temps[])
{
    int t;

    for (t = 0; t < 10; t++)
    {
        double dT = 5.0/10;
        temps[t] = 5.0 -t*dT;
    }
}