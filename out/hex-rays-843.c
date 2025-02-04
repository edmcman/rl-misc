#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax
double v3; // [rsp+10h] [rbp-20h]
double v4; // [rsp+18h] [rbp-18h]
double v5; // [rsp+20h] [rbp-10h]
double v6; // [rsp+28h] [rbp-8h]

v3 = *a2 / 2.0;
v4 = a2[1] / 2.0;
v5 = a2[2] / 2.0;
v6 = a2[3] / 2.0;
*a1 = v4;
a1[1] = v5;
a1[2] = v6;
a1[3] = -v3;
a1[4] = -v6;
a1[5] = v5;
a1[6] = v6;
a1[7] = -v3;
a1[8] = -v4;
a1[9] = -v5;
a1[10] = v4;
result = a1 + 9;
a1[11] = -v3;
return result;
}