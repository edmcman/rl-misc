#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_BYTE * func0(char *a1)
{
_BYTE *result; // rax
char v2; // [rsp+10h] [rbp-8h]
char v3; // [rsp+10h] [rbp-8h]

v2 = *a1;
*a1 = a1[3];
a1[3] = v2;
v3 = a1[1];
a1[1] = a1[2];
result = a1 + 2;
a1[2] = v3;
return result;
}