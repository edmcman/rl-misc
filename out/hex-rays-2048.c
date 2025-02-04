#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, _QWORD *a2)
{
_QWORD *result; // rax

*a1 = *a2;
a1[1] = a2[1];
result = a2;
a1[2] = a2[2];
return result;
}