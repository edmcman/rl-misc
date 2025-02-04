#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(int *a1, int *a2)
{
unsigned int v3; // [rsp+1Ch] [rbp-4h]

v3 = 0;
if ( *a1 < 0 )
{
*a1 = 0;
v3 = 1;
}
if ( *a2 < 0 )
{
*a2 = 0;
++v3;
}
if ( *a1 > 66 )
{
*a1 = 66;
++v3;
}
if ( *a2 > 16 )
{
*a2 = 16;
++v3;
}
return v3;
}