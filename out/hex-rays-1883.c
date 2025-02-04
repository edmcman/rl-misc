
# 1 
#include "defs.h"
unsigned __int64  func0(_DWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
unsigned __int64 result; // rax

if ( *a3 > *a1 )
*a3 = *a1;
result = (unsigned int)*a1;
if ( *a4 < (int)result )
{
result = (unsigned __int64)a4;
*a4 = *a1;
}
return result;
}