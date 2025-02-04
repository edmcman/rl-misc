#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *result; // rax

while ( *a2 )
*a1++ = *a2++;
result = a1;
*a1 = 0;
return result;
}