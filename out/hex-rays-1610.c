#include <stdarg.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v2; // rdx
_BYTE *v3; // rax
unsigned int v7; // [rsp+1Ch] [rbp-4h]

v7 = 0;
while ( *a2 )
{
v2 = a2++;
v3 = a1++;
*v3 = *v2;
++v7;
}
return v7;
}