#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
int v2; // [rsp+14h] [rbp-4h]

v2 = 1;
result = a1 + 4;
++*(_DWORD *)(a1 + 4);
while ( v2 <= 9 )
{
result = *(unsigned int *)(4LL * v2 + a1);
if ( (int)result > 1 )
{
++*(_DWORD *)(4 * (v2 + 1LL) + a1);
result = 4LL * v2 + a1;
*(_DWORD *)result = 0;
}
++v2;
}
return result;
}