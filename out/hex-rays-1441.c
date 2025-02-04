#include <string.h>

#include <wchar.h>

#include <wctype.h>

#include <assert.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
__int64 i; // [rsp+20h] [rbp-8h]

for ( i = 0LL; a3 > i + 1 && *(_DWORD *)(4 * i + a2); ++i )
*(_DWORD *)(4 * i + a1) = *(_DWORD *)(4 * i + a2);
*(_DWORD *)(4 * i + a1) = 0;
while ( *(_DWORD *)(4 * i + a2) )
++i;
return i;
}