
# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
char v2; // [rsp+Fh] [rbp-9h]
int v3; // [rsp+10h] [rbp-8h]
int i; // [rsp+10h] [rbp-8h]
int v5; // [rsp+14h] [rbp-4h]

v3 = 0;
v5 = 0;
while ( *(_BYTE *)(v3 + a1) )
++v3;
for ( i = v3 - 1; i >= v5; --i )
{
v2 = *(_BYTE *)(i + a1);
*(_BYTE *)(i + a1) = *(_BYTE *)(v5 + a1);
*(_BYTE *)(a1 + v5++) = v2;
}
return a1;
}