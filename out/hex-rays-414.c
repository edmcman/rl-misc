#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <errno.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

#include <signal.h>

#include <limits.h>

# 1 
#include "defs.h"
__int64  func0(int a1, char *a2, __int64 a3)
{
__int64 v4; // [rsp+8h] [rbp-38h]
__int64 nbytes; // [rsp+30h] [rbp-10h]
ssize_t v7; // [rsp+38h] [rbp-8h]

v4 = a3;
nbytes = a3;
while ( nbytes > 0 )
{
v7 = read(a1, a2, nbytes);
if ( v7 <= 0 )
return 0xFFFFFFFFLL;
nbytes -= v7;
a2 += v7;
}
return v4;
}