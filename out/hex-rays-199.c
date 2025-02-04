#include <stdio.h>

#include <string.h>

#include <errno.h>

#include <ctype.h>

#include <stdarg.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, unsigned __int64 a2)
{
_BYTE *v2; // rdx
_BYTE *v3; // rax
_BYTE *v5; // [rsp+8h] [rbp-18h]
_BYTE *v6; // [rsp+18h] [rbp-8h]

v5 = a1;
v6 = a1;
while ( (unsigned __int64)v6 < a2 )
{
if ( *v6 == 92 && a2 > (unsigned __int64)(v6 + 1) )
++v6;
v2 = v6++;
v3 = v5++;
*v3 = *v2;
}
*v5 = 0;
return v5;
}