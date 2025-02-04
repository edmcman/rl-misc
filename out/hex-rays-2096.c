#include <stddef.h>

#include <stdlib.h>

#include <string.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <limits.h>

#include <unistd.h>

#include <fcntl.h>

#include <dirent.h>

#include <stdio.h>

#include <errno.h>

# 1 
#include "defs.h"
__int64  func0(int a1, _DWORD *a2)
{
__int64 result; // rax

if ( close(a1) >= 0 )
result = 0LL;
else
result = (unsigned int)*_errno_location();
*a2 = result;
return result;
}