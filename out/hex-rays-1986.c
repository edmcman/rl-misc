#include <stdlib.h>

#include <inttypes.h>

#include <stdio.h>

#include <string.h>

#include <time.h>

#include <stdlib.h>

#include <assert.h>

# 1 
#include "defs.h"
__int64  func0(int *a1, int a2)
{
int v3; // [rsp+18h] [rbp-4h]

v3 = *a1;
*a1 += a2;
return (v3 > *a1) ^ (unsigned __int8)(a2 < 0);
}