#include <time.h>

#include <math.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(float *a1, int a2, float a3)
{
__int64 result; // rax
unsigned int v4; // [rsp+1Ch] [rbp-14h]
int v5; // [rsp+20h] [rbp-10h]
int v6; // [rsp+24h] [rbp-Ch]

v4 = 0;
v5 = a2 - 1;
if ( a3 > *a1 )
return 0xFFFFFFFFLL;
if ( a1[a2 - 1] > a3 )
return 4294967294LL;
while ( 1 )
{
result = v4;
if ( (int)v4 >= v5 )
break;
v6 = (int)(v4 + v5) / 2;
if ( a1[v6] == a3 )
return (unsigned int)v6;
if ( v5 == v6 || v4 == v6 )
return v4;
if ( a3 <= a1[v6] )
{
if ( a1[v6] > a3 )
v4 = (int)(v4 + v5) / 2;
}
else
{
v5 = (int)(v4 + v5) / 2;
}
}
return result;
}