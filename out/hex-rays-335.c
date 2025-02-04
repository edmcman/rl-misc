#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, unsigned int a2)
{
_DWORD *v2; // r10
_DWORD *v3; // r9
_DWORD *v4; // r8
int v10; // edi
_DWORD *result; // rax

v2 = a1 + 1;
v3 = a1 + 2;
v4 = a1 + 3;
_RAX = a2;
__asm { cpuid }
v10 = _RAX;
result = a1;
*a1 = v10;
*v2 = _RBX;
*v3 = _RCX;
*v4 = _RDX;
return result;
}