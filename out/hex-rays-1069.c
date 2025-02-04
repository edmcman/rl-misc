#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
unsigned __int64  func0(int *a1, _DWORD *a2, _DWORD *a3, int a4)
{
unsigned __int64 result; // rax

if ( a4 <= 0 )
{
*a1 = *a3 * *a2;
*a1 += a3[1] * a2[1];
*a1 += a3[2] * a2[2];
a1[1] = *a3 * a2[3];
a1[1] += a3[1] * a2[4];
a1[1] += a3[2] * a2[5];
a1[2] = *a3 * a2[6];
a1[2] += a3[1] * a2[7];
result = (unsigned __int64)(a1 + 2);
a1[2] += a2[8] * a3[2];
}
else
{
*a1 = *a3 * *a2;
*a1 += a3[1] * a2[1];
*a1 += a3[2] * a2[2];
*a1 %= a4;
if ( *a1 < 0 )
*a1 += a4;
a1[1] = *a3 * a2[3];
a1[1] += a3[1] * a2[4];
a1[1] += a3[2] * a2[5];
a1[1] %= a4;
if ( a1[1] < 0 )
a1[1] += a4;
a1[2] = *a3 * a2[6];
a1[2] += a3[1] * a2[7];
a1[2] += a2[8] * a3[2];
a1[2] %= a4;
result = (unsigned int)a1[2];
if ( (result & 0x80000000) != 0LL )
{
result = (unsigned __int64)(a1 + 2);
a1[2] += a4;
}
}
return result;
}