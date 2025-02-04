#include <stdio.h>

#include <unistd.h>

#include <fcntl.h>

#include <string.h>

#include <strings.h>

#include <errno.h>

#include <termios.h>

# 1 
#include "defs.h"
__int64  func0(int a1, _BYTE *a2)
{
int v3; // eax
char buf; // [rsp+1Fh] [rbp-11h] BYREF
unsigned int v5; // [rsp+20h] [rbp-10h]
int v6; // [rsp+24h] [rbp-Ch]
unsigned __int64 v7; // [rsp+28h] [rbp-8h]

v7 = __readfsqword(0x28u);
v5 = 0;
buf = 0;
while ( (int)v5 <= 127 && buf != -18 )
{
if ( read(a1, &buf, 1uLL) != 1 )
return 0xFFFFFFFFLL;
++v5;
}
*a2 = -18;
v5 = 1;
v6 = 1;
do
{
if ( v6 != 1 )
break;
v6 = read(a1, &buf, 1uLL);
v3 = v5++;
a2[v3] = buf;
}
while ( buf != -52 );
return v5;
}