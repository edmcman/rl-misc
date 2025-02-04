
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax

result = *(unsigned int *)(a1 + 12);
if ( (int)result > 14 )
{
result = a1 + 12;
--*(_DWORD *)(a1 + 12);
}
return result;
}