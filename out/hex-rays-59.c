#include <stdio.h>

#include <ctype.h>

#include <stdlib.h>

#include <stdbool.h>

# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, _DWORD *a2)
{
unsigned __int64 result; // rax
int j; // [rsp+18h] [rbp-8h]
int i; // [rsp+1Ch] [rbp-4h]

result = (unsigned __int64)a2;
*a2 = 0;
for ( i = 0; i <= 4; ++i )
{
for ( j = 0; j < i && *(_DWORD *)(8LL * i + a1 + 4) != *(_DWORD *)(8LL * j + a1 + 4); ++j )
;
result = (unsigned int)i;
if ( i == j )
{
result = (unsigned __int64)a2;
++*a2;
}
}
return result;
}