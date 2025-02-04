#include <stdio.h>

#include <stddef.h>

#include <assert.h>

# 1 
#include "defs.h"
__int64  func0(_QWORD *a1, _QWORD *a2)
{
__int64 result; // rax

*a1 = *a2;
a1[1] = a2[1];
a1[2] = a2[2];
a1[3] = a2[3];
a1[4] = a2[4];
a1[5] = a2[5];
a1[6] = a2[6];
a1[7] = a2[7];
result = a2[8];
a1[8] = result;
return result;
}