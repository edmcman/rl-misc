#include <string.h>

# 1 
#include "defs.h"
_DWORD * func0(unsigned int *a1, _DWORD *a2)
{
unsigned int v2; // eax
_DWORD *result; // rax

*a2 = 0;
v2 = *a1;
if ( *a1 == 12 )
{
result = a2 + 1;
a2[1] = 1073758208;
}
else
{
if ( v2 > 0xC )
goto LABEL_11;
if ( v2 == 10 )
{
result = a2 + 1;
a2[1] = 259;
return result;
}
if ( v2 == 11 )
{
result = a2 + 1;
a2[1] = (unsigned int)btl_entry > 0x3FFFFFFF;
}
else
{
LABEL_11:
result = a2;
*a2 = 1;
}
}
return result;
}