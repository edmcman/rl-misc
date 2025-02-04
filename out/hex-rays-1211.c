#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <sys/ioctl.h>

#include <fcntl.h>

#include <errno.h>

#include <string.h>

# 1 
#include "defs.h"
const char * func0(const char *a1, char a2, char a3)
{
char *i; // rax

for ( i = strchr(a1, a2); i; i = strchr(i + 1, a2) )
*i = a3;
return a1;
}