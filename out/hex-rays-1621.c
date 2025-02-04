#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <ctype.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, float a2, float a3)
{
__int64 result; // rax

*(float *)a1 = a2;
*(_DWORD *)(a1 + 4) = 0;
*(_DWORD *)(a1 + 8) = 0;
*(float *)(a1 + 12) = a3;
*(_DWORD *)(a1 + 16) = 0;
result = a1 + 20;
*(_DWORD *)(a1 + 20) = 0;
return result;
}