#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

#include <arpa/inet.h>

#include <time.h>

#include <ctype.h>

#include <glob.h>

#include <assert.h>

#include <inttypes.h>

#include <unistd.h>

#include <stdio.h>

#include <dirent.h>

#include <sys/stat.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, char a2)
{
_BYTE *result; // rax
_BYTE *i; // [rsp+Ch] [rbp-10h]
_BYTE *v4; // [rsp+14h] [rbp-8h]

v4 = a1;
for ( i = a1; *i; ++i )
{
*v4 = *i;
if ( a2 != *v4 )
++v4;
}
result = v4;
*v4 = 0;
return result;
}