#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <unistd.h>	

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1)
{
__int64 result; // rax

while ( 1 )
{
result = (unsigned __int8)*a1;
if ( !(_BYTE)result )
break;
if ( *a1 == 85 )
{
*a1 = 84;
}
else if ( *a1 == 117 )
{
*a1 = 116;
}
++a1;
}
return result;
}