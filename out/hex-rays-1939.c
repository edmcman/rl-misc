#include <string.h>

#include <stdlib.h>

#include <stdint.h>

# 1 
#include "defs.h"
_DWORD * func0(double *a1, __int64 a2, float *a3)
{
float v3; // xmm1_4
float v4; // xmm1_4
double *v5; // rax
float v6; // xmm1_4
_DWORD *result; // rax
__int64 v10; // [rsp+20h] [rbp-8h]

*a3 = 0.0;
a3[1] = 0.0;
a3[2] = 0.0;
v10 = 3 * a2;
while ( v10-- )
{
v3 = *a1;
*a3 = *a3 + v3;
v4 = a1[1];
a3[1] = a3[1] + v4;
v5 = a1 + 2;
a1 += 3;
v6 = *v5;
a3[2] = a3[2] + v6;
}
*a3 = *a3 / (float)(int)a2;
a3[1] = a3[1] / (float)(int)a2;
result = a3 + 2;
a3[2] = a3[2] / (float)(int)a2;
return result;
}