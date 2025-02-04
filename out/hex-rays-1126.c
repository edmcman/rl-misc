#include <math.h>

# 1 
#include "defs.h"
__int64  func0(double *a1, double *a2, double *a3)
{
__int64 v3; // xmm0_8
__int64 result; // rax
__int64 v5; // xmm0_8
double v6; // [rsp+18h] [rbp-20h]
double v7; // [rsp+20h] [rbp-18h]
double v8; // [rsp+28h] [rbp-10h]

v6 = (a2[1] - a2[2]) * (a1[3] - a1[2]);
v7 = (a2[3] - a2[2]) * (a1[2] - a1[1]);
v8 = v6 + v7;
if ( v6 + v7 == 0.0 )
{
if ( a2[3] <= a2[1] )
v3 = *((_QWORD *)a1 + 3);
else
v3 = *((_QWORD *)a1 + 1);
*(_QWORD *)a3 = v3;
result = 0xFFFFFFFFLL;
}
else if ( v8 >= 0.0 )
{
*a3 = 0.5 * ((a1[1] + a1[2]) * v7 + (a1[2] + a1[3]) * v6) / v8;
result = 0LL;
}
else
{
if ( a2[3] <= a2[1] )
v5 = *((_QWORD *)a1 + 3);
else
v5 = *((_QWORD *)a1 + 1);
*(_QWORD *)a3 = v5;
result = 4294967294LL;
}
return result;
}