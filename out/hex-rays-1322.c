#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <string.h>

#include <stdbool.h>

#include <math.h>

# 1 
#include "defs.h"
_DWORD * func0(int a1, _DWORD *a2, _DWORD *a3)
{
_DWORD *result; // rax

*a3 = a1 / 9 + 1;
result = a2;
*a2 = a1 % 9 + 1;
return result;
}