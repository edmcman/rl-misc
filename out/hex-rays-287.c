#include <sys/inotify.h>

#include <errno.h>

#include <unistd.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(const char *a1, int *a2, int *a3)
{
__int64 result; // rax

*a2 = inotify_init();
if ( *a2 < 0 )
return 0xFFFFFFFFLL;
*a3 = inotify_add_watch(*a2, a1, 0x2C02u);
if ( *a3 >= 0 )
result = 0LL;
else
result = 0xFFFFFFFFLL;
return result;
}