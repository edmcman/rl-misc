#include <stdio.h>

#include <stdlib.h>

#include <memory.h>

# 1 
#include "defs.h"
__int64  func0(unsigned __int8 *a1)
{
return (((*((unsigned __int16 *)a1 + 1) << 8) | a1[1]) << 8) | (unsigned int)*a1;
}