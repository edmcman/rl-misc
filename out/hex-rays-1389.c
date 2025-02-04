#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(float *a1, int a2, float a3)
{
float *v4; // [rsp+8h] [rbp-28h]
int v5; // [rsp+1Ch] [rbp-14h]
int v6; // [rsp+20h] [rbp-10h]
int v7; // [rsp+24h] [rbp-Ch]
int v8; // [rsp+28h] [rbp-8h]

v8 = 0;
v6 = 0;
v5 = a2 + 1;
if ( a2 == 1 )
{
v8 = 1;
}
else if ( a1[1] > *a1 )
{
v8 = 1;
}
v4 = a1 - 1;
while ( v5 - v6 > 1 )
{
if ( (a3 < v4[(v5 + v6) >> 1] || v8 != 1) && (v4[(v5 + v6) >> 1] < a3 || v8) )
v5 = (v5 + v6) >> 1;
else
v6 = (v5 + v6) >> 1;
}
if ( *a1 == a3 )
{
v7 = 1;
}
else if ( v4[a2] == a3 )
{
v7 = a2 - 1;
}
else
{
v7 = v6;
}
return (unsigned int)(v7 - 1);
}