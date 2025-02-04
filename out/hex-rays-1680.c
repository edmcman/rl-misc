
# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, _DWORD *a2, float a3)
{
unsigned __int64 result; // rax

*(float *)(4LL * (int)(*a2)++ + a1) = a3;
result = (unsigned int)a2[2];
if ( *a2 >= (int)result )
{
result = (unsigned __int64)a2;
*a2 -= a2[2];
}
return result;
}