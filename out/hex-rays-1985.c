
# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
_DWORD *result; // rax

if ( a1 )
{
result = a1;
*a1 = 0;
}
if ( a2 )
{
result = a2;
*a2 = 48;
}
if ( a3 )
{
result = a3;
*a3 = 0;
}
return result;
}