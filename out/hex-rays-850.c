#include <string.h>

#include <float.h>

# 1 
#include "defs.h"
unsigned __int64  func0(float *a1, int *a2, __int64 a3, int a4)
{
unsigned __int64 result; // rax
float v5; // [rsp+20h] [rbp-Ch]
int v6; // [rsp+24h] [rbp-8h]
int i; // [rsp+28h] [rbp-4h]

v5 = -3.4028235e38;
v6 = -1;
for ( i = 0; ; ++i )
{
result = (unsigned int)i;
if ( i >= a4 )
break;
if ( *(float *)(4LL * i + a3) > v5 )
{
v5 = *(float *)(4LL * i + a3);
v6 = i;
}
}
if ( a1 )
{
result = (unsigned __int64)a1;
*a1 = v5;
}
if ( a2 )
{
result = (unsigned __int64)a2;
*a2 = v6;
}
return result;
}