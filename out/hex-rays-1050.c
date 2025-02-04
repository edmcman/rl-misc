#include <unistd.h>

#include <fcntl.h>

#include <sys/mman.h>

#include <elf.h>

#include <stdlib.h>

#include <stdint.h>

# 1 
#include "defs.h"
char *func0(char *dest, const char *src)
{
__int64 i; // [rsp+18h] [rbp-8h]

for ( i = 0LL; src[i]; ++i )
dest[i] = src[i];
dest[i] = 0;
return &dest[i];
}