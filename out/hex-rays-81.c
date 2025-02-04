#include <stdarg.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2)
{
_DWORD *result; // rax

*a1 = 1000;
result = a2;
*a2 = 1000;
return result;
}