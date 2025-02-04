#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <unistd.h>

#include <stdint.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, float a2)
{
int v3; // [rsp+14h] [rbp-Ch]
int v4; // [rsp+18h] [rbp-8h]
int v5; // [rsp+1Ch] [rbp-4h]

v3 = 0;
v4 = 120;
while ( v3 <= v4 )
{
v5 = (v4 - v3) / 2 + v3;
if ( v5 == v3 )
return (unsigned int)(v5 + 1);
if ( *(float *)(4LL * v5 + a1) == a2 )
return (unsigned int)v5;
if ( a2 <= *(float *)(4LL * v5 + a1) )
v4 = v5 - 1;
else
v3 = v5 + 1;
}
return (unsigned int)v3;
}