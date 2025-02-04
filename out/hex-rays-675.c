
# 1 
#include "defs.h"
unsigned __int8 * func0(int a1, int a2, unsigned __int8 *a3, int a4, unsigned __int8 *a5, int *a6)
{
unsigned __int8 *result; // rax

if ( a2 || !a5 || a4 <= 3 )
{
*a6 = a2;
result = a3;
}
else if ( a1 == *a5 )
{
*a6 = a4 - 1;
result = a5 + 1;
}
else
{
*a6 = a4;
result = a5;
}
return result;
}