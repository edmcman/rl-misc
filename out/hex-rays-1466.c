
# 1 
#include "defs.h"
unsigned __int64  func0(int *a1, _DWORD *a2)
{
unsigned __int64 result; // rax
int i; // [rsp+1Ch] [rbp-4h]

result = (unsigned int)*a1;
for ( i = *a1; i > 0; --i )
{
result = (unsigned int)(*a1 % i);
if ( !(_DWORD)result )
{
result = (unsigned int)(*a2 % i);
if ( !(_DWORD)result )
{
*a1 /= i;
result = (unsigned __int64)a2;
*a2 /= i;
return result;
}
}
}
return result;
}