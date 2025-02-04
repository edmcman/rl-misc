#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, _QWORD *a2)
{
_QWORD *result; // rax

*a1 = *a2;
a1[1] = a2[1];
a1[2] = a2[2];
a1[3] = a2[3];
a1[4] = a2[4];
a1[5] = a2[5];
a1[6] = a2[6];
a1[7] = a2[7];
result = a1 + 6;
a1[8] = a2[8];
return result;
}