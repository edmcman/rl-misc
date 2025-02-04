
# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, _BYTE *a2)
{
__int64 result; // rax

*a1 = *a2;
if ( *a2 )
result = func0(a1 + 1, a2 + 1) - 1;
else
result = (__int64)a1;
return result;
}