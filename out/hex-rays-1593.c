
# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
_DWORD *result; // rax

result = a3;
*a3 = *a2 * *a1;
return result;
}