#include <stdio.h>

#include <math.h>

#include <ctype.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
unsigned __int64  func0(unsigned int a1, int a2, _DWORD *a3)
{
unsigned __int64 result; // rax

if ( a1 == -1 )
{
if ( !a2 )
{
result = (unsigned __int64)a3;
*a3 = 0;
}
}
else
{
result = a1;
if ( a1 != a2 )
{
result = (unsigned __int64)a3;
*a3 = 0;
}
}
return result;
}