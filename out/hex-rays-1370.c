
# 1 
#include "defs.h"
unsigned __int64  func0(int a1, _DWORD *a2)
{
unsigned __int64 result; // rax
int i; // [rsp+1Ch] [rbp-4h]

result = (unsigned __int64)a2;
*a2 = 1;
if ( a1 > 0 )
{
for ( i = 0; ; ++i )
{
result = (unsigned int)i;
if ( i >= a1 )
break;
*a2 *= 2;
}
}
return result;
}