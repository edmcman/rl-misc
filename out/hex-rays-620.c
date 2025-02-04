#include <unistd.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2)
{
int v2; // ecx
__int64 result; // rax

*(_DWORD *)(4 * (a2 + 1LL) + a1) += *(_DWORD *)(4LL * a2 + a1) / 10;
v2 = *(_DWORD *)(4LL * a2 + a1);
result = (unsigned int)(10 * (v2 / 10));
*(_DWORD *)(4LL * a2 + a1) = v2 % 10;
return result;
}