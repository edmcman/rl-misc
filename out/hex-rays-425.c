#include <math.h>

# 1 
#include "defs.h"
double * func0(__int64 a1, double *a2, double *a3, double *a4)
{
double *result; // rax
int i; // [rsp+24h] [rbp-1Ch]
double v6; // [rsp+28h] [rbp-18h]
double v7; // [rsp+30h] [rbp-10h]
double v8; // [rsp+38h] [rbp-8h]

v6 = *a2;
v7 = a2[1];
v8 = a2[2];
*a4 = a3[6] * v8 + *a3 * *a2 + a3[3] * v7;
a4[1] = a3[7] * v8 + a3[1] * v6 + a3[4] * v7;
result = a4 + 2;
a4[2] = a3[8] * v8 + a3[2] * v6 + a3[5] * v7;
for ( i = 0; i <= 2; ++i )
{
result = &a4[i];
*result = *(double *)(8LL * i + a1) + *result;
}
return result;
}