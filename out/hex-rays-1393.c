



























# 1 
#include "defs.h"
_DWORD * func0(float *a1, float *a2, _DWORD *a3, float a4, float a5, float a6)
{
_DWORD *result; // rax

*a1 = *a2;
*a2 = *(float *)a3;
*a1 = (float)(*a2 + *a1) * a4;
*a2 = (float)(*a2 + *a1) * a5;
result = a3;
*(float *)a3 = (float)(*a2 + *a1) / a6;
return result;
}