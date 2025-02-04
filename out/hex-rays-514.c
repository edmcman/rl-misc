#include <math.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1)
{
_QWORD *result; // rax

result = a1;
a1[1] = *a1;
return result;
}