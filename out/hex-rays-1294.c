#include <gmp.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _DWORD *a2)
{
_BYTE *v3; // [rsp+8h] [rbp-8h]

v3 = a1;
if ( *a1 == 43 )
{
*a2 = 0;
v3 = a1 + 1;
}
else if ( *a1 == 45 )
{
*a2 = 1;
v3 = a1 + 1;
}
else
{
*a2 = 0;
}
return v3;
}