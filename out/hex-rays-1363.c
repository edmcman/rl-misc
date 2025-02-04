#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <dirent.h>

#include <search.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
int v2; // eax
_BYTE *v3; // rax
_BYTE *v4; // rax
_BYTE *v5; // rax
_BYTE *v7; // [rsp+8h] [rbp-18h]

v7 = a1 + 1;
*a1 = 34;
while ( *a2 )
{
v2 = (char)*a2;
if ( v2 == 34 )
{
*v7 = 92;
v4 = v7 + 1;
v7 += 2;
*v4 = 34;
}
else if ( v2 == 92 )
{
*v7 = 92;
v3 = v7 + 1;
v7 += 2;
*v3 = 92;
}
else
{
v5 = v7++;
*v5 = *a2;
}
++a2;
}
*v7 = 34;
v7[1] = 32;
return v7 + 2;
}