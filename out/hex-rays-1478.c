
# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, int a2)
{
_DWORD *result; // rax
int v4; // [rsp+18h] [rbp-4h]

v4 = 0;
while ( a2 > 31 )
{
++v4;
a2 -= 32;
}
result = (_DWORD *)(4LL * v4 + a1);
*result |= 1 << a2;
return result;
}