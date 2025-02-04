#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1)
{
int i; // [rsp+18h] [rbp-28h]
int j; // [rsp+18h] [rbp-28h]
int v4; // [rsp+1Ch] [rbp-24h]
int v5[6]; // [rsp+20h] [rbp-20h]
unsigned __int64 v6; // [rsp+38h] [rbp-8h]

v6 = __readfsqword(0x28u);
v4 = 0;
for ( i = 0; i <= 3; ++i )
v5[i] = *(_DWORD *)(4LL * i + a1);
for ( j = 4; j > 0; --j )
*(_DWORD *)(a1 + 4LL * j - 4) = v5[v4++];
return __readfsqword(0x28u) ^ v6;
}