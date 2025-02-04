
# 1 
#include "defs.h"
double * func0(double *a1, double *a2)
{
double *result; // rax
double v3; // [rsp+20h] [rbp-60h]
double v4; // [rsp+28h] [rbp-58h]
double v5; // [rsp+30h] [rbp-50h]
double v6; // [rsp+38h] [rbp-48h]
double v7; // [rsp+40h] [rbp-40h]
double v8; // [rsp+48h] [rbp-38h]

v3 = a1[1];
v4 = a1[2];
v5 = a1[3];
v6 = *a1 * v3;
v7 = *a1 * v4;
v8 = *a1 * v5;
*a2 = 1.0 - (v4 * v4 + v5 * v5 + v4 * v4 + v5 * v5);
a2[1] = v3 * v4 + v8 + v3 * v4 + v8;
a2[2] = v3 * v5 - v7 + v3 * v5 - v7;
a2[3] = v3 * v4 - v8 + v3 * v4 - v8;
a2[4] = 1.0 - (v3 * v3 + v5 * v5 + v3 * v3 + v5 * v5);
a2[5] = v6 + v4 * v5 + v6 + v4 * v5;
a2[6] = v7 + v3 * v5 + v7 + v3 * v5;
a2[7] = v4 * v5 - v6 + v4 * v5 - v6;
result = a2 + 6;
a2[8] = 1.0 - (v3 * v3 + v4 * v4 + v3 * v3 + v4 * v4);
return result;
}