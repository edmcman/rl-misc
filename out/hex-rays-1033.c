#include <math.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3)
{
double *result; // rax
int i; // [rsp+1Ch] [rbp-1Ch]
double v5; // [rsp+20h] [rbp-18h]
double v6; // [rsp+20h] [rbp-18h]
double v7; // [rsp+28h] [rbp-10h]
double v8; // [rsp+28h] [rbp-10h]
double v9; // [rsp+30h] [rbp-8h]
double v10; // [rsp+30h] [rbp-8h]

v5 = *a3;
v7 = a3[1];
v9 = a3[2];
a1[6] = a1[3] * v9 + *a1 * v7 + a1[6];
a1[7] = a1[4] * v9 + a1[1] * v7 + a1[7];
a1[8] = a1[5] * v9 + a1[2] * v7 + a1[8];
*a1 = *a1 * v5;
a1[1] = a1[1] * v5;
a1[2] = a1[2] * v5;
a1[3] = a1[3] * v5;
a1[4] = a1[4] * v5;
a1[5] = a1[5] * v5;
v6 = 1.0 / *a2;
v8 = -a2[1] * v6;
result = a2 + 2;
v10 = -a2[2] * v6;
for ( i = 0; i <= 8; i += 3 )
{
a1[i] = a1[i + 2] * v8 + a1[i] * v6;
result = &a1[i + 1];
*result = a1[i + 2] * v10 + *result * v6;
}
return result;
}