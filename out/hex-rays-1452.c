#include <sys/syscall.h>

#include <sys/select.h>

#include <signal.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, int a2, int a3)
{
__int64 result; // rax
int v5; // [rsp+1Ch] [rbp-4h]

if ( a3 >= 0 )
{
lseek(a3, 0LL, 0);
v5 = read(a3, a1, (unsigned int)(a2 - 1));
if ( v5 > 0 )
{
a1[v5] = 0;
if ( a1[v5 - 1] == 10 )
a1[v5 - 1] = 0;
result = (unsigned int)v5;
}
else
{
*a1 = 0;
result = 0LL;
}
}
else
{
*a1 = 0;
result = 0LL;
}
return result;
}