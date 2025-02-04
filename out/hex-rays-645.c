
# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2)
{
_DWORD *result; // rax

++*a1;
result = a2;
--*a2;
return result;
}