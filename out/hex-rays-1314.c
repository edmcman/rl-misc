#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include <errno.h>

#include <getopt.h>

#include <limits.h>

#include <sys/types.h>

#include <sys/wait.h>

#include <sys/select.h>

#include <unistd.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, char *a2)
{
char *v2; // rax
_BYTE *v3; // rax
_BYTE *v4; // rax
_BYTE *v5; // rax
_BYTE *v8; // [rsp+8h] [rbp-18h]
_BYTE *v9; // [rsp+8h] [rbp-18h]
char v10; // [rsp+1Fh] [rbp-1h]

v8 = a1 + 1;
*a1 = 39;
while ( 1 )
{
v2 = a2++;
v10 = *v2;
if ( *v2 == 39 )
{
*v8 = 39;
v8[1] = 92;
v3 = v8 + 2;
v8 += 3;
*v3 = 39;
goto LABEL_6;
}
if ( !v10 )
break;
LABEL_6:
v5 = v8++;
*v5 = v10;
}
v4 = v8;
v9 = v8 + 1;
*v4 = 39;
*v9 = 0;
return v9;
}