#include <stddef.h>   //for NULL

# 1 
#include "defs.h"
unsigned __int64  func0(_BYTE *a1, int a2)
{
unsigned __int64 result; // rax
_BYTE *v3; // [rsp+4h] [rbp-18h]
int v4; // [rsp+14h] [rbp-8h]
int v5; // [rsp+14h] [rbp-8h]
int v6; // [rsp+18h] [rbp-4h]

v3 = a1;
v4 = a2;
v6 = 0;
if ( a2 )
{
while ( v4 )
{
v4 /= 10;
++v6;
}
v5 = a2;
if ( a2 < 0 )
{
v3 = a1 + 1;
*a1 = 45;
v5 = -a2;
}
result = (unsigned __int64)&v3[v6];
*(_BYTE *)result = 0;
while ( v5 )
{
v3[v6 - 1] = v5 % 10 + 48;
result = (unsigned int)(v5 / 10);
v5 /= 10;
--v6;
}
}
else
{
*a1 = 48;
result = (unsigned __int64)(a1 + 1);
a1[1] = 0;
}
return result;
}