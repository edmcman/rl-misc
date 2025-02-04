#include <assert.h>

#include <string.h>

#include <stdio.h>

#include <stddef.h>

# 1 
#include "defs.h"
void  func0(__int64 a1)
{
int i; // [rsp+18h] [rbp-8h]
uint32_t hostlong; // [rsp+1Ch] [rbp-4h]

for ( i = 3; i >= 0; --i )
{
hostlong = htonl(*(_DWORD *)(4LL * i + a1)) + 1;
*(_DWORD *)(4LL * i + a1) = htonl(hostlong);
if ( hostlong )
break;
}
}