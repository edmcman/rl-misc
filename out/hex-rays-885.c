#include <sys/types.h>

#include <sys/stat.h>

#include <sys/mman.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdio.h>

#include <stdint.h>

#include <stdlib.h>

#include <stddef.h>

#include <stdarg.h>

#include <math.h>

#include <stdbool.h>

#include <string.h>

#include <ctype.h>

# 1 
#include "defs.h"
_DWORD * func0(_DWORD *a1, _DWORD *a2)
{
_DWORD *v2; // rdx
_DWORD *v3; // rax
_DWORD *v6; // [rsp+18h] [rbp-8h]

v6 = a1;
do
{
v2 = a2++;
v3 = v6++;
*v3 = *v2;
}
while ( *v3 );
return a1;
}