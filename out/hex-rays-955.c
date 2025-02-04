
# 1 
#include "defs.h"
_DWORD * func0(_BYTE *a1, _DWORD *a2, _DWORD *a3)
{
_DWORD *result; // rax
int v5; // [rsp+1Ch] [rbp-Ch]
int v6; // [rsp+20h] [rbp-8h]
int v7; // [rsp+24h] [rbp-4h]

v5 = 1;
v6 = 0;
v7 = 0;
while ( *a1 )
{
if ( *a1 == 10 )
{
++v5;
v7 = 0;
}
else if ( ++v7 > v6 )
{
v6 = v7;
}
++a1;
}
*a2 = 8 * v6;
result = a3;
*a3 = 8 * v5;
return result;
}