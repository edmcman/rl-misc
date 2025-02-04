#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
int v3; // [rsp+18h] [rbp-8h]
int v4; // [rsp+1Ch] [rbp-4h]

v3 = 0;
v4 = 0;
while ( v3 <= 4 )
{
while ( v4 <= 4 )
{
result = *(unsigned int *)(20LL * v3 + a1 + 4LL * v4);
*(_DWORD *)(a2 + 4LL * (5 * v3 + v4++)) = result;
}
++v3;
}
return result;
}