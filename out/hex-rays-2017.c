
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
__int64 result; // rax
unsigned int v3; // [rsp+1Ch] [rbp-4h]

v3 = *(_DWORD *)(a1 + 4);
*(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
result = v3;
*(_DWORD *)(a2 + 4) = v3;
return result;
}