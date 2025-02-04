#include <stdio.h>

#include <float.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, _QWORD *a2)
{
_QWORD *result; // rax

*a2 = *a1;
a2[1] = a1[1];
result = a1;
a2[2] = a1[2];
return result;
}