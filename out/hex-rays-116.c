#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <stdio.h>

#include <errno.h>

#include <sys/file.h>

#include <unistd.h>

#include <time.h>

#include <stdlib.h>

# 1 
#include "defs.h"
_BYTE * func0(_BYTE *a1, _DWORD *a2, char a3, char a4)
{
_BYTE *v6; // [rsp+18h] [rbp-10h]
_BYTE *v7; // [rsp+18h] [rbp-10h]
_BYTE *v8; // [rsp+20h] [rbp-8h]
_BYTE *v9; // [rsp+20h] [rbp-8h]

*a2 = 0;
while ( a4 != *a1 )
{
if ( !*a1 )
return a1;
if ( a3 == *a1 )
return a1;
++a1;
}
++*a2;
v8 = a1;
v6 = a1 + 1;
if ( !*v6 )
return v6;
*v8 = *v6;
v7 = v6 + 1;
v9 = v8 + 1;
while ( *v7 )
{
if ( a4 == *v7 )
{
++*a2;
if ( !*++v7 )
return v7;
*v9 = *v7;
}
else
{
if ( a3 == *v7 )
return v9;
*v9 = *v7;
}
++v9;
++v7;
}
return v9;
}