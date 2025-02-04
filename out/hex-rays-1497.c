#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, int a3, float a4, float a5)
{
__int64 result; // rax
int i; // [rsp+18h] [rbp-10h]
int j; // [rsp+1Ch] [rbp-Ch]
float v8; // [rsp+20h] [rbp-8h]
float v9; // [rsp+24h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = (unsigned int)i;
if ( i >= a2 )
break;
v8 = (float)i * a4;
for ( j = 0; j < a3; ++j )
{
v9 = (float)j * a5;
if ( v8 >= 0.5 && v8 <= 1.0 && v9 >= 0.5 && v9 <= 1.0 )
*(_DWORD *)(4LL * j + *(_QWORD *)(8LL * i + a1)) = 0x40000000;
}
}
return result;
}