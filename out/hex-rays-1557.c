#include <assert.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(float *a1, float *a2, float *a3, float *a4)
{
if ( !a4 )
return 0LL;
if ( *a1 >= 0.0 )
{
if ( *a1 > *a4 )
{
if ( (float)(*a1 - *a4) > 0.005 )
return 0LL;
*a1 = *a4;
}
}
else
{
if ( (float)-*a1 > 0.005 )
return 0LL;
*a1 = 0.0;
}
if ( *a2 >= 0.0 )
{
if ( *a2 > a4[1] )
{
if ( (float)(*a2 - a4[1]) > 0.005 )
return 0LL;
*a2 = a4[1];
}
}
else
{
if ( (float)-*a2 > 0.005 )
return 0LL;
*a2 = 0.0;
}
if ( a4[2] == 0.0 )
{
*a3 = 0.0;
}
else if ( *a3 >= 0.0 )
{
if ( *a3 > a4[2] )
{
if ( (float)(*a3 - a4[2]) > 0.005 )
return 0LL;
*a3 = a4[2];
}
}
else
{
if ( (float)-*a3 > 0.005 )
return 0LL;
*a3 = 0.0;
}
return 1LL;
}