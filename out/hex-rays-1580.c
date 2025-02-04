
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, char *a2)
{
char *v2; // rax
char v3; // bl
char v4; // cl
_BYTE *result; // rax

do
{
v2 = a2++;
v3 = *v2;
if ( *v2 <= 64 || v3 > 90 )
v4 = *v2;
else
v4 = v3 | 0x20;
result = a1++;
*result = v4;
}
while ( v3 );
return result;
}