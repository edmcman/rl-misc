#include <string.h>

#include <stdlib.h>

#include <errno.h>

#include <sys/time.h>

# 1 
#include "defs.h"
int * func0(int a1, int *a2, int *a3, int *a4)
{
int *result; // rax

*a4 = a1 / 3600;
*a3 = a1 % 3600 / 60;
result = a2;
*a2 = a1 % 3600 % 60;
return result;
}