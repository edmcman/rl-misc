#include <pthread.h>

#include <sys/time.h>

#include <unistd.h>

#include <stdlib.h>

#include <malloc.h>

#include <math.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, __int64 a3)
{
__int64 result; // rax
__int64 i; // [rsp+20h] [rbp-8h]

result = a1;
*(_QWORD *)(a2 + 8 * a1) = a1;
if ( a3 == 1 )
{
for ( i = 0LL; ; ++i )
{
result = i;
if ( i >= a1 )
break;
*(_QWORD *)(a2 + 8 * i) = i;
}
}
return result;
}