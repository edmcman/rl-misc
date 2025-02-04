#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(_DWORD *a1, _DWORD *a2)
{
__int64 result; // rax
int v3; // [rsp+14h] [rbp-Ch]
int v4; // [rsp+18h] [rbp-8h]
unsigned int v5; // [rsp+1Ch] [rbp-4h]

v3 = a2[1] * *a1 + a1[1] * a2[3];
v4 = *a2 * a1[2] + a1[3] * a2[2];
v5 = a2[1] * a1[2] + a1[3] * a2[3];
*a1 = *a2 * *a1 + a1[1] * a2[2];
a1[1] = v3;
a1[2] = v4;
result = v5;
a1[3] = v5;
return result;
}