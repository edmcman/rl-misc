
# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, unsigned int a3, double *a4)
{
__int64 result; // rax
int i; // [rsp+2Ch] [rbp-4h]

*a4 = 0.0;
for ( i = 0; ; ++i )
{
result = a3;
if ( (int)a3 <= i )
break;
*a4 = *(double *)(8LL * i + a2) * *(double *)(8LL * i + a1) + *a4;
}
return result;
}