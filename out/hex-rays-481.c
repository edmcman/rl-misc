#include <sys/types.h>

#include <sys/stat.h>

#include <unistd.h>

#include <stdlib.h>

#include <string.h>

#include <fcntl.h>

#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(int a1, char *a2, int a3)
{
unsigned int v6; // [rsp+18h] [rbp-8h]
int v7; // [rsp+1Ch] [rbp-4h]

v6 = 0;
while ( a3 > 0 )
{
v7 = read(a1, a2, a3);
if ( v7 <= 0 )
break;
v6 += v7;
a2 += v7;
a3 -= v7;
}
return v6;
}