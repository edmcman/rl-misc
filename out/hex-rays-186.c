
# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2)
{
__int64 result; // rax
unsigned int i; // [rsp+14h] [rbp-8h]
int v4; // [rsp+18h] [rbp-4h]

v4 = 1;
for ( i = 0; ; ++i )
{
result = i;
if ( (int)i >= a2 )
break;
if ( v4 == 1 )
{
if ( *(_DWORD *)(4LL * (int)i + a1) )
{
if ( *(_DWORD *)(4LL * (int)i + a1) == 1 )
*(_DWORD *)(4LL * (int)i + a1) = 0;
}
else
{
++*(_DWORD *)(4LL * (int)i + a1);
v4 = 0;
}
}
}
return result;
}