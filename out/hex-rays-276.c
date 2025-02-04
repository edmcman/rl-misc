#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int a1, __int64 a2)
{
unsigned int v3; // [rsp+Ch] [rbp-14h]
unsigned int v4; // [rsp+14h] [rbp-Ch]
unsigned int v5; // [rsp+14h] [rbp-Ch]
int v6; // [rsp+18h] [rbp-8h]
unsigned int v7; // [rsp+18h] [rbp-8h]
int i; // [rsp+1Ch] [rbp-4h]

v3 = a1;
v4 = 1;
v6 = 0;
while ( v4 <= a1 )
{
v4 *= 2;
++v6;
}
v5 = v4 >> 1;
v7 = v6 - 1;
for ( i = v7; i >= 0; --i )
{
if ( (int)(v3 - v5) < 0 )
{
*(_DWORD *)(4LL * i + a2) = 0;
}
else
{
v3 -= v5;
*(_DWORD *)(4LL * i + a2) = 1;
}
v5 >>= 1;
}
return v7;
}