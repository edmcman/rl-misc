
# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, unsigned int *a2, unsigned int a3)
{
_DWORD *result; // rax

*a2 = 0;
*a2 = HIWORD(a3);
*a1 = 0;
result = a1;
*a1 = (unsigned __int16)a3;
return result;
}