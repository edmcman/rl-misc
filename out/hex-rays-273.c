#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1)
{
int i; // [rsp+1Ch] [rbp-24h]
int v3[6]; // [rsp+20h] [rbp-20h]
unsigned __int64 v4; // [rsp+38h] [rbp-8h]

v4 = __readfsqword(0x28u);
for ( i = 0; i <= 3; ++i )
{
v3[i] = *(_DWORD *)(a1 + 4LL * i);
*(_DWORD *)(a1 + 4LL * i) = *(_DWORD *)(a1 + 48 + 4LL * i);
*(_DWORD *)(a1 + 48 + 4LL * i) = v3[i];
}
return __readfsqword(0x28u) ^ v4;
}