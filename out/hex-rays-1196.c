#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(char *a1)
{
__int64 result; // rax
char v2; // [rsp+Fh] [rbp-9h]
unsigned __int8 v3; // [rsp+Fh] [rbp-9h]

v2 = *a1;
*a1 = a1[3];
a1[3] = v2;
v3 = a1[1];
a1[1] = a1[2];
result = v3;
a1[2] = v3;
return result;
}