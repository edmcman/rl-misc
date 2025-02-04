#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <ctype.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1)
{
_DWORD *result; // rax

*a1 = 1065353216;
a1[1] = 0;
a1[2] = 0;
a1[3] = 1065353216;
a1[4] = 0;
result = a1 + 5;
a1[5] = 0;
return result;
}