#include <malloc.h>

#include <stdlib.h>

#include <string.h>

#include <memory.h>

#include <math.h>

# 1 
#include "defs.h"
_QWORD * func0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
__int64 v4; // rax
__int64 v5; // rdx
_QWORD *result; // rax
__int64 v7; // rdx
__int64 v8; // rax
__int64 v9; // rax
__int64 v11; // [rsp+18h] [rbp-38h]
int v12; // [rsp+24h] [rbp-2Ch]
__int64 j; // [rsp+28h] [rbp-28h]
__int64 i; // [rsp+30h] [rbp-20h]
__int64 v15; // [rsp+30h] [rbp-20h]
__int64 v17; // [rsp+38h] [rbp-18h]
__int64 v18; // [rsp+40h] [rbp-10h]

v11 = a1 - 8;
v4 = a4[3];
if ( v4 < 180 )
v4 = 180LL;
v18 = v4 + 1;
while ( a2 > 0 && *(__int64 *)(8 * a2 + v11) > 540 )
--a2;
v17 = a2 + 1;
if ( v17 > 1 && v18 <= *(_QWORD *)(8 * v17 - 8 + v11) )
{
for ( i = v17 - 1; i > 0 && v18 <= *(_QWORD *)(8 * i + v11); --i )
;
v15 = i + 1;
v12 = 0;
for ( j = v15 + 1; v17 > j; ++j )
{
if ( (__int64)(*(_QWORD *)(8 * j + v11) - *(_QWORD *)(8 * v15 + v11)) > 89 )
{
v12 = 1;
break;
}
}
if ( v12 )
goto LABEL_28;
v7 = 271LL;
if ( v18 >= 271 )
v7 = v4 + 1;
if ( *(_QWORD *)(8 * v15 + v11) <= v7 + 89 )
{
LABEL_28:
a4[4] = *(_QWORD *)(8 * v15 + v11);
while ( ++v15 < v17 && *(_QWORD *)(8 * v15 + v11) <= a4[4] + 156LL )
{
if ( a4[4] + 89LL < *(_QWORD *)(8 * v15 + v11) )
{
a4[5] = *(_QWORD *)(8 * v15 + v11) - 1LL;
result = a3;
*a3 = 3LL;
return result;
}
}
if ( a4[4] + 154LL >= 540 )
v9 = 540LL;
else
v9 = a4[4] + 155LL;
a4[5] = v9;
result = a3;
*a3 = 1LL;
}
else
{
a4[5] = *(_QWORD *)(8 * v15 + v11) - 1LL;
v8 = a4[5] - 155LL;
if ( v18 >= v8 )
v8 = v18;
a4[4] = v8;
result = a3;
*a3 = 2LL;
}
}
else
{
v5 = 306LL;
if ( (__int64)a4[3] >= 306 )
v5 = a4[3];
a4[4] = v5 + 1;
a4[5] = a4[4] + 155LL;
result = a3;
*a3 = 0LL;
}
return result;
}