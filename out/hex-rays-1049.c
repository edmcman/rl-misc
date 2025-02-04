
# 1 
#include "defs.h"
_DWORD * func0(int a1, _DWORD *a2)
{
_DWORD *result; // rax

if ( a2 )
{
if ( a1 > 0 )
{
result = a2;
*a2 += a1;
}
}
return result;
}