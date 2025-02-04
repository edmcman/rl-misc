#include <stdio.h>

# 1 
#include "defs.h"
_BYTE * func0(int a1, _BYTE *a2)
{
_BYTE *result; // rax
int v3; // [rsp+Ch] [rbp-14h]
int i; // [rsp+1Ch] [rbp-4h]

v3 = a1;
if ( a1 <= 0 )
{
*a2 = 45;
v3 = -a1;
}
else
{
*a2 = 43;
}
for ( i = 10; i > 0; --i )
{
a2[i] = v3 % 10 + 48;
v3 /= 10;
}
result = a2 + 11;
a2[11] = 0;
return result;
}