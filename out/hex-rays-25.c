
# 1 
#include "defs.h"
__int64  func0(double *a1, int a2, double *a3)
{
__int64 result; // rax
int i; // [rsp+24h] [rbp-4h]

*a3 = *a1;
for ( i = 1; ; ++i )
{
result = (unsigned int)i;
if ( i >= a2 )
break;
if ( *a3 > a1[i] )
*a3 = a1[i];
}
return result;
}