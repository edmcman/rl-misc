#include <math.h>

#include <string.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, _QWORD *a2)
{
_QWORD *result; // rax

*a2 = a1[9];
a2[1] = a1[2];
a2[2] = a1[4];
a2[3] = a1[3];
a2[4] = a1[7];
result = a2 + 5;
a2[5] = a1[11];
return result;
}