#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2, _DWORD *a3)
{
int i; // [rsp+28h] [rbp-18h]
int j; // [rsp+28h] [rbp-18h]
int v6[3]; // [rsp+2Ch] [rbp-14h]
unsigned __int64 v7; // [rsp+38h] [rbp-8h]

v7 = __readfsqword(0x28u);
for ( i = 0; i <= 2; ++i )
v6[i] = *(_DWORD *)(12LL * i + a2 + 4) * a3[1]
+ *a3 * *(_DWORD *)(12LL * i + a2)
+ *(_DWORD *)(12LL * i + a2 + 8) * a3[2];
for ( j = 0; j <= 2; ++j )
*(_DWORD *)(a1 + 4LL * j) = v6[j];
return __readfsqword(0x28u) ^ v7;
}