#include <assert.h>

#include <ctype.h>

#include <float.h>

#include <limits.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
#include "defs.h"
char * func0(char *a1)
{
char v1; // al
char *i; // [rsp+0h] [rbp-18h]

for ( i = a1; *i; ++i )
{
if ( *i <= 96 || *i > 122 )
v1 = *i;
else
v1 = *i - 32;
*i = v1;
}
return a1;
}