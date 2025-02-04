
# 1 
#include "defs.h"
unsigned __int64  func0(int *a1, int *a2)
{
unsigned __int64 result; // rax
int v3; // [rsp+1Ch] [rbp-4h]

result = (unsigned int)*a2;
if ( *a1 > (int)result )
{
v3 = *a1;
*a1 = *a2;
result = (unsigned __int64)a2;
*a2 = v3;
}
return result;
}