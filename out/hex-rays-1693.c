
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
char v2; // [rsp+Fh] [rbp-9h]
int v3; // [rsp+10h] [rbp-8h]
int i; // [rsp+14h] [rbp-4h]
int j; // [rsp+14h] [rbp-4h]

v3 = 0;
for ( i = 0; *(_BYTE *)(i + a1); ++i )
;
for ( j = i - 1; v3 < j; --j )
{
v2 = *(_BYTE *)(v3 + a1);
*(_BYTE *)(v3 + a1) = *(_BYTE *)(j + a1);
*(_BYTE *)(a1 + j) = v2;
++v3;
}
return a1;
}