
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
while ( *a2 )
*a1++ = *a2++;
*a1 = 0;
return a1;
}