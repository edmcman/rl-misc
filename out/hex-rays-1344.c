#include <sys/mman.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <errno.h>

#include <sys/syscall.h>

#include <stdarg.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
while ( 1 )
{
*a1 = *a2;
if ( !*a1 )
break;
++a2;
++a1;
}
return a1;
}