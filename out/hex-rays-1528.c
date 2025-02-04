#include <stdlib.h>

#include <string.h>

#include <sys/shm.h>

#include <sys/types.h>

# 1 
#include "defs.h"
float  func0(__int64 a1, __int64 a2)
{
return *(float *)(4 * a2 + a1);
}