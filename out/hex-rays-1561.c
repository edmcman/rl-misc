#include <stdlib.h>

#include <assert.h>

#include <sys/eventfd.h>

#include <errno.h>

#include <unistd.h>

# 1 
#include "defs.h"
int * func0(int *a1)
{
int *result; // rax

close(*a1);
result = a1;
*a1 = 0;
return result;
}