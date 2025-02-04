#include <stdio.h>

#include <unistd.h>

#include <stdlib.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int a1, _DWORD *a2)
{
__int64 result; // rax

_RAX = a1;
__asm { cpuid }
*a2 = _RAX;
a2[1] = _RBX;
a2[2] = _RCX;
result = (unsigned int)_RDX;
a2[3] = _RDX;
return result;
}