
# 1 
#include "defs.h"
__int64  func0(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
unsigned __int8 *v3; // rdx
unsigned __int8 *v4; // rax
__int64 result; // rax
unsigned int i; // [rsp+20h] [rbp-4h]

for ( i = 0; ; ++i )
{
result = *a1;
if ( !(_BYTE)result )
break;
result = i;
if ( (int)i >= a3 )
break;
v3 = a2++;
v4 = a1++;
*v4 = *v3;
}
return result;
}