
# 1 
#include "defs.h"
_DWORD * func0(__int16 a1, __int16 a2, _DWORD *a3)
{
_DWORD *result; // rax

result = a3;
*a3 = (unsigned __int16)(a1 + a2);
return result;
}