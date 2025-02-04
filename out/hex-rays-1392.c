#include <fcntl.h>

#include <sys/mman.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

# 1 
#include "defs.h"
int  func0(void *a1, const char *a2, char a3, __int64 a4)
{
if ( a3 )
unlink(a2);
return munmap(a1, 4 * a4);
}