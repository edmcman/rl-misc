#include <sys/types.h>

#include <dirent.h>

#include <regex.h>

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _BYTE *a2)
{
int v2; // eax
_BYTE *v3; // rax
_BYTE *v4; // rax
_BYTE *v5; // rax
_BYTE *v6; // rax
_BYTE *result; // rax
_BYTE *v9; // [rsp+18h] [rbp-8h]

v9 = a1 + 1;
*a1 = 94;
while ( *a2 )
{
v2 = (char)*a2;
if ( v2 == 63 )
{
v5 = v9++;
*v5 = 46;
}
else
{
if ( v2 > 63 )
goto LABEL_10;
if ( v2 == 42 )
{
*v9 = 46;
v3 = v9 + 1;
v9 += 2;
*v3 = 42;
goto LABEL_11;
}
if ( v2 == 46 )
{
*v9 = 92;
v4 = v9 + 1;
v9 += 2;
*v4 = 46;
}
else
{
LABEL_10:
v6 = v9++;
*v6 = *a2;
}
}
LABEL_11:
++a2;
}
*v9 = 36;
result = v9 + 1;
v9[1] = 0;
return result;
}