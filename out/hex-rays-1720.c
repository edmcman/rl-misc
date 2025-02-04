
# 1 
#include "defs.h"
_BYTE * func0(int a1, _BYTE *a2)
{
_BYTE *v2; // rax
_BYTE *v3; // rax
_BYTE *result; // rax
int v6; // [rsp+Ch] [rbp-14h]

v6 = a1;
if ( a1 < 0 )
v6 = -a1;
do
{
v2 = a2++;
*v2 = v6 % 10 + 48;
v6 /= 10;
}
while ( v6 > 0 );
if ( a1 < 0 )
{
v3 = a2++;
*v3 = 45;
}
result = a2;
*a2 = 0;
return result;
}