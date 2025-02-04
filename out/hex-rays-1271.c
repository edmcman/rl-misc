
# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
int v4; // eax
int v5; // eax
int v6; // eax
int v7; // eax
int v8; // eax
int v9; // eax
int v11; // [rsp+20h] [rbp-4560h]
int i; // [rsp+24h] [rbp-455Ch]
int k; // [rsp+24h] [rbp-455Ch]
int v14; // [rsp+24h] [rbp-455Ch]
int j; // [rsp+28h] [rbp-4558h]
int v16; // [rsp+28h] [rbp-4558h]
int v17; // [rsp+2Ch] [rbp-4554h]
int v18; // [rsp+30h] [rbp-4550h]
int l; // [rsp+34h] [rbp-454Ch]
int v20; // [rsp+3Ch] [rbp-4544h]
int v21; // [rsp+44h] [rbp-453Ch]
int v22; // [rsp+48h] [rbp-4538h]
int v23[132]; // [rsp+50h] [rbp-4530h]
int v24[200]; // [rsp+260h] [rbp-4320h]
char v25; // [rsp+580h] [rbp-4000h] BYREF
__int64 v26; // [rsp+3580h] [rbp-1000h] BYREF
unsigned __int64 v27; // [rsp+4578h] [rbp-8h]

while ( &v26 != (__int64 *)&v25 )
;
v27 = __readfsqword(0x28u);
for ( i = 0; i <= 128; ++i )
{
v23[i] = -i;
*((_BYTE *)&v24[132] + i) = 60;
}
for ( j = 1; j <= 128; ++j )
{
v24[0] = v23[0] - 1;
*((_BYTE *)&v24[132] + 129 * j) = 94;
for ( k = 1; k <= 128; ++k )
{
if ( *(_BYTE *)(k - 1LL + a1) == *(_BYTE *)(j - 1LL + a2) )
v11 = 1;
else
v11 = -1;
v20 = 129 * j;
v21 = v23[k] - 1;
v22 = v24[k - 1] - 1;
v4 = v21;
if ( v22 >= v21 )
v4 = v24[k - 1] - 1;
if ( v23[k - 1] + v11 >= v4 )
v4 = v23[k - 1] + v11;
v24[k] = v4;
if ( v4 == v22 )
{
*((_BYTE *)&v24[132] + v20 + k) = 60;
}
else if ( v4 == v21 )
{
*((_BYTE *)&v24[132] + v20 + k) = 94;
}
else
{
*((_BYTE *)&v24[132] + v20 + k) = 92;
}
}
for ( l = 0; l <= 128; ++l )
v23[l] = v24[l];
}
v14 = 128;
v16 = 128;
v17 = 0;
v18 = 0;
while ( v14 > 0 || v16 > 0 )
{
if ( *((_BYTE *)&v24[132] + 129 * v16 + v14) == 92 )
{
v5 = v17++;
*(_BYTE *)(a3 + v5) = *(_BYTE *)(v14 - 1LL + a1);
v6 = v18++;
*(_BYTE *)(a4 + v6) = *(_BYTE *)(v16 - 1LL + a2);
--v14;
--v16;
}
else
{
v7 = v17++;
if ( *((_BYTE *)&v24[132] + 129 * v16 + v14) == 60 )
{
*(_BYTE *)(a3 + v7) = *(_BYTE *)(v14 - 1LL + a1);
v8 = v18++;
*(_BYTE *)(v8 + a4) = 45;
--v14;
}
else
{
*(_BYTE *)(v7 + a3) = 45;
v9 = v18++;
*(_BYTE *)(a4 + v9) = *(_BYTE *)(--v16 + a2);
}
}
}
while ( v17 <= 255 )
*(_BYTE *)(v17++ + a3) = 95;
while ( v18 <= 255 )
*(_BYTE *)(v18++ + a4) = 95;
return __readfsqword(0x28u) ^ v27;
}