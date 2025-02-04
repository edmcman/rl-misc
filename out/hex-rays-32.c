
# 1 
#include "defs.h"
_BYTE * func0(int a1, unsigned int a2, _BYTE *a3, int a4)
{
int v7; // [rsp+20h] [rbp-4h]

v7 = 0;
if ( a4 )
{
*a3 = 45;
v7 = 1;
}
while ( a1 > 0 )
{
a3[v7] = a2 / a1 + 48;
a2 %= (unsigned int)a1;
a1 /= 10;
++v7;
}
a3[v7] = 0;
return a3;
}