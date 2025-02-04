#include <stdio.h>

# 1 
#include "defs.h"
int * func0(int *a1)
{
int *result; // rax

result = a1;
*a1 /= 10;
return result;
}