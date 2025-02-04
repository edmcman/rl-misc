
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
char v2; // [rsp+Fh] [rbp-9h]
int j; // [rsp+10h] [rbp-8h]
int i; // [rsp+14h] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a1); ++i )
;
for ( j = 0; j < i / 2; ++j )
{
v2 = *(_BYTE *)(j + a1);
*(_BYTE *)(j + a1) = *(_BYTE *)(i - j - 1LL + a1);
*(_BYTE *)(a1 + i - j - 1LL) = v2;
}
return a1;
}