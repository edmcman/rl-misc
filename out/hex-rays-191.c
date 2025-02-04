#include <stddef.h>

#include <errno.h>

#include <regex.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
unsigned __int64  func0(_BYTE *a1, int a2, char a3, unsigned int a4)
{
unsigned __int64 result; // rax

result = a4;
while ( --a2 >= 0 )
{
result = (unsigned __int8)*a1;
if ( a3 == (_BYTE)result )
{
result = (unsigned __int64)a1;
*a1 = a4;
}
++a1;
}
return result;
}