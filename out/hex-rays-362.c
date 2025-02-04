#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
void  func0(__int64 a1, __int64 a2, __int64 a3)
{
int v3; // eax
int i; // [rsp+24h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
if ( (*(_DWORD *)(4LL * i + a2) & 1) != 0 )
v3 = (*(_DWORD *)(4LL * i + a2) - 1) / 2;
else
v3 = *(_DWORD *)(4LL * i + a2) / 2;
*(_DWORD *)(4LL * i + a1) = v3;
*(_DWORD *)(4LL * i + a1) -= (*(_DWORD *)(4LL * i + a1) > *(_DWORD *)(4LL * i + a3) / 2) * *(_DWORD *)(4LL * i + a3);
}
}