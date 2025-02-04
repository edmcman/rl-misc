#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <omp.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, int a3)
{
char v4; // [rsp+18h] [rbp-18h]
int i; // [rsp+1Ch] [rbp-14h]
int j; // [rsp+20h] [rbp-10h]
int v7; // [rsp+24h] [rbp-Ch]
int v8; // [rsp+28h] [rbp-8h]

v4 = 0;
for ( i = 1; i < a2; i *= 2 )
{
if ( !(a3 % (2 * i)) )
*(_DWORD *)(4LL * (a3 + 2 * i) - 4 + a1) += *(_DWORD *)(4LL * (a3 + i) - 4 + a1);
++v4;
}
if ( !a3 )
*(_DWORD *)(4LL * a2 - 4 + a1) = 0;
for ( j = 1 << (v4 - 1); j > 0; j >>= 1 )
{
v7 = 2 * j;
if ( !(a3 % (2 * j)) )
{
v8 = *(_DWORD *)(4LL * (a3 + j) - 4 + a1);
*(_DWORD *)(4LL * (a3 + j) - 4 + a1) = *(_DWORD *)(4LL * (a3 + v7) - 4 + a1);
*(_DWORD *)(4LL * (a3 + v7) - 4 + a1) = *(_DWORD *)(4LL * (a3 + j) - 4 + a1) + v8;
}
}
return *(unsigned int *)(4LL * a3 + a1);
}