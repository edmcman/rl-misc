#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *result; // rax

while ( *a2 )
{
if ( *a2 == 92 )
{
if ( *++a2 == 92 )
{
*a1 = 92;
}
else if ( *a2 == 35 )
{
*a1 = 35;
}
else
{
*a1 = quotes_3119[*a2 & 0x1F];
}
}
else
{
if ( *a2 == 35 )
{
result = a1;
*a1 = 0;
return result;
}
*a1 = *a2;
}
++a1;
++a2;
}
result = a1;
*a1 = 0;
return result;
}