#include <stdio.h>

# 1 
#include "defs.h"
int * func0(int *a1, int *a2, int *a3)
{
int *result; // rax
int v4; // [rsp+1Ch] [rbp-Ch]
int v5; // [rsp+20h] [rbp-8h]

v4 = *a1;
v5 = *a2;
*a1 = *a3;
*a2 = v4;
result = a3;
*a3 = v5;
return result;
}