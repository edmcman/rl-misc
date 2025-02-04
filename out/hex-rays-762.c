#include <stdio.h>

#include <sys/types.h>

#include <sys/uio.h>

#include <unistd.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
__int64 result; // rax
unsigned int i; // [rsp+2Ch] [rbp-4h]

*a3 = 1;
*a4 = 0;
for ( i = 0; ; ++i )
{
result = i;
if ( i >= a2 )
break;
if ( *(_BYTE *)(i + a1) == 10 )
{
++*a3;
*a4 = 0;
}
else
{
++*a4;
}
}
return result;
}