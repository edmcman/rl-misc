#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
int * func0(int *a1)
{
int *result; // rax
int v2; // [rsp+10h] [rbp-8h]
int i; // [rsp+14h] [rbp-4h]

v2 = *a1;
for ( i = 1; (i & v2) != 0; i *= 2 )
v2 ^= i;
result = a1;
*a1 = i ^ v2;
return result;
}