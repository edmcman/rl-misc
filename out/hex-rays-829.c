#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
int * func0(int *a1)
{
int *result; // rax
int i; // [rsp+Ch] [rbp-Ch]
int v3; // [rsp+10h] [rbp-8h]
int v4; // [rsp+14h] [rbp-4h]

v3 = *a1;
v4 = (unsigned __int8)*a1;
for ( i = 0; i <= 2; ++i )
{
v3 >>= 8;
v4 = (unsigned __int8)v3 | (v4 << 8);
}
result = a1;
*a1 = v4;
return result;
}