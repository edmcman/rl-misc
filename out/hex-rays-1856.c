#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax

*(_DWORD *)(a1 + 12) += 10;
result = (unsigned int)(12 * *(_DWORD *)(a1 + 16));
*(_DWORD *)(a1 + 16) = result;
return result;
}