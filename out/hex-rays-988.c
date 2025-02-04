
# 1 
#include "defs.h"
float  func0(int a1, __int64 a2, float *a3)
{
int v3; // ebx

v3 = (int)(float)(a3[1] * (float)((float)a1 / *a3));
if ( v3 < 0 )
return *(double *)a2;
if ( (float)v3 >= a3[1] )
v3 = (int)a3[1];
return *(double *)(8LL * v3 + a2);
}