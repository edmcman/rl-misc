#include <stdio.h>

#include <stdlib.h>

#include <inttypes.h>

#include <string.h>

#include <assert.h>

# 1 
#include "defs.h"
_DWORD * func0(float *a1, float *a2, _DWORD *a3)
{
_DWORD *v3; // rdx
_DWORD *result; // rax

v3 = a3 + 2;
*v3 = 0;
a3[1] = *v3;
*a3 = a3[1];
*(float *)a3 = (float)(a2[2] * a1[1]) + *(float *)a3;
*(float *)a3 = *(float *)a3 - (float)(a2[1] * a1[2]);
*((float *)a3 + 1) = (float)(*a2 * a1[2]) + *((float *)a3 + 1);
*((float *)a3 + 1) = *((float *)a3 + 1) - (float)(a2[2] * *a1);
*((float *)a3 + 2) = (float)(a2[1] * *a1) + *((float *)a3 + 2);
result = a3 + 2;
*((float *)a3 + 2) = *((float *)a3 + 2) - (float)(*a2 * a1[1]);
return result;
}