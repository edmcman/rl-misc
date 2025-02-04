#include <stdio.h>

#include <stddef.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, unsigned int a3, int a4, int a5, _DWORD *a6)
{
__int64 result; // rax
unsigned int v7; // [rsp+10h] [rbp-20h]
unsigned int v8; // [rsp+24h] [rbp-Ch]
int v9; // [rsp+28h] [rbp-8h]
int v10; // [rsp+2Ch] [rbp-4h]

v7 = a3;
v10 = 0;
v8 = a3;
v9 = *(_DWORD *)(4LL * (int)a3 + a1);
while ( v9 < a5 )
{
if ( v9 >= a4 )
++v10;
else
++v7;
if ( (int)++v8 > a2 )
v9 = a5 + 1;
else
v9 = *(_DWORD *)(4LL * (int)v8 + a1);
}
*a6 = v10;
result = v7;
a6[1] = v7;
return result;
}