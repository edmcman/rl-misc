#include <assert.h>

# 1 
#include "defs.h"
unsigned __int64  func0(int a1, int a2, __int64 a3, __int64 a4)
{
unsigned __int64 result; // rax
int v6; // [rsp+24h] [rbp-14h]
__int64 v7; // [rsp+28h] [rbp-10h]
__int64 v8; // [rsp+30h] [rbp-8h]

while ( 1 )
{
v6 = 2 * a1 + 1;
result = (unsigned int)v6;
if ( v6 > a2 )
break;
if ( v6 < a2 && *(double *)(8 * (v6 + 1LL) + a3) > *(double *)(8LL * v6 + a3) )
v6 = 2 * a1 + 2;
result = 8LL * a1 + a3;
if ( *(double *)result >= *(double *)(8LL * v6 + a3) )
break;
v7 = *(_QWORD *)(8LL * a1 + a3);
*(_QWORD *)(8LL * a1 + a3) = *(_QWORD *)(a3 + 8LL * v6);
*(_QWORD *)(8LL * v6 + a3) = v7;
v8 = *(_QWORD *)(8LL * a1 + a4);
*(_QWORD *)(8LL * a1 + a4) = *(_QWORD *)(a4 + 8LL * v6);
*(_QWORD *)(8LL * v6 + a4) = v8;
a1 = v6;
}
return result;
}