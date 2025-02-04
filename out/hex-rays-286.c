#include <time.h>

#include <stdio.h>

#include <stddef.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1)
{
__int64 v2; // [rsp+10h] [rbp-8h]

v2 = ((unsigned int)((*a1 << 13) ^ *a1) >> 17) ^ (*(_QWORD *)a1 << 13) ^ *(_QWORD *)a1;
*(_QWORD *)a1 = (32 * v2) ^ v2;
return (unsigned int)*(_QWORD *)a1;
}