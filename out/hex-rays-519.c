#include <stdlib.h>

#include <sys/types.h>

#include <unistd.h>

#include <assert.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax

result = a1 + 10;
*(_BYTE *)(a1 + 10) = 42;
return result;
}