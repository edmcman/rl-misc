#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <x86intrin.h>

#include <cpuid.h>

#include <inttypes.h>

#include <stdint.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, unsigned int a2)
{
__int64 result; // rax

_RAX = a2;
__asm { cpuid }
*a1 = result;
a1[1] = _RBX;
a1[2] = _RCX;
a1[3] = _RDX;
return result;
}