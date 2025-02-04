#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <errno.h>

#include <assert.h>

# 1 
#include "defs.h"
char * func0(char *a1, const char *a2)
{
char *s; // [rsp+8h] [rbp-18h]
char *v4; // [rsp+18h] [rbp-8h]

s = a1;
if ( !a1 )
s = (char *)next_3035;
if ( !s )
return 0LL;
v4 = strpbrk(s, a2);
if ( v4 )
{
*v4 = 0;
next_3035 = (__int64)(v4 + 1);
}
else
{
next_3035 = 0LL;
}
return s;
}