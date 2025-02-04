#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/types.h>

#include <sys/stat.h>

# 1 
#include "defs.h"
__int64  func0(unsigned __int8 *a1)
{
__int64 result; // rax

while ( 1 )
{
result = *a1;
if ( !(_BYTE)result )
break;
*a1 = a1[1];
if ( *a1 )
++a1;
}
return result;
}