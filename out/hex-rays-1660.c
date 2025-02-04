#include <unistd.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <stdarg.h>

#include <sys/sysinfo.h>

# 1 
#include "defs.h"
__int64  func0(char *a1)
{
__int64 result; // rax
char *v2; // [rsp+0h] [rbp-8h]

v2 = a1;
if ( a1 )
{
while ( 1 )
{
result = (unsigned __int8)*v2;
if ( !(_BYTE)result )
break;
if ( *v2 > 96 && *v2 <= 122 )
*v2 -= 32;
++v2;
}
}
return result;
}