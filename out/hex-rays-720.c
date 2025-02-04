
# 1 
#include "defs.h"
int * func0(int *a1, int *a2, int *a3)
{
int *result; // rax
int v4; // [rsp+24h] [rbp-4h]

v4 = *a3;
*a3 = *a2;
*a2 = *a1;
result = a1;
*a1 = v4;
return result;
}