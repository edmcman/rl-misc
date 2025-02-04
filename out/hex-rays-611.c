#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, int *a3)
{
int v4; // [rsp+18h] [rbp-10h]
unsigned int v5; // [rsp+1Ch] [rbp-Ch]
int i; // [rsp+20h] [rbp-8h]
int v7; // [rsp+24h] [rbp-4h]
int v8; // [rsp+24h] [rbp-4h]
signed int v9; // [rsp+24h] [rbp-4h]

v4 = 1;
v5 = 0;
for ( i = 0; i < a2; ++i )
{
v7 = *(char *)(i + a1);
if ( v7 <= 47 || v7 > 57 )
{
v9 = v7 & 0xFFFFFFEB;
if ( v9 <= 64 || v9 > 70 )
{
v4 = 0;
break;
}
v8 = v9 - 55;
}
else
{
v8 = v7 - 48;
}
v5 = 16 * v5 + v8;
}
if ( a3 )
*a3 = v4;
return v5;
}