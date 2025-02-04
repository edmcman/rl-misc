#include <stdio.h>

# 1 
#include "defs.h"
int * func0(int a1, int a2, int *a3, int *a4)
{
int *result; // rax

*a3 = a1 / a2;
result = a4;
*a4 = a1 % a2;
return result;
}