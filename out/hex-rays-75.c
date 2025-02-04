#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, unsigned int a2, int a3)
{
__int64 result; // rax
unsigned int v4; // [rsp+14h] [rbp-Ch]
unsigned int v5; // [rsp+18h] [rbp-8h]

v4 = 0;
v5 = a3 - 1;
while ( v5 > v4 )
{
if ( a2 <= *(_DWORD *)(4LL * ((v4 + v5) >> 1) + a1) )
v5 = (v4 + v5) >> 1;
else
v4 = ((v4 + v5) >> 1) + 1;
}
result = a2;
*(_DWORD *)(a1 + 4LL * v5) = a2;
return result;
}