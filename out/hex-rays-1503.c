#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
_DWORD * func0(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
_DWORD *result; // rax

while ( a1 > 0 )
{
if ( a1 <= 99 )
{
if ( a1 <= 89 )
{
if ( a1 <= 49 )
{
if ( a1 <= 39 )
{
if ( a1 <= 9 )
{
if ( a1 <= 8 )
{
if ( a1 <= 4 )
{
if ( a1 <= 3 )
{
result = a2;
++*a2;
--a1;
}
else
{
++*a3;
result = a2;
++*a2;
a1 -= 4;
}
}
else
{
result = a3;
++*a3;
a1 -= 5;
}
}
else
{
++*a4;
result = a2;
++*a2;
a1 -= 9;
}
}
else
{
result = a4;
++*a4;
a1 -= 10;
}
}
else
{
++*a5;
result = a4;
++*a4;
a1 -= 40;
}
}
else
{
result = a5;
++*a5;
a1 -= 50;
}
}
else
{
++*a6;
result = a4;
++*a4;
a1 -= 90;
}
}
else
{
result = a6;
++*a6;
a1 -= 100;
}
}
return result;
}