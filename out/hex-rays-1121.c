#include <float.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax
double v3; // xmm0_8
double v4; // [rsp+18h] [rbp-8h]

v4 = a1[5] * (a1[6] * a1[1])
+ *a1 * a1[4] * a1[8]
+ a1[2] * (a1[3] * a1[7])
- (a1[2] * (a1[6] * a1[4])
+ *a1 * a1[7] * a1[5]
+ a1[8] * (a1[3] * a1[1]));
if ( v4 == 0.0 )
{
*a2 = *a1;
a2[3] = a1[1];
a2[6] = a1[2];
a2[1] = a1[3];
a2[4] = a1[4];
a2[7] = a1[5];
a2[2] = a1[6];
a2[5] = a1[7];
result = a1;
v3 = a1[8];
}
else
{
*a2 = (a1[8] * a1[4] - a1[7] * a1[5]) / v4;
a2[3] = (a1[6] * a1[5] - a1[8] * a1[3]) / v4;
a2[6] = (a1[7] * a1[3] - a1[6] * a1[4]) / v4;
a2[1] = (a1[7] * a1[2] - a1[8] * a1[1]) / v4;
a2[4] = (a1[8] * *a1 - a1[6] * a1[2]) / v4;
a2[7] = (a1[6] * a1[1] - a1[7] * *a1) / v4;
a2[2] = (a1[5] * a1[1] - a1[4] * a1[2]) / v4;
a2[5] = (a1[3] * a1[2] - a1[5] * *a1) / v4;
result = a2 + 8;
v3 = (a1[4] * *a1 - a1[3] * a1[1]) / v4;
}
a2[8] = v3;
return result;
}