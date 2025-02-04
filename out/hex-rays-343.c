#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, int a3, int a4)
{
__int64 result; // rax
unsigned int v5; // [rsp+20h] [rbp-4h]

v5 = *(_DWORD *)(4LL * a3 + a1);
*(_DWORD *)(4LL * a3 + a1) = *(_DWORD *)(4LL * a4 + a1);
result = v5;
*(_DWORD *)(a1 + 4LL * a4) = v5;
return result;
}