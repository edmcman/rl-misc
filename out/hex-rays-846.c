



# 1 
#include "defs.h"
__int64  func0(double *a1, double *a2, int a3, double *a4, double *a5, double *a6, double a7, double a8)
{
double v8; // xmm0_8
__int64 result; // rax
unsigned int i; // [rsp+44h] [rbp-Ch]
double v12; // [rsp+48h] [rbp-8h]

*a2 = 0.0;
for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= a3 )
break;
if ( i )
{
if ( i == a3 - 1 )
v8 = a4[i] * ((a1[i] + 273.15) * a7 * (a6[i] + 1000.0) * a5[i]) / 2.0;
else
v8 = (a4[(int)i + 1] + a4[i]) * ((a1[i] + 273.15) * a7 * (a6[i] + 1000.0) * a5[i]) / 2.0;
v12 = v8;
}
else
{
v12 = (a4[1] + *a4) * ((*a1 + 273.15) * a8 * (*a6 + 1000.0) * *a5) / 2.0;
}
*a2 = *a2 + v12;
}
return result;
}