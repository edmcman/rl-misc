
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax

*(_DWORD *)(a1 + 4) = 1;
result = a1 + 8;
*(_DWORD *)(a1 + 8) = 1;
return result;
}