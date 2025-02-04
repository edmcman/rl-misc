#include <stdint.h>

#include <string.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _DWORD *a2)
{
int v2; // eax

if ( *a1 == 48 )
{
v2 = (char)a1[1];
if ( v2 == 120 )
{
*a2 = 16;
return a1 + 2;
}
if ( v2 <= 120 )
{
if ( v2 == 116 )
{
LABEL_10:
*a2 = 10;
return a1 + 2;
}
if ( v2 <= 116 )
{
if ( v2 != 110 )
{
if ( v2 != 111 )
goto LABEL_12;
*a2 = 8;
return a1 + 2;
}
goto LABEL_10;
}
}
LABEL_12:
*a2 = 10;
return a1;
}
*a2 = 10;
return a1;
}