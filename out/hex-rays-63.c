#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
unsigned __int64  func0(int a1, int a2, int a3, int a4, _DWORD *a5, _DWORD *a6, _DWORD *a7, _DWORD *a8)
{
int j; // [rsp+30h] [rbp-30h]
int i; // [rsp+34h] [rbp-2Ch]
int k; // [rsp+38h] [rbp-28h]
int v12; // [rsp+3Ch] [rbp-24h]
int v13; // [rsp+40h] [rbp-20h]
int v14; // [rsp+44h] [rbp-1Ch]
int v15; // [rsp+48h] [rbp-18h]
int v16; // [rsp+4Ch] [rbp-14h]
int v17; // [rsp+50h] [rbp-10h]
unsigned __int64 v18; // [rsp+58h] [rbp-8h]

v18 = __readfsqword(0x28u);
v14 = a1;
v15 = a2;
v16 = a3;
v17 = a4;
for ( i = 2; i <= 4; ++i )
{
for ( j = 1; i > j; ++j )
{
if ( *(&v13 + j) > *(&v13 + i) )
{
v12 = *(&v13 + i);
for ( k = i; j < k; --k )
*(&v13 + k) = *(&v13 + k - 1);
*(&v13 + j) = v12;
}
}
}
*a5 = v14;
*a6 = v15;
*a7 = v16;
*a8 = v17;
return __readfsqword(0x28u) ^ v18;
}