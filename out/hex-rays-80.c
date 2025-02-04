#include <stdio.h>

# 1 
#include "defs.h"
unsigned __int64  func0(_DWORD *a1, _DWORD *a2)
{
unsigned __int64 result; // rax

++*a1;
++*a2;
if ( *a1 == 5 )
{
result = (unsigned __int64)a1;
*a1 = 0;
}
else
{
result = (unsigned int)*a2;
if ( (_DWORD)result == 5 )
{
result = (unsigned __int64)a2;
*a2 = 0;
}
}
return result;
}