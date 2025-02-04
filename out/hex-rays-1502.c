#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1)
{
int i; // [rsp+10h] [rbp-40h]
int j; // [rsp+10h] [rbp-40h]
int k; // [rsp+14h] [rbp-3Ch]
int l; // [rsp+18h] [rbp-38h]
int m; // [rsp+18h] [rbp-38h]
int v7; // [rsp+1Ch] [rbp-34h]
int v8[4]; // [rsp+20h] [rbp-30h]
unsigned __int64 v9; // [rsp+48h] [rbp-8h]

v9 = __readfsqword(0x28u);
for ( i = 0; i <= 8; ++i )
v8[i] = 0;
for ( j = 0; j <= 8; ++j )
{
v7 = 1;
for ( k = j - 1; k >= 0; --k )
{
if ( v7 == 1 && *(float *)(4LL * j + a1) > *(float *)&v8[k] )
{
if ( k == j - 1 )
{
v8[j] = *(_DWORD *)(4LL * j + a1);
v7 = 0;
}
else
{
for ( l = j - 1; k < l; --l )
v8[l + 1] = v8[l];
v8[k + 1] = *(_DWORD *)(4LL * j + a1);
v7 = 0;
}
}
}
if ( v7 == 1 )
{
for ( m = j - 1; m >= 0; --m )
v8[m + 1] = v8[m];
v8[0] = *(_DWORD *)(4LL * j + a1);
}
}
return __readfsqword(0x28u) ^ v9;
}