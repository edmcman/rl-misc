
# 1 
#include "defs.h"
int * func0(int *a1, int *a2)
{
int *result; // rax
int v3; // [rsp+18h] [rbp-8h]

v3 = *a1;
*a1 = *a2;
result = a2;
*a2 = v3;
return result;
}