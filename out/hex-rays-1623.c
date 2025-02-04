#include <stdio.h>

#include <string.h>

#include <ctype.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, float *a7)
{
float v8; // [rsp+2Ch] [rbp-Ch]
float v9; // [rsp+30h] [rbp-8h]
int i; // [rsp+34h] [rbp-4h]
int j; // [rsp+34h] [rbp-4h]

v9 = 0.0;
v8 = 0.0;
for ( i = 0; i < a5; ++i )
{
v9 = v9 + 1.0;
if ( *(_DWORD *)(4LL * i + a3) == *(_DWORD *)(4LL * i + a1) )
v8 = v8 + 1.0;
}
for ( j = 0; j < a6; ++j )
{
v9 = v9 + 1.0;
if ( *(_DWORD *)(4LL * j + a2) == *(_DWORD *)(4LL * j + a4) )
v8 = v8 + 1.0;
}
*a7 = v8 / v9;
return 1LL;
}