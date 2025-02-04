
# 1 
#include "defs.h"
__int64  func0(int *a1, __int64 a2, int a3)
{
__int64 result; // rax
int j; // [rsp+14h] [rbp-Ch]
int i; // [rsp+18h] [rbp-8h]
unsigned int v6; // [rsp+1Ch] [rbp-4h]

if ( a3 <= 80 )
{
v6 = 0;
for ( i = 0; i <= 8; ++i )
{
for ( j = 0; j <= 8; ++j )
{
result = v6;
if ( v6 == a3 )
{
*a1 = j;
result = (unsigned int)i;
a1[1] = i;
return result;
}
++v6;
}
}
}
return result;
}