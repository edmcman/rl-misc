
# 1 
#include "defs.h"
_DWORD * func0(int a1, int a2, int a3, _DWORD *a4)
{
_DWORD *result; // rax

result = a4;
*a4 = a3 + a2 + a1;
return result;
}