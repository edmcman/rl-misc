#include <stdlib.h>

#include <unistd.h>

#include <float.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, float a3)
{
float v4; // [rsp+0h] [rbp-30h]
int v5; // [rsp+1Ch] [rbp-14h]
float v6; // [rsp+20h] [rbp-10h]
float v7; // [rsp+24h] [rbp-Ch]

v4 = a3;
if ( a3 < 0.0 )
v4 = 0.0;
if ( v4 > 100.0 )
v4 = 100.0;
v5 = (int)v4;
if ( (int)v4 > 99 )
v5 = 99;
if ( v5 > 98 )
v6 = 256.0;
else
v6 = (float)*(unsigned __int8 *)(v5 + 1LL + a1);
v7 = (float)*(unsigned __int8 *)(v5 + a1);
return (unsigned int)(int)(float)((float)a2
* (float)((float)((float)((float)(v4 - (float)v5) * (float)(v6 - v7)) + v7)
* 0.00390625));
}