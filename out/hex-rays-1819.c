
# 1 
#include "defs.h"
__int64  func0(__int64 a1, int a2, int a3)
{
_BOOL4 v3; // eax
char v4; // al
char v5; // al
char v6; // al
char v8; // [rsp+1Fh] [rbp-21h]
char v9; // [rsp+1Fh] [rbp-21h]
char v10; // [rsp+1Fh] [rbp-21h]
char v11; // [rsp+1Fh] [rbp-21h]
int i; // [rsp+20h] [rbp-20h]
int v13; // [rsp+20h] [rbp-20h]
char v14; // [rsp+24h] [rbp-1Ch]
int j; // [rsp+28h] [rbp-18h]
int k; // [rsp+28h] [rbp-18h]
int v17; // [rsp+2Ch] [rbp-14h]
_BOOL4 v18; // [rsp+34h] [rbp-Ch]
int v19; // [rsp+38h] [rbp-8h]
int v20; // [rsp+3Ch] [rbp-4h]
int v21; // [rsp+3Ch] [rbp-4h]

for ( i = 0; *(_BYTE *)(i + a1); ++i )
;
v13 = i + 1;
if ( v13 > 1025 )
{
v13 = 1025;
*(_BYTE *)(a1 + 1025) = 0;
}
v17 = a2 % 26 + 26;
v3 = a2 < 0 && (a2 & 1) != 0;
v18 = v3;
for ( j = 0; j < v13; ++j )
{
if ( *(char *)(j + a1) <= 64 || *(char *)(j + a1) > 90 )
{
if ( *(char *)(j + a1) <= 96 || *(char *)(j + a1) > 122 )
{
if ( *(char *)(j + a1) > 47 && *(char *)(j + a1) <= 57 )
*(_BYTE *)(j + a1) = (*(char *)(j + a1) - 48 + a3 % 10 + 10) % 10 + 48;
}
else
{
v21 = (*(char *)(j + a1) - 97 + v17) % 26;
if ( v18 )
{
if ( (((_BYTE)v21 - 65) & 1) != 0 )
v6 = 97;
else
v6 = 65;
}
else if ( (((_BYTE)v21 - 65) & 1) != 0 )
{
v6 = 65;
}
else
{
v6 = 97;
}
*(_BYTE *)(j + a1) = v21 + v6;
}
}
else
{
v20 = (*(char *)(j + a1) - 65 + v17) % 26;
if ( v18 )
{
if ( (((_BYTE)v20 - 65) & 1) != 0 )
v4 = 65;
else
v4 = 97;
v14 = v4;
}
else
{
if ( (((_BYTE)v20 - 65) & 1) != 0 )
v5 = 97;
else
v5 = 65;
v14 = v5;
}
*(_BYTE *)(j + a1) = v20 + v14;
}
}
v19 = v13 % 4;
for ( k = 0; k < v13 - v19; k += 4 )
{
v8 = *(_BYTE *)(k + a1);
*(_BYTE *)(k + a1) = *(_BYTE *)(k + 2LL + a1);
*(_BYTE *)(a1 + k + 2LL) = v8;
v9 = *(_BYTE *)(k + 1LL + a1);
*(_BYTE *)(k + 1LL + a1) = *(_BYTE *)(k + 3LL + a1);
*(_BYTE *)(a1 + k + 3LL) = v9;
}
if ( v19 )
{
if ( v19 == 3 )
{
v11 = *(_BYTE *)(k + a1);
*(_BYTE *)(k + a1) = *(_BYTE *)(k + 2LL + a1);
*(_BYTE *)(a1 + k + 2LL) = v11;
}
else if ( v19 <= 3 && v19 != 1 && v19 == 2 )
{
v10 = *(_BYTE *)(k + a1);
*(_BYTE *)(k + a1) = *(_BYTE *)(k + 1LL + a1);
*(_BYTE *)(a1 + k + 1LL) = v10;
}
}
return (unsigned int)v13;
}