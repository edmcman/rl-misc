#include <stdlib.h>

# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, __int64 a2, __int64 a3)
{
_DWORD *result; // rax

result = (_DWORD *)(4 * a3 + a1);
*result = 0;
return result;
}