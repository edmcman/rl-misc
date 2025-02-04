#include <stdio.h>

#include <string.h>

#include <errno.h>

#include <unistd.h>

#include <assert.h>

#include <signal.h>

#include <stdlib.h>

#include <pthread.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, int a2)
{
_DWORD *result; // rax

result = a1;
*a1 = a2;
return result;
}