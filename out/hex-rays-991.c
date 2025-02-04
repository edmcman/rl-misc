#include <stdio.h>

#include <sys/types.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <errno.h>

#include <sys/syscall.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int a1, __int64 a2, __int64 a3)
{
return syscall(78LL, a1, a2, a3);
}