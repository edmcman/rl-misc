#include <stdio.h>

#include <stdlib.h>

#include <math.h>

# 1 
#include "defs.h"
_QWORD * func0(double *a1, _QWORD *a2)
{
_QWORD *result; // rax
double v3; // [rsp+18h] [rbp-8h]

result = a2;
if ( *a1 > *(double *)a2 )
{
v3 = *a1;
*a1 = *(double *)a2;
result = a2;
*(double *)a2 = v3;
}
return result;
}