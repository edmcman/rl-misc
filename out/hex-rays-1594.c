#include <stdarg.h>

#include <sys/types.h>

#include <sys/param.h>

# 1 
#include "defs.h"
unsigned __int64  func0(_BYTE *a1, unsigned int a2, unsigned __int64 a3)
{
unsigned __int64 result; // rax
int v4; // eax
_BYTE *v5; // rcx
int i; // [rsp+24h] [rbp-4h]
int j; // [rsp+24h] [rbp-4h]

*a1 = 0;
for ( i = 1; i <= 8; ++i )
{
a1[i] = dec_to_hex_2522[a2 & 0xF];
a2 >>= 4;
}
for ( j = 8; ; --j )
{
result = (unsigned __int8)a1[j];
if ( (_BYTE)result != 48 )
break;
}
if ( !j )
j = 1;
while ( j >= 0 )
{
v4 = j--;
v5 = &a1[v4];
result = a3++;
*(_BYTE *)result = *v5;
}
return result;
}