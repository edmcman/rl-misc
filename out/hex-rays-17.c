#include <math.h>

# 1 
#include "defs.h"
unsigned __int64  func0(int *a1, int a2, int a3)
{
unsigned __int64 result; // rax
int v4; // edx

if ( *a1 >= 0 )
{
result = (unsigned int)*a1;
if ( a3 <= (int)result )
{
if ( a2 >= 0 )
result = (unsigned int)a3;
else
result = (unsigned int)(a3 - 1);
*a1 = result;
}
}
else
{
*a1 += a3;
result = (unsigned int)*a1;
if ( (result & 0x80000000) != 0LL )
{
if ( a2 >= 0 )
v4 = 0;
else
v4 = -1;
result = (unsigned __int64)a1;
*a1 = v4;
}
}
return result;
}