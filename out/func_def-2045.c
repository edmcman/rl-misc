#include <stdio.h>

#include <math.h>

# 1 
void invert2x2(double *y, double *x)
{
   double s = x[0] * x[3] - x[1] * x[2];

   y[0] = x[3] / s;
   y[1] = -x[1] / s;
   y[2] = -x[2] / s;
   y[3] = x[0] / s;
}