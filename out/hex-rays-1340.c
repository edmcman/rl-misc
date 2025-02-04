#include <stdlib.h>

#include <stdint.h>

#include <stdio.h>

#include <stdbool.h>

#include <string.h>

#include <unistd.h>

#include <fcntl.h>

# 1 
#include "defs.h"
__int64  func0(void *a1, int a2, int a3)
{
__int64 result; // rax
unsigned int v4; // [rsp+1Ch] [rbp-4h]

v4 = read(a2, a1, a3);
if ( v4 )
result = v4;
else
result = 0LL;
return result;
}