
# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *v3; // [rsp+0h] [rbp-20h]
char v5; // [rsp+17h] [rbp-9h]

v3 = a2;
v5 = 0;
while ( *v3 )
{
if ( !*a1 )
v5 = 1;
++v3;
++a1;
}
if ( !*a1 || v5 )
a1[1] = 0;
while ( v3 != a2 - 1 )
*a1-- = *v3--;
return a1;
}