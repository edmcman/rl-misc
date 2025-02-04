
# 1 
#include "defs.h"
float  func0(int a1, __int64 a2, float *a3)
{
double v4; // xmm0_8
float v5; // [rsp+24h] [rbp-14h]

v5 = a3[1] * (float)((float)a1 / *a3);
if ( v5 < 0.0 )
return *(double *)a2;
if ( v5 < a3[1] )
v4 = (*(double *)(8LL * ((int)v5 + 1) + a2) - *(double *)(8LL * (int)v5 + a2)) * (float)(v5 - (float)(int)v5)
+ *(double *)(8LL * (int)v5 + a2);
else
v4 = *(double *)(8LL * (int)a3[1] + a2);
return v4;
}