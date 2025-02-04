#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, int a2, double a3)
{
_BYTE *v3; // rax
_BYTE *v4; // rax
_BYTE *v5; // rax
_BYTE *v6; // rax
_BYTE *v7; // rax
int v10; // [rsp+0h] [rbp-44h]
double v11; // [rsp+Ch] [rbp-38h]
double v12; // [rsp+Ch] [rbp-38h]
double v13; // [rsp+Ch] [rbp-38h]
char v14; // [rsp+1Bh] [rbp-29h]
char v15; // [rsp+1Bh] [rbp-29h]
_BYTE *v16; // [rsp+1Ch] [rbp-28h]
_BYTE *v17; // [rsp+1Ch] [rbp-28h]
_BYTE *v18; // [rsp+24h] [rbp-20h]
__int64 v19; // [rsp+2Ch] [rbp-18h]
_BYTE *i; // [rsp+34h] [rbp-10h]
_BYTE *v21; // [rsp+3Ch] [rbp-8h]

v11 = a3;
v10 = a2;
v16 = a1;
if ( a2 > 13 )
v10 = 13;
if ( a3 < 0.0 )
{
v11 = -a3;
v16 = a1 + 1;
*a1 = 45;
}
if ( v10 < 0 )
{
if ( v11 >= 1.0 )
{
if ( v11 >= 10.0 )
{
if ( v11 >= 100.0 )
{
if ( v11 >= 1000.0 )
{
if ( v11 >= 10000.0 )
v10 = v11 < 100000.0;
else
v10 = 2;
}
else
{
v10 = 3;
}
}
else
{
v10 = 4;
}
}
else
{
v10 = 5;
}
}
else
{
v10 = 6;
}
}
v19 = (unsigned int)(int)v11;
v12 = v11 - (double)(int)v11;
if ( v19 )
{
v18 = v16;
while ( v19 )
{
v4 = v18++;
*v4 = (char)v19 % 10 + 48;
v19 /= 10LL;
}
v21 = v18;
while ( v18 > v16 )
{
v14 = *--v18;
*v18 = *v16;
v5 = v16++;
*v5 = v14;
}
v17 = v21;
}
else
{
v3 = v16;
v17 = v16 + 1;
*v3 = 48;
}
if ( v10 )
{
v6 = v17++;
*v6 = 46;
while ( v10-- )
{
v13 = 10.0 * v12;
v15 = (int)v13;
v7 = v17++;
*v7 = v15 + 48;
v12 = v13 - (double)v15;
}
}
*v17 = 0;
for ( i = v17 - 1; *i != 46 && *i == 48; --i )
*i = 0;
if ( !i[1] && *i == 46 )
i[1] = 48;
return a1;
}