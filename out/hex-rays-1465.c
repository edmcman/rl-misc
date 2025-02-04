#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(float *a1)
{
int i; // [rsp+10h] [rbp-8h]
int v3; // [rsp+14h] [rbp-4h]

v3 = (int)(float)(a1[1] - *a1);
if ( !v3 )
return 0LL;
for ( i = 0; i <= 8; ++i )
{
if ( (float)((float)v3 + a1[i]) != a1[i + 1] )
return 0LL;
}
return 1LL;
}