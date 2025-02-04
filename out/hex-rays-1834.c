#include <stdio.h>

#include <stdlib.h>

#include <pthread.h>

#include <unistd.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, int a2)
{
_DWORD *result; // rax

sleep(1u);
result = a1;
*a1 += a2;
return result;
}