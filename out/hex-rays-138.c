#include <stdio.h>

#include <limits.h>

#include <stdlib.h>

#include <errno.h>

#include <string.h>

#include <unistd.h>

#include <sys/wait.h>

#include <sys/stat.h>

#include <sys/sem.h>

# 1 
#include "defs.h"
_WORD * func0(_WORD *a1, __int16 a2, __int16 a3, __int16 a4)
{
_WORD *result; // rax

*a1 = a2;
a1[1] = a3;
result = a1;
a1[2] = a4;
return result;
}