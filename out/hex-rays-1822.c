#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <math.h>

#include <unistd.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3, int a4)
{
int v4; // eax
unsigned int v6; // [rsp+20h] [rbp-8h]
int i; // [rsp+24h] [rbp-4h]

v6 = 0;
for ( i = 0; i < a3; ++i )
{
if ( a4 != *(char *)(i + a2) )
{
v4 = v6++;
*(_BYTE *)(a1 + v4) = *(_BYTE *)(i + a1);
}
}
*(_BYTE *)((int)v6 + a1) = 0;
return v6;
}