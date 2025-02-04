#include <stdlib.h>

#include <string.h>

#include <GL/glx.h>

#include <GL/glxext.h>

#include <X11/keysym.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, __int64 a2)
{
__int64 v2; // rax
__int64 v3; // rdx
_QWORD *result; // rax

*a1 = 0LL;
*(_QWORD *)(a2 + 72) = 131151LL;
v2 = *a1;
BYTE1(v2) = BYTE1(*a1) | 8;
v3 = v2;
result = a1;
*a1 = v3;
return result;
}