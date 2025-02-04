
# 1 
#include "defs.h"
__int64  func0(int a1, unsigned int a2, __int64 a3)
{
__int64 result; // rax

*(_DWORD *)(a3 + 8) = a1;
result = a2;
*(_DWORD *)(a3 + 12) = a2;
return result;
}