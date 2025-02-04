#include <stdlib.h> */

#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2)
{
int v2; // eax
int v3; // er14
int v4; // eax
int v5; // edx
_DWORD *result; // rax

if ( (unsigned __int8)*a1 > 0x9Fu )
v2 = 176;
else
v2 = 112;
v3 = v2;
if ( (unsigned __int8)*a2 > 0x9Eu )
{
v4 = 126;
}
else if ( (*a2 & 0x80u) == 0 )
{
v4 = 31;
}
else
{
v4 = 32;
}
*a1 = 2 * ((unsigned __int8)*a1 - v3) - ((unsigned __int8)*a2 <= 0x9Eu);
v5 = *a2 - v4;
result = a2;
*a2 = v5;
return result;
}