#include <stdio.h>

#include <malloc.h>

#include <string.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdlib.h>

#include <ctype.h>

#include <errno.h>

# 1 
#include "defs.h"
_WORD * func0(_WORD *a1)
{
_WORD *result; // rax

result = a1;
*a1 = *a1 != 1;
return result;
}