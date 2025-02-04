#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

#include <errno.h>

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

# 1 
#include "defs.h"
int * func0(const char *a1, int *a2)
{
int *result; // rax
int v3; // edx

*a2 = chdir(a1);
result = (int *)(unsigned int)*a2;
if ( (_DWORD)result )
{
v3 = *_errno_location();
result = a2;
*a2 = v3;
}
return result;
}