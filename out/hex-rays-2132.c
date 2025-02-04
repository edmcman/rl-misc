
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2, int a3)
{
_BYTE *result; // rax

while ( a3 > 0 && *a2 )
{
*a1 = *a2;
--a3;
++a2;
++a1;
}
result = a1;
*a1 = 0;
return result;
}