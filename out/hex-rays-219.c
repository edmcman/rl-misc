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
__int64  func0(_BYTE *a1, _BYTE *a2, int a3)
{
unsigned int i; // [rsp+20h] [rbp-14h]

for ( i = 0; *a2 && (int)i < a3; ++i )
*a1++ = *a2++;
*a1 = 0;
return i;
}