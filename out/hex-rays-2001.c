#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1, _QWORD *a2)
{
_QWORD *result; // rax
int v3; // [rsp+1Ch] [rbp-4h]

v3 = *a1;
*a1 = *a2;
result = a2;
*a2 = v3;
return result;
}