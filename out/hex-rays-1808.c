#include <pthread.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1)
{
_DWORD *result; // rax

if ( a1 )
{
result = a1;
*a1 = 0;
}
return result;
}