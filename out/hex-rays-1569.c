#include <signal.h>

#include <stdlib.h>

#include <stdio.h>

#include <math.h>

#include <assert.h>

#include <errno.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <fcntl.h>              /* Obtain O_* constant definitions */

# 1 
#include "defs.h"
int * func0(int *a1)
{
int *result; // rax

result = (int *)(unsigned int)*a1;
if ( (int)result >= 0 )
{
close(*a1);
result = a1;
*a1 = -1;
}
return result;
}