#include <ctype.h>

#include <math.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <sys/stat.h>

#include <unistd.h>

#include <termios.h>

# 1 
#include "defs.h"
__int64  func0(signed int a1, int a2, __int64 a3)
{
__int64 result; // rax
unsigned int i; // [rsp+18h] [rbp-8h]
int v5; // [rsp+1Ch] [rbp-4h]

v5 = 0;
for ( i = a1; ; i += a1 )
{
result = i;
if ( (int)i >= a2 )
break;
do
{
*(_DWORD *)(4LL * (int)(i + v5) + a3) = *(_DWORD *)(4LL * v5 + a3);
++v5;
}
while ( v5 < a1 );
v5 = 0;
}
return result;
}