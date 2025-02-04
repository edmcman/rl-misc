#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int *a2)
{
__int64 result; // rax
int v3; // [rsp+1Ch] [rbp-8h]

v3 = *(_DWORD *)(4LL * (*a2)-- + a1);
result = (unsigned int)(*(_DWORD *)(4LL * *a2 + a1) - v3);
*(_DWORD *)(a1 + 4LL * *a2) = result;
return result;
}