
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax

result = a1 + 1;
*(_BYTE *)(a1 + 1) = 48;
return result;
}