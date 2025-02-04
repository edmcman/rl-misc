#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

#include <string.h>

#include <stdint.h>

# 1 
#include "defs.h"
__int64  func0(char *a1, _BYTE *a2, _DWORD *a3)
{
char *v4; // rax
char v5; // cl
_BYTE *v6; // rax
char *v8; // [rsp+10h] [rbp-8h]

v8 = a1;
*a3 = 0;
if ( !a1 )
return 4294967294LL;
while ( 1 )
{
v4 = v8++;
v5 = *v4;
v6 = a2++;
if ( v5 != *v6 )
break;
++*a3;
if ( !*v8 && *a2 )
return 4294967293LL;
if ( !*v8 && !*a2 )
return 0xFFFFFFFFLL;
}
if ( !*a3 && !*v8 )
return 1LL;
if ( *v8 || !*a2 )
return 1LL;
return 2LL;
}