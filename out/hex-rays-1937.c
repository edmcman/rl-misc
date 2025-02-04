#include <stdio.h>

#include <stdlib.h>

#include <assert.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, _DWORD *a2, __int64 a3, int a4, int a5)
{
unsigned int i; // [rsp+2Ch] [rbp-4h]

*a1 = 0;
for ( i = 0; (int)i < a5 && a4 >= *a1 + *(_DWORD *)(4LL * (int)i + a3); ++i )
*a1 += *(_DWORD *)(4LL * (int)i + a3);
*a2 = *(_DWORD *)(4LL * (int)i + a3) + *a1;
return i;
}