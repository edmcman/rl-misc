
# 1 
#include "defs.h"
int * func0(unsigned __int16 a1, int a2, int *a3)
{
int *result; // rax

*a3 = 0;
result = a3;
*a3 = a1 | (a2 << 16);
return result;
}