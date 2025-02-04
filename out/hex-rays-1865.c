#include <pthread.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#include <stdbool.h>

#include <assert.h>

#include <errno.h>

#include <unistd.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2)
{
unsigned int v3; // [rsp+18h] [rbp-4h]

v3 = (1 << (a2 & 0x1F)) & *(_DWORD *)(4LL * (a2 >> 5) + a1);
*(_DWORD *)(4LL * (a2 >> 5) + a1) |= 1 << (a2 & 0x1F);
return v3;
}