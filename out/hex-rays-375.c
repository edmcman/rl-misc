#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <stdint.h>

#include <stdbool.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, unsigned int *a3)
{
_DWORD *result; // rax
unsigned int v4; // [rsp+24h] [rbp-4h]

v4 = *a1 + *a2;
*a3 = v4 & 0x7FFFFFFF;
result = a3 + 1;
a3[1] = (a1[1] + (v4 >> 31) + a2[1]) & 0x7FFFFFFF;
return result;
}