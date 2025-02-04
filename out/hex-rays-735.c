#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <assert.h>

#include <ctype.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(int a1, int a2, int a3, _DWORD *a4)
{
unsigned int v4; // eax
unsigned int v5; // eax
unsigned int v6; // eax
unsigned int v7; // eax
unsigned int v8; // eax
unsigned int v9; // eax
unsigned int v10; // eax
unsigned int v11; // eax
unsigned int v12; // eax
unsigned int v13; // eax
unsigned int v15; // [rsp+1Ch] [rbp-Ch]
int v16; // [rsp+20h] [rbp-8h]
int v17; // [rsp+24h] [rbp-4h]

v15 = 0;
v17 = a3 / 2 / a1;
v16 = a3 / 2 % a1;
if ( (a3 & 1) != 0 )
{
if ( v16 > 0 )
{
v15 = 1;
*a4 = a3 - 2;
}
if ( v17 > 0 )
{
v4 = v15++;
a4[v4] = a3 - 2 * a1 - 1;
}
if ( a2 > v17 + 1 )
{
v5 = v15++;
a4[v5] = a3 - 1;
}
if ( a1 > v16 + 2 )
{
v6 = v15++;
a4[v6] = a3 + 2;
}
if ( v17 > 0 )
{
v7 = v15++;
a4[v7] = a3 - 2 * a1 + 1;
}
if ( a2 > v17 + 1 )
{
v8 = v15++;
a4[v8] = a3 + 1;
}
}
else
{
if ( v17 > 0 )
{
v15 = 1;
*a4 = a3 - 2 * a1;
}
if ( v16 > 0 )
{
v9 = v15++;
a4[v9] = a3 - 1;
}
if ( a1 > v16 + 1 )
{
v10 = v15++;
a4[v10] = a3 + 1;
}
if ( a2 > v17 + 2 )
{
v11 = v15++;
a4[v11] = 2 * a1 + a3;
}
if ( v16 > 0 )
{
v12 = v15++;
a4[v12] = a3 - 2 + 2 * a1 + 1;
}
if ( a1 > v16 + 1 )
{
v13 = v15++;
a4[v13] = 2 * a1 + a3 + 1;
}
}
return v15;
}