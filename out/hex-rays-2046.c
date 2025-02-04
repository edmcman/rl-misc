#include <sys/cdefs.h>

#include <stddef.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, char a2, unsigned __int64 a3)
{
_BYTE *v3; // rax
__int64 v7; // [rsp+20h] [rbp-8h]

v7 = 0LL;
while ( *a1 && a3 > 1 )
{
v3 = a1++;
*v3 = a2;
++v7;
--a3;
}
*a1 = 0;
return v7 + 1;
}