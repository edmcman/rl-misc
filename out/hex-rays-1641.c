#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1)
{
int i; // [rsp+10h] [rbp-40h]
int j; // [rsp+14h] [rbp-3Ch]
int k; // [rsp+18h] [rbp-38h]
int l; // [rsp+1Ch] [rbp-34h]
int v6[10]; // [rsp+20h] [rbp-30h]
unsigned __int64 v7; // [rsp+48h] [rbp-8h]

v7 = __readfsqword(0x28u);
for ( i = 0; i <= 2; ++i )
{
for ( j = 0; j <= 2; ++j )
v6[3 * i + 2 - j] = *(_DWORD *)(12LL * j + a1 + 4LL * i);
}
for ( k = 0; k <= 2; ++k )
{
for ( l = 0; l <= 2; ++l )
*(_DWORD *)(12LL * k + a1 + 4LL * l) = v6[3 * k + l];
}
return __readfsqword(0x28u) ^ v7;
}