#include <stdio.h>

#include <string.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_BYTE * func0(char *a1)
{
char v1; // dl
char v2; // cl
char v3; // cl
char v4; // cl
char v5; // cl
char v6; // cl
char v7; // cl
char v8; // cl
_BYTE *result; // rax

v1 = *a1;
a1[1] += *a1;
*a1 = a1[1] + v1;
v2 = a1[2];
a1[3] += v2;
a1[2] = v2 + a1[3];
v3 = a1[4];
a1[5] += v3;
a1[4] = v3 + a1[5];
v4 = a1[6];
a1[7] += v4;
a1[6] = v4 + a1[7];
v5 = a1[8];
a1[9] += v5;
a1[8] = v5 + a1[9];
v6 = a1[10];
a1[11] += v6;
a1[10] = v6 + a1[11];
v7 = a1[12];
a1[13] += v7;
a1[12] = v7 + a1[13];
v8 = a1[14];
a1[15] += v8;
result = a1 + 14;
a1[14] = v8 + a1[15];
return result;
}