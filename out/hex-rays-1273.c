#include <math.h>

#include <stdint.h>

#include <stdlib.h>

#include <string.h>

#include <memory.h>

# 1 
#include "defs.h"
int * func0(int *a1, int a2, int a3, int a4, int a5)
{
int *result; // rax
int v6; // [rsp+Ch] [rbp-Ch]

v6 = a2;
if ( a5 )
{
a1[3] = a2 % a5;
v6 = a2 / a5;
}
else
{
a1[3] = 0;
}
if ( a4 )
{
a1[2] = v6 % a4;
v6 /= a4;
}
else
{
a1[2] = 0;
}
a1[1] = v6 % a3;
result = a1;
*a1 = v6 / a3;
return result;
}