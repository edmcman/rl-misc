#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <fcntl.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(char *a1)
{
__int64 result; // rax

while ( 1 )
{
result = (unsigned __int8)*a1;
if ( !(_BYTE)result )
break;
if ( *a1 > 96 && *a1 <= 122 )
*a1 -= 32;
++a1;
}
return result;
}