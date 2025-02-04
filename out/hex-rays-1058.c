#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(float *a1, int *a2, int *a3, int *a4, int *a5, float a6)
{
int v6; // er14
unsigned int v7; // er15
int v8; // er13
int v9; // ebx
int v10; // er12
float v12; // [rsp+2Ch] [rbp-3Ch]
float v13; // [rsp+3Ch] [rbp-2Ch]
float v14; // [rsp+3Ch] [rbp-2Ch]

v12 = a6;
v6 = (int)a6;
if ( a6 >= 0.0 )
{
v7 = 1;
v13 = 0.0;
}
else
{
v6 = -v6;
LODWORD(v12) = LODWORD(a6) ^ 0x80000000;
v7 = -1;
v13 = 0.5;
}
v8 = (int)(10.0 * v12) % 10;
v9 = (int)(100.0 * v12) % 10;
v10 = (int)(1000.0 * v12) % 10;
if ( v6 <= 99 )
{
if ( v6 <= 9 )
{
v14 = v13 + 4.5;
if ( !v10 )
{
v14 = v14 - 1.0;
if ( !v9 )
{
v14 = v14 - 1.0;
if ( !v8 )
v14 = v14 - 1.0;
}
}
}
else
{
v10 = 0;
v14 = v13 + 4.5;
if ( !v9 )
{
v14 = v14 - 1.0;
if ( !v8 )
v14 = v14 - 1.0;
}
}
}
else
{
v10 = 0;
v9 = 0;
v8 = 0;
v14 = v13 + 3.0;
}
*a2 = v6;
*a3 = v8;
*a4 = v9;
*a5 = v10;
if ( v14 >= 2.0 )
*a1 = v14;
else
*a1 = 2.0;
return v7;
}