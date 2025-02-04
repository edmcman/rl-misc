#include <stdio.h>

# 1 
#include "defs.h"
int * func0(int *a1, int *a2)
{
int *result; // rax
int v3; // [rsp+1Ch] [rbp-4h]

v3 = *a2;
*a2 = *a1;
result = a1;
*a1 = v3;
return result;
}