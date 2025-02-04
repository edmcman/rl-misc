
# 1 
#include "defs.h"
_DWORD * func0(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
_DWORD *result; // rax

result = a6;
*a6 = a4 + a3 + a2 + a1 + a5;
return result;
}