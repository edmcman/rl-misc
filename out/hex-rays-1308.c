#include <stdarg.h>

# 1 
#include "defs.h"
_BYTE * func0(__int64 a1, __int64 a2)
{
_BYTE *v2; // rax
_BYTE *v3; // rax
int v5; // [rsp+10h] [rbp-10h]
int v6; // [rsp+14h] [rbp-Ch]
_BYTE *v7; // [rsp+18h] [rbp-8h]

*(_BYTE *)(a1 + 23) = 0;
v7 = (_BYTE *)(a1 + 22);
v5 = a2;
if ( (int)a2 < 0 )
v5 = -(int)a2;
do
{
v6 = v5 % 10;
v5 /= 10;
v2 = v7--;
*v2 = v6 + 48;
}
while ( v5 );
if ( a2 < 0 )
{
v3 = v7--;
*v3 = 45;
}
return v7 + 1;
}