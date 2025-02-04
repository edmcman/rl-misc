
# 1 
#include "defs.h"
double * func0(double *a1, double a2, double a3, double a4, double a5)
{
double *result; // rax

*a1 = 1.0 / ((a2 - a3) * (a2 - a4) * (a2 - a5));
a1[1] = 1.0 / ((a3 - a2) * (a3 - a4) * (a3 - a5));
a1[2] = 1.0 / ((a4 - a2) * (a4 - a3) * (a4 - a5));
result = a1 + 3;
a1[3] = 1.0 / ((a5 - a2) * (a5 - a3) * (a5 - a4));
return result;
}