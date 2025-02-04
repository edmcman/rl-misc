#include <sys/types.h>

#include <err.h>

#include <errno.h>

#include <inttypes.h>

#include <limits.h>

#include <locale.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>

#include <wchar.h>

# 1 
#include "defs.h"
__int64  func0(char *a1, __int64 a2, _QWORD *a3)
{
int v3; // eax
unsigned int v4; // eax
char *v6; // [rsp+10h] [rbp-28h]
char v7; // [rsp+23h] [rbp-15h]
char *i; // [rsp+28h] [rbp-10h]
_BYTE *v9; // [rsp+28h] [rbp-10h]

v6 = a1;
for ( i = a1; ; ++i )
{
v7 = *v6;
if ( !*v6 )
break;
if ( v7 == 92 )
{
v3 = *++v6;
if ( !*v6 )
{
*i = 92;
v9 = i + 1;
*v9 = 0;
*a3 = v9 - a1;
return 0LL;
}
if ( v3 >= 0 && v3 <= 118 && v3 >= 39 )
{
v4 = v3 - 39;
if ( v4 <= 0x4F )
__asm { jmp rax }
}
*i = *v6;
}
else
{
*i = v7;
}
++v6;
}
*i = 0;
*a3 = i - a1;
return 0LL;
}