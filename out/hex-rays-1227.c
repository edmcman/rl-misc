#include <assert.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1)
{
_DWORD *result; // rax

result = a1;
*a1 = 2;
return result;
}