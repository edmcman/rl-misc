#include <inttypes.h>

#include <string.h>

#include <unistd.h>

#include <stdlib.h>

#include <signal.h>

#include <sys/types.h>

#include <sys/wait.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
_DWORD *result; // rax

_RAX = (unsigned int)*a1;
__asm { cpuid }
*a1 = _RAX;
*a2 = _RBX;
*a3 = _RCX;
result = a4;
*a4 = _RDX;
return result;
}