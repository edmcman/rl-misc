
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
char v2; // [rsp+Fh] [rbp-9h]
int i; // [rsp+10h] [rbp-8h]
int j; // [rsp+10h] [rbp-8h]
int v5; // [rsp+14h] [rbp-4h]

v5 = 0;
for ( i = 0; *(_BYTE *)(i + a1); ++i )
;
for ( j = i - 1; j > v5; --j )
{
v2 = *(_BYTE *)(j + a1);
*(_BYTE *)(j + a1) = *(_BYTE *)(v5 + a1);
*(_BYTE *)(a1 + v5++) = v2;
}
return a1;
}