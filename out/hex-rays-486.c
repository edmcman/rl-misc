#include <elf.h>

#include <errno.h>

#include <fcntl.h>

#include <stdarg.h>

#include <stdbool.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/mman.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <unistd.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int a1, _DWORD *a2, char a3)
{
__int64 result; // rax

if ( a3 )
result = (a1 >> 8) & 0xFF00 | (a1 << 8) & 0xFF0000 | (a1 << 24) | HIBYTE(a1);
else
result = a1;
*a2 = result;
return result;
}