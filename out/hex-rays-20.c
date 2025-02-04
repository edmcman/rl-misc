
# 1 
#include "defs.h"
float  func0(__int64 a1, _DWORD *a2, float a3)
{
int v3; // ebx
float result; // xmm0_4

v3 = *a2 - (int)((float)((float)(int)a2[1] * a3) + 0.5);
if ( v3 >= 0 || (v3 += a2[2], v3 >= 0) )
result = *(float *)(4LL * v3 + a1);
else
result = 0.0;
return result;
}