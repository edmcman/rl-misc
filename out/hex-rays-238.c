
# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, __int64 a3, char *a4)
{
int v4; // eax
char *v6; // [rsp+0h] [rbp-18h]
char i; // [rsp+8h] [rbp-10h]
int v8; // [rsp+Ch] [rbp-Ch]

v8 = a2;
v6 = a4;
if ( *a4 )
{
while ( *v6 == 32 )
++v6;
if ( *v6 == 43 || *v6 == 45 || *v6 == 42 || *v6 == 47 || *v6 == 37 || *v6 == 40 || *v6 == 41 )
{
*(_BYTE *)(a1 + a2) = *v6;
*(_BYTE *)(a2 + 1LL + a1) = 0;
}
else
{
for ( i = *v6; i > 47 && i <= 57; i = *v6 )
{
v4 = v8++;
*(_BYTE *)(a1 + v4) = i;
++v6;
}
*(_BYTE *)(v8 + a1) = 0;
}
}
else
{
*(_BYTE *)(a2 + a1) = 0;
}
return a1;
}