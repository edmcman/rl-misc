#include <stdlib.h>

#include <stdint.h>

#include <string.h>

#include <math.h>

#include <limits.h>

#include <pthread.h>

# 1 
#include "defs.h"
__int64  func0(int a1, int a2, signed int a3, _DWORD *a4)
{
__int64 result; // rax

if ( a1 < a3 && a2 < a3 )
{
if ( a4 )
*a4 = abs32(a1 - a2);
result = (unsigned int)((a1 + a2) / 2);
}
else
{
if ( a4 )
*a4 = 10000000;
result = (unsigned int)a3;
}
return result;
}