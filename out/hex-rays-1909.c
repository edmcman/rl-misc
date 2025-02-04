#include <stdio.h>

#include <stdlib.h>

#include <errno.h>

#include <stdio.h>

#include <string.h>

#include <sys/param.h>

#include <sys/types.h>

#include <sys/socket.h>

#include <sys/un.h>

#include <unistd.h>

# 1 
#include "defs.h"
__int64  func0(unsigned __int8 *a1)
{
return (a1[3] << 24) + (a1[2] << 16) + (a1[1] << 8) + (unsigned int)*a1;
}