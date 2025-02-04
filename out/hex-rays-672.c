#include <stdio.h>

#include <math.h>

# 1 
#include "defs.h"
unsigned __int64  func0(int *a1, _DWORD *a2, double a3)
{
unsigned __int64 result; // rax

if ( a3 >= 0.0 )
{
*a1 = (int)a3;
*a2 = (int)((a3 - (double)*a1) * 60.0 + 0.5);
result = (unsigned int)*a2;
if ( (_DWORD)result == 60 )
{
++*a1;
result = (unsigned __int64)a2;
*a2 = 0;
}
}
else
{
*a1 = -1;
result = (unsigned __int64)a2;
*a2 = -1;
}
return result;
}