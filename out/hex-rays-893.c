#include <string.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, const char *a2)
{
_BYTE *v2; // rdx
_BYTE *v3; // rax
_BYTE *result; // rax
_BYTE *v5; // [rsp+8h] [rbp-18h]
_BYTE *v6; // [rsp+18h] [rbp-8h]

v5 = a1;
v6 = a1;
while ( *v6 )
{
if ( strchr(a2, (char)*v6) )
{
++v6;
}
else
{
v2 = v6++;
v3 = v5++;
*v3 = *v2;
}
}
result = v5;
*v5 = 0;
return result;
}