#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
int * func0(int a1, int *a2, int *a3, int *a4)
{
int v4; // eax
int *result; // rax
int v6; // [rsp+20h] [rbp-10h]
int v7; // [rsp+24h] [rbp-Ch]
int v8; // [rsp+24h] [rbp-Ch]
int v9; // [rsp+2Ch] [rbp-4h]
int v10; // [rsp+2Ch] [rbp-4h]

v9 = (4 * ((4 * (a1 - 1721119) - 1) % 146097 / 4) + 3) % 1461;
v4 = v9 + 4;
if ( v9 + 4 < 0 )
v4 = v9 + 7;
v7 = (5 * (v4 >> 2) - 3) / 153;
v10 = ((5 * (v4 >> 2) - 3) % 153 + 5) / 5;
v6 = 100 * ((4 * (a1 - 1721119) - 1) / 146097) + (4 * ((4 * (a1 - 1721119) - 1) % 146097 / 4) + 3) / 1461;
if ( v7 > 9 )
{
v8 = v7 - 9;
++v6;
}
else
{
v8 = v7 + 3;
}
*a2 = v6;
*a3 = v8;
result = a4;
*a4 = v10;
return result;
}