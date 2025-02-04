
# 1 
#include "defs.h"
unsigned __int64  func0(__int64 a1, char *a2)
{
int i; // [rsp+10h] [rbp-20h]
int v4; // [rsp+14h] [rbp-1Ch]
int v5; // [rsp+14h] [rbp-1Ch]
int v6; // [rsp+18h] [rbp-18h]
int v7; // [rsp+18h] [rbp-18h]
int v8; // [rsp+18h] [rbp-18h]
unsigned __int8 v9; // [rsp+20h] [rbp-10h]
unsigned __int8 v10; // [rsp+21h] [rbp-Fh]
char v11; // [rsp+22h] [rbp-Eh]
char v12; // [rsp+23h] [rbp-Dh]
char v13; // [rsp+24h] [rbp-Ch]
char v14; // [rsp+25h] [rbp-Bh]
char v15; // [rsp+26h] [rbp-Ah]
char v16; // [rsp+27h] [rbp-9h]
unsigned __int64 v17; // [rsp+28h] [rbp-8h]

v17 = __readfsqword(0x28u);
v4 = 16;
v9 = *a2;
v10 = a2[1];
if ( v9 <= v10 )
{
v11 = (char)(4 * v9 + v10) / 5;
v12 = (char)(3 * v9 + 2 * v10) / 5;
v13 = (char)(2 * v9 + 3 * v10) / 5;
v14 = (char)(4 * v10 + v9) / 5;
v15 = 0;
v16 = -1;
}
else
{
v11 = (char)(6 * v9 + v10) / 7;
v12 = (char)(5 * v9 + 2 * v10) / 7;
v13 = (char)(4 * v9 + 3 * v10) / 7;
v14 = (char)(3 * v9 + 4 * v10) / 7;
v15 = (char)(2 * v9 + 5 * v10) / 7;
v16 = (char)(v9 + 6 * v10) / 7;
}
for ( i = 3; i <= 63; i += 4 )
{
v6 = ((int)(unsigned __int8)a2[v4 >> 3] >> (v4 & 7)) & 1;
v5 = v4 + 1;
v7 = 2 * (((int)(unsigned __int8)a2[v5 >> 3] >> (v5 & 7)) & 1) + v6;
++v5;
v8 = 4 * (((int)(unsigned __int8)a2[v5 >> 3] >> (v5 & 7)) & 1) + v7;
v4 = v5 + 1;
*(_BYTE *)(a1 + i) = *(&v9 + (v8 & 7));
}
return __readfsqword(0x28u) ^ v17;
}