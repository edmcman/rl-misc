#include <assert.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
float  func0(float *a1, int a2, float a3)
{
int v4; // [rsp+10h] [rbp-10h]
int v5; // [rsp+14h] [rbp-Ch]
float v6; // [rsp+18h] [rbp-8h]
int v7; // [rsp+1Ch] [rbp-4h]

if ( *a1 - 0.00001 > a3 )
return -1.0;
if ( a2 == 1 )
return 0.0;
if ( a3 > a1[a2 - 1] + 0.00001 )
return (float)(a2 + 1);
v4 = 0;
v5 = a2 - 1;
while ( v4 <= v5 )
{
v7 = (v4 + v5) / 2;
if ( a1[v7] <= a3 )
{
if ( a3 <= a1[v7] )
return (float)v7;
v4 = v7 + 1;
}
else
{
v5 = v7 - 1;
}
}
v6 = (float)(a3 - a1[v5]) / (float)(a1[v4] - a1[v5]);
return (float)((float)v4 * v6) + (double)v5 * (1.0 - v6);
}