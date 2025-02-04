






# 1 
#include "defs.h"
_QWORD * func0(_QWORD *a1)
{
_QWORD *result; // rax

a1[2] = 0LL;
a1[1] = a1[2];
result = a1;
*a1 = a1[1];
return result;
}