#include <stdio.h>

#include <strings.h>

#include <stdlib.h>

# 1 
#include "defs.h"
int * func0(int a1, int a2, _DWORD *a3, int *a4)
{
int v4; // eax
int *result; // rax
int v6; // [rsp+1Ch] [rbp-Ch]
int v7; // [rsp+24h] [rbp-4h]
int v8; // [rsp+24h] [rbp-4h]

v6 = 188 * (a1 - 137) + a2 - 63 != a2 > 126;
v7 = -157 * (v6 % 157) + v6 + 63;
if ( v7 <= 126 )
v4 = 0;
else
v4 = 34;
v8 = v4 + v7;
*a3 = v6 % 157 + 161;
result = a4;
*a4 = v8;
return result;
}