#include <regex.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <sys/types.h>

#include <string.h>

#include <assert.h>

# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, unsigned int a2)
{
_DWORD *result; // rax

result = (_DWORD *)(4LL * (a2 >> 5) + a1);
*result |= 1 << ((a2 & 0x1F) - 1);
return result;
}