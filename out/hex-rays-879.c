#include <string.h>

#include <stdlib.h>

#include <stdio.h>

#include <unistd.h>

#include <time.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <sys/socket.h>

#include <fcntl.h>

#include <dirent.h>

#include <regex.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
_BYTE *result; // rax

while ( *a2 )
*a1++ = *a2++;
result = a1;
*a1 = 0;
return result;
}