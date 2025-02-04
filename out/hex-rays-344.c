
# 1 
#include "defs.h"
double  func0(_DWORD *a1, double result, double a3, double a4)
{
double v4; // [rsp+28h] [rbp-8h]

v4 = 0.0;
if ( a3 <= result )
{
if ( result > a3 )
{
if ( result <= 0.0 )
{
while ( v4 >= result )
v4 = v4 - a4;
}
else
{
while ( result - a4 >= v4 )
v4 = v4 + a4;
if ( result == v4 )
v4 = v4 - a4;
}
while ( 1 )
{
result = v4;
if ( v4 <= a3 )
break;
++*a1;
v4 = v4 - a4;
}
}
}
else
{
if ( result < 0.0 )
{
while ( v4 >= result + a4 )
v4 = v4 - a4;
if ( result == v4 )
v4 = v4 + a4;
}
else
{
while ( result >= v4 )
v4 = v4 + a4;
}
while ( 1 )
{
result = a3;
if ( a3 <= v4 )
break;
++*a1;
v4 = v4 + a4;
}
}
return result;
}