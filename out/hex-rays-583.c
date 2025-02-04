
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax

*(_DWORD *)(a1 + 4) = 1;
result = *(unsigned int *)(a1 + 4);
if ( *(_DWORD *)(a1 + 4) != 1 )
result = *(unsigned int *)f14;
return result;
}