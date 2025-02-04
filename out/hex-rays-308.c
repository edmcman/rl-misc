#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3)
{
double v4; // [rsp+28h] [rbp-28h]
double v5; // [rsp+30h] [rbp-20h]
double v6; // [rsp+38h] [rbp-18h]

v4 = a2[3] * a1[2] + *a1 * a2[1] + a1[1] * *a2 - a2[2] * a1[3];
v5 = a2[1] * a1[3] + *a1 * a2[2] + a1[2] * *a2 - a2[3] * a1[1];
v6 = a2[2] * a1[1] + *a1 * a2[3] + a1[3] * *a2 - a2[1] * a1[2];
*a3 = *a2 * *a1 - (a2[3] * a1[3] + a1[1] * a2[1] + a2[2] * a1[2]);
a3[1] = v4;
a3[2] = v5;
a3[3] = v6;
return a3;
}