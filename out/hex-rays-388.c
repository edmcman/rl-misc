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
char v3; // [rsp+Fh] [rbp-9h]
char v4; // [rsp+Fh] [rbp-9h]
unsigned __int8 v5; // [rsp+Fh] [rbp-9h]

v2 = *a1;
*a1 = a1[7];
a1[7] = v2;
v3 = a1[1];
a1[1] = a1[6];
a1[6] = v3;
v4 = a1[2];
a1[2] = a1[5];
a1[5] = v4;
v5 = a1[3];
a1[3] = a1[4];
result = v5;
a1[4] = v5;
return result;
}