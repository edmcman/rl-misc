#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <stdio.h>

#include <errno.h>

#include <sys/stat.h>

#include <sys/types.h>

#include <unistd.h>

#include <time.h>

#include <dirent.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
while ( *a2 )
*a1++ = *a2++;
*a1 = 0;
return a1;
}