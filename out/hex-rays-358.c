#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
double * func0(double *a1, double *a2, double *a3)
{
double *result; // rax

if ( *a3 <= *a2 || *a3 <= *a1 )
{
if ( *a2 <= *a1 || *a2 <= *a3 )
{
result = a2;
if ( *a1 > *a2 )
{
result = a3;
if ( *a1 > *a3 )
{
result = a1;
*a1 = *a3;
}
}
}
else
{
result = a2;
*a2 = *a1;
}
}
else
{
result = a3;
*a3 = *a2;
}
return result;
}