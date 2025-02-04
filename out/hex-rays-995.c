#include <stdio.h>         /* Standard Libraries */

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(unsigned __int8 *a1)
{
__int64 result; // rax
unsigned __int8 v2; // [rsp+Fh] [rbp-9h]

v2 = *a1;
*a1 = a1[1];
result = v2;
a1[1] = v2;
return result;
}