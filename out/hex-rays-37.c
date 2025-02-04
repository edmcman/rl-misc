#include <stdio.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <fcntl.h>

#include <signal.h>

# 1 
#include "defs.h"
int * func0(int *a1)
{
int *result; // rax

if ( *a1 >= 0 )
close(*a1);
result = a1;
*a1 = -1;
return result;
}