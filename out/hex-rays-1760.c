#include <stdio.h>

# 1 
#include "defs.h"
unsigned __int64  func0(signed int *a1, _DWORD *a2)
{
unsigned __int64 result; // rax
signed int v3; // [rsp+18h] [rbp-8h]
int i; // [rsp+1Ch] [rbp-4h]

result = (unsigned int)*a1;
v3 = *a1;
for ( i = 1; i <= 3; ++i )
{
if ( v3 >= a1[i] )
{
result = (unsigned int)a1[i];
if ( v3 == (_DWORD)result )
{
result = (unsigned __int64)&a2[i];
*(_DWORD *)result = 1;
}
}
else
{
v3 = a1[i];
*a2 = 0;
a2[1] = 0;
a2[2] = 0;
a2[3] = 0;
result = (unsigned __int64)&a2[i];
*(_DWORD *)result = 1;
}
}
return result;
}