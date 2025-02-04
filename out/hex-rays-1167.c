#include <stdio.h>

#include <stdlib.h>

#include <limits.h>

#include <math.h>

# 1 
#include "defs.h"
_DWORD * func0(char *a1, _DWORD *a2)
{
_DWORD *result; // rax
int v3; // [rsp+1Ch] [rbp-14h]
int v4; // [rsp+20h] [rbp-10h]
int v5; // [rsp+24h] [rbp-Ch]

v5 = 0;
v4 = 1;
while ( *a1 )
{
if ( *a1 > 64 )
v3 = (*a1 & 0x1F) + 9;
else
v3 = *a1 & 0xF;
v5 += v4 * v3;
v4 *= 36;
++a1;
}
result = a2;
*a2 = v5;
return result;
}