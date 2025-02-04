#include <ctype.h>

#include <sys/sysmacros.h>

# 1 
#include "defs.h"
char * func0(const char *a1)
{
char *result; // rax

result = strrchr(a1, 112);
if ( result )
*result = 0;
return result;
}