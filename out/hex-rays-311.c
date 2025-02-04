#include <ctype.h>

#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, int a3)
{
int v4; // [rsp+0h] [rbp-20h]
int v5; // [rsp+18h] [rbp-8h]
int i; // [rsp+18h] [rbp-8h]
unsigned int v7; // [rsp+1Ch] [rbp-4h]

v4 = a3;
v5 = 0;
v7 = 0;
if ( a3 < 0 )
{
for ( i = 0; v4 < 0 && i < a2; ++i )
{
v4 += *(__int16 *)(2LL * i + a1);
v7 -= *(__int16 *)(2LL * i + a1);
*(_WORD *)(2LL * i + a1) = 0;
}
v5 = i - 1;
}
if ( v5 < a2 )
{
*(_WORD *)(2LL * v5 + a1) += v4;
v7 += v4;
}
return v7;
}