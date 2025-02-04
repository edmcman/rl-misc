#include <stdbool.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(_BYTE *a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
_BYTE *v4; // rax
unsigned __int64 i; // [rsp+20h] [rbp-8h]

for ( i = 5381LL; ; i = 33 * i + (char)*v4 )
{
v4 = a1++;
if ( !*v4 )
break;
}
*a3 = i % a4;
return 1LL;
}