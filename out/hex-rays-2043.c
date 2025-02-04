


# 1 
#include "defs.h"
__int64  func0(double *a1, double *a2, double *a3, double a4, double a5)
{
double v6; // [rsp+30h] [rbp-18h]
double v7; // [rsp+38h] [rbp-10h]
double v8; // [rsp+40h] [rbp-8h]

v6 = a1[3] * (a4 - *a1);
v7 = a1[3] * (a5 - a1[1]);
if ( v6 == 0.0 && v7 == 0.0 )
{
*a2 = *a1;
*a3 = a1[1];
}
else
{
v8 = 1.0 - a1[2] / 100000000.0 * (v7 * v7 + v6 * v6);
*a2 = *a1 + v6 * v8;
*a3 = a1[1] + v7 * v8;
}
return 0LL;
}