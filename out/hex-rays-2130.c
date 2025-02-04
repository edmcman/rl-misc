#include <sys/types.h>

#include <sys/socket.h>

#include <sys/stat.h>

#include <err.h>

#include <fcntl.h>

#include <limits.h>

#include <stdio.h>

#include <string.h>

#include <unistd.h>

# 1 
#include "defs.h"
int * func0(const char *a1, int *a2)
{
int *result; // rax
int v3; // [rsp+1Ch] [rbp-4h]

v3 = open("/dev/null", 0);
if ( v3 < 0 )
err(-1, "%s: open(/dev/null)", a1);
result = a2;
*a2 = v3;
return result;
}