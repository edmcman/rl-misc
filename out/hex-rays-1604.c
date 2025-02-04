#include <stdio.h>

#include <signal.h>

#include <sys/types.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, __int64 a2)
{
_QWORD *result; // rax

result = a1;
*a1 = a2;
return result;
}