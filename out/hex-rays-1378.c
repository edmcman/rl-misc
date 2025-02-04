
# 1 
#include "defs.h"
__int64  func0(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, unsigned int *a5)
{
__int64 result; // rax
int i; // [rsp+34h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = *a5;
if ( i >= (int)result )
break;
if ( (*(int *)(4LL * i + a1) <= 64 || *(int *)(4LL * i + a1) > 90)
&& (*(int *)(4LL * i + a1) <= 96 || *(int *)(4LL * i + a1) > 122) )
{
if ( *(int *)(4LL * i + a1) < 0 || *(int *)(4LL * i + a1) > 9 )
++*a4;
else
++*a3;
}
else
{
++*a2;
}
}
return result;
}