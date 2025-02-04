
# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, _DWORD *a2)
{
__int64 result; // rax

*a2 = *a1;
result = (unsigned int)a1[1];
a2[1] = result;
return result;
}