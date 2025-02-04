#include <ncurses.h>

# 1 
#include "defs.h"
_BOOL8  func0(int a1, int a2, int *a3, int a4)
{
int v5; // [rsp+18h] [rbp-Ch]
int v6; // [rsp+20h] [rbp-4h]

if ( a2 > a1 )
{
if ( *a3 + a4 >= 0 )
{
if ( a2 - a1 > *a3 + a4 )
v5 = *a3 + a4;
else
v5 = a2 - a1;
}
else
{
v5 = 0;
}
}
else
{
v5 = 0;
}
v6 = *a3;
*a3 = v5;
return v6 != v5;
}