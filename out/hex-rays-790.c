


# 1 
#include "defs.h"
int * func0(int a1, int *a2)
{
int *result; // rax

result = (int *)(unsigned int)*a2;
if ( a1 > (int)result )
{
result = a2;
*a2 = a1;
}
return result;
}