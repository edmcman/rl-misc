#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <memory.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
_DWORD *v6; // rax
_DWORD *v7; // rax
_DWORD *v8; // rax
_DWORD *v9; // rax
_DWORD *v10; // rax
_DWORD *v11; // rax
_DWORD *v12; // rax
_DWORD *v13; // rax
_DWORD *v14; // rax
_DWORD *v15; // rax
_DWORD *v16; // rax
int i; // [rsp+24h] [rbp-7Ch]
int j; // [rsp+24h] [rbp-7Ch]
int k; // [rsp+24h] [rbp-7Ch]
int v21; // [rsp+28h] [rbp-78h]
int v22; // [rsp+2Ch] [rbp-74h]
__int64 v23[6]; // [rsp+30h] [rbp-70h]
__int64 v24[8]; // [rsp+60h] [rbp-40h]

v24[7] = __readfsqword(0x28u);
if ( a3 && a3 < a2 - 6 )
{
for ( i = 0; i <= 5; ++i )
{
v21 = i + 1 + a3;
v22 = a3 - (i + 1);
if ( v21 >= 0 && v21 < a2 )
v23[i] = *(_QWORD *)(8LL * v21 + a1);
else
v23[i] = 0LL;
if ( v22 >= 0 && v22 < a2 )
v24[i] = *(_QWORD *)(8LL * v22 + a1);
else
v24[i] = 0LL;
}
if ( *(double *)v23 <= *(double *)(8LL * a3 + a1) && *(double *)v24 <= *(double *)(8LL * a3 + a1) )
{
if ( a3 <= 1 || a3 >= a4 )
{
if ( a3 >= a4 && a3 < a5 )
{
for ( j = 1; j <= 2; ++j )
{
if ( *(double *)&v23[j] + 7.0 >= *(double *)(8LL * a3 + a1)
|| *(double *)&v24[j] + 7.0 >= *(double *)(8LL * a3 + a1) )
{
return 0LL;
}
}
*(_DWORD *)(4LL * a3 + a6) = 1;
v8 = (_DWORD *)(4 * (a3 + 1LL) + a6);
*v8 = 1;
*(_DWORD *)(4LL * a3 - 4 + a6) = *v8;
v9 = (_DWORD *)(4 * (a3 + 2LL) + a6);
*v9 = 1;
*(_DWORD *)(4LL * a3 - 8 + a6) = *v9;
v10 = (_DWORD *)(4 * (a3 + 3LL) + a6);
*v10 = 1;
*(_DWORD *)(4LL * a3 - 12 + a6) = *v10;
return 1LL;
}
if ( a3 >= a5 && a3 < a2 )
{
for ( k = 1; k <= 5; ++k )
{
if ( *(double *)&v23[k] + 7.0 >= *(double *)(8LL * a3 + a1)
|| *(double *)&v24[k] + 7.0 >= *(double *)(8LL * a3 + a1) )
{
return 0LL;
}
}
*(_DWORD *)(4LL * a3 + a6) = 1;
v11 = (_DWORD *)(4 * (a3 + 1LL) + a6);
*v11 = 1;
*(_DWORD *)(4LL * a3 - 4 + a6) = *v11;
v12 = (_DWORD *)(4 * (a3 + 2LL) + a6);
*v12 = 1;
*(_DWORD *)(4LL * a3 - 8 + a6) = *v12;
v13 = (_DWORD *)(4 * (a3 + 3LL) + a6);
*v13 = 1;
*(_DWORD *)(4LL * a3 - 12 + a6) = *v13;
v14 = (_DWORD *)(4 * (a3 + 4LL) + a6);
*v14 = 1;
*(_DWORD *)(4LL * a3 - 16 + a6) = *v14;
v15 = (_DWORD *)(4 * (a3 + 5LL) + a6);
*v15 = 1;
*(_DWORD *)(4LL * a3 - 20 + a6) = *v15;
v16 = (_DWORD *)(4 * (a3 + 6LL) + a6);
*v16 = 1;
*(_DWORD *)(4LL * a3 - 24 + a6) = *v16;
return 1LL;
}
}
else if ( *(double *)&v23[1] + 7.0 < *(double *)(8LL * a3 + a1)
&& *(double *)&v24[1] + 7.0 < *(double *)(8LL * a3 + a1) )
{
*(_DWORD *)(4LL * a3 + a6) = 1;
v6 = (_DWORD *)(4 * (a3 + 1LL) + a6);
*v6 = 1;
*(_DWORD *)(4LL * a3 - 4 + a6) = *v6;
v7 = (_DWORD *)(4 * (a3 + 2LL) + a6);
*v7 = 1;
*(_DWORD *)(4LL * a3 - 8 + a6) = *v7;
return 1LL;
}
}
}
return 0LL;
}