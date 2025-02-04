
# 1 
#include "defs.h"
_DWORD * func0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
int v4; // eax
_DWORD *result; // rax
int v6; // [rsp+20h] [rbp-10h]
int v7; // [rsp+20h] [rbp-10h]
int v8; // [rsp+24h] [rbp-Ch]
int v9; // [rsp+28h] [rbp-8h]
int v10; // [rsp+2Ch] [rbp-4h]

v8 = 4 * (a1 + 68569) / 146097;
v4 = 146097 * v8 + 3;
if ( v4 < 0 )
v4 = 146097 * v8 + 6;
v6 = a1 + 68569 - (v4 >> 2);
v9 = 4000 * (v6 + 1) / 1461001;
v7 = v6 - 1461 * v9 / 4 + 31;
v10 = 80 * v7 / 2447;
*a2 = v7 + 2447 * v10 / -80;
*a3 = v10 + 2 - 12 * (v10 / 11);
result = a4;
*a4 = v10 / 11 + v9 + 100 * (v8 - 49);
return result;
}