#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
double  func0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
int v5; // eax
int v6; // eax
double result; // xmm0_8
int v9; // [rsp+28h] [rbp-10h]
int v10; // [rsp+2Ch] [rbp-Ch]
int v11; // [rsp+30h] [rbp-8h]
int v12; // [rsp+34h] [rbp-4h]

v9 = 0;
v10 = 0;
v11 = 0;
v12 = 0;
while ( 1 )
{
if ( *(double *)(8LL * v9 + a1) == 0.0 )
{
result = *(double *)(8LL * v10 + a2);
if ( result == 0.0 )
break;
}
result = *(double *)(8LL * v11 + a3);
if ( result < a5 )
break;
if ( *(double *)(8LL * v9 + a1) <= *(double *)(8LL * v10 + a2) )
{
*(_DWORD *)(a4 + 4LL * v11) = ++v12;
v6 = v11++;
*(_QWORD *)(8LL * v6 + a3) = *(_QWORD *)(8LL * v9++ + a1);
}
else
{
*(_DWORD *)(a4 + 4LL * v11) = --v12;
v5 = v11++;
*(_QWORD *)(8LL * v5 + a3) = *(_QWORD *)(8LL * v10++ + a2);
}
}
return result;
}