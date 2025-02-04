
# 1 
#include "defs.h"
_DWORD * func0(unsigned int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
_DWORD *result; // rax

_RAX = a1;
__asm { cpuid }
*a2 = _RAX;
*a3 = _RBX;
*a4 = _RCX;
result = a5;
*a5 = _RDX;
return result;
}