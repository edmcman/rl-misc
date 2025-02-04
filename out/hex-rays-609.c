
# 1 
#include "defs.h"
unsigned int * func0(unsigned int *a1, unsigned int a2, unsigned int a3)
{
unsigned int *result; // rax

if ( a3 > *a1 )
{
result = (unsigned int *)*a1;
if ( a2 >= (unsigned int)result )
{
result = a1;
*a1 = a2;
}
}
else
{
result = a1;
*a1 = a3;
}
return result;
}