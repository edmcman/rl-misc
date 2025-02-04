
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1)
{
while ( *a1 )
*a1++ ^= 0x1Fu;
return a1;
}