
# 1 
#include "defs.h"
float * func0(float *a1, float a2, float a3)
{
float *result; // rax

if ( a2 <= *a1 )
{
result = a1;
if ( *a1 > a3 )
{
result = a1;
*a1 = a3;
}
}
else
{
result = a1;
*a1 = a2;
}
return result;
}