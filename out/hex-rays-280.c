#include <stdio.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, unsigned int a2, int *a3)
{
unsigned __int64 result; // rax
int i; // [rsp+24h] [rbp-4h]

for ( i = *a3; ; ++i )
{
result = a2;
if ( (int)a2 < i )
break;
if ( *(_DWORD *)(4LL * i + a1) )
{
result = (unsigned __int64)a3;
*a3 = i;
return result;
}
}
return result;
}