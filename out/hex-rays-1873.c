
# 1 
#include "defs.h"
int * func0(int a1, int *a2, int *a3)
{
int *result; // rax

*a2 = -1;
result = a3;
*a3 = 10;
while ( a1 )
{
if ( a1 % 10 > *a2 )
*a2 = a1 % 10;
if ( a1 % 10 < *a3 )
*a3 = a1 % 10;
result = (int *)(unsigned int)(a1 / 10);
a1 /= 10;
}
return result;
}