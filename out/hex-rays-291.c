
# 1 
#include "defs.h"
__int64  func0(__int64 a1, _DWORD *a2)
{
int v3; // [rsp+1Ch] [rbp-4h]

v3 = 0;
for ( *a2 = 0; ; *a2 = 10 * *a2 + *(char *)(v3++ + a1) - 48 )
{
if ( !*(_BYTE *)(v3 + a1) )
return 1LL;
if ( *(char *)(v3 + a1) <= 47 || *(char *)(v3 + a1) > 57 )
break;
}
if ( *(_BYTE *)(v3 + a1) != 45 )
return 0LL;
*a2 = -*a2;
return 1LL;
}