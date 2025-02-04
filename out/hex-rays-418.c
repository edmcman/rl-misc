
# 1 
#include "defs.h"
__int64  func0(void *a1)
{
__int64 result; // rax

if ( (int)read(0, a1, 1uLL) > 0 )
result = 0LL;
else
result = 0xFFFFFFFFLL;
return result;
}