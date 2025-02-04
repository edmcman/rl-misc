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
__int64  func0(__int64 a1, unsigned int a2)
{
__int64 result; // rax

*(_BYTE *)a1 = a2;
*(_WORD *)(a1 + 1) = a2 >> 8;
result = a1 + 3;
*(_BYTE *)(a1 + 3) = HIBYTE(a2);
return result;
}