
# 1 
#include "defs.h"
__int16 * func0(__int16 *a1, __int16 a2, __int16 a3)
{
__int16 *result; // rax

if ( a3 > *a1 )
{
result = (__int16 *)(unsigned __int16)*a1;
if ( a2 >= (__int16)result )
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