#include <pthread.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, __int64 a2)
{
_QWORD *result; // rax

if ( a1 )
{
if ( a2 > 0 )
{
result = a1;
*a1 += a2;
}
}
return result;
}