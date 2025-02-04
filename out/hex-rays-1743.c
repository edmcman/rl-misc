
# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, int a2)
{
_DWORD *result; // rax

result = (_DWORD *)(4LL * (a2 / 32) + a1);
*result &= ~(1 << (a2 % 32));
return result;
}