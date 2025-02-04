
# 1 
#include "defs.h"
__int64  func0(float *a1, float *a2, float a3, float a4)
{
unsigned int v5; // [rsp+20h] [rbp-8h]
float v6; // [rsp+24h] [rbp-4h]
float v7; // [rsp+24h] [rbp-4h]

v5 = 1;
if ( a3 >= 0.0 )
{
if ( a3 <= 0.0 )
{
if ( a4 < 0.0 )
v5 = 0;
}
else
{
v7 = a4 / a3;
if ( *a1 <= (float)(a4 / a3) )
{
if ( *a2 > v7 )
*a2 = v7;
}
else
{
v5 = 0;
}
}
}
else
{
v6 = a4 / a3;
if ( (float)(a4 / a3) <= *a2 )
{
if ( v6 > *a1 )
*a1 = v6;
}
else
{
v5 = 0;
}
}
return v5;
}