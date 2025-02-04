
# 1 
#include "defs.h"
unsigned __int64  func0(char *a1, __int16 a2, unsigned __int64 *a3, double *a4)
{
unsigned __int64 result; // rax
double v5; // xmm0_8
double v6; // xmm0_8
char *v7; // rax
unsigned __int64 v8; // rax
double v9; // xmm0_8
unsigned __int64 v10; // rax
double v11; // xmm0_8
char *v12; // rax
unsigned __int64 v13; // rax
double v14; // xmm0_8
char *v15; // rax
unsigned __int64 v16; // rax
double v17; // xmm0_8
char *v18; // [rsp+18h] [rbp-18h]
char *i; // [rsp+18h] [rbp-18h]
char *j; // [rsp+18h] [rbp-18h]
char *k; // [rsp+18h] [rbp-18h]
__int64 v22; // [rsp+28h] [rbp-8h]

v18 = a1;
v22 = 0LL;
*a3 = 0LL;
*a4 = 0.0;
if ( (a2 & 0x800) != 0 )
{
while ( *v18 )
{
result = (unsigned __int8)*v18;
if ( (_BYTE)result == 46 )
{
if ( v22 )
return result;
v22 = 10LL;
++v18;
}
if ( v22 )
{
if ( v22 < 0 )
v5 = (double)(int)(v22 & 1 | ((unsigned __int64)v22 >> 1))
+ (double)(int)(v22 & 1 | ((unsigned __int64)v22 >> 1));
else
v5 = (double)(int)v22;
*a4 = (double)(*v18 - 48) / v5 + *a4;
v22 *= 10LL;
}
else
{
*a4 = (double)(*v18 - 48) + *a4 * 10.0;
}
++v18;
}
v6 = *a4;
if ( *a4 >= 9.223372036854776e18 )
result = (unsigned int)(int)(v6 - 9.223372036854776e18) ^ 0x8000000000000000LL;
else
result = (unsigned int)(int)v6;
*a3 = result;
}
else if ( (a2 & 8) != 0 )
{
while ( *v18 )
{
v7 = v18++;
*a3 = 10 * *a3 + *v7 - 48;
}
v8 = *a3;
if ( (*a3 & 0x8000000000000000LL) != 0LL )
v9 = (double)(int)(*(_DWORD *)a3 & 1 | (v8 >> 1)) + (double)(int)(*(_DWORD *)a3 & 1 | (v8 >> 1));
else
v9 = (double)(int)v8;
result = (unsigned __int64)a4;
*a4 = v9;
}
else if ( (a2 & 0x100) != 0 )
{
for ( i = a1 + 2; *i; ++i )
{
*a3 *= 16LL;
if ( *i <= 96 || *i > 102 )
{
if ( *i <= 64 || *i > 70 )
*a3 += *i - 48;
else
*a3 += *i - 55;
}
else
{
*a3 += *i - 87;
}
}
v10 = *a3;
if ( (*a3 & 0x8000000000000000LL) != 0LL )
v11 = (double)(int)(*(_DWORD *)a3 & 1 | (v10 >> 1)) + (double)(int)(*(_DWORD *)a3 & 1 | (v10 >> 1));
else
v11 = (double)(int)v10;
result = (unsigned __int64)a4;
*a4 = v11;
}
else if ( (a2 & 0x200) != 0 )
{
for ( j = a1 + 1; *j; ++j )
{
v12 = j;
*a3 = 8 * *a3 + *v12 - 48;
}
v13 = *a3;
if ( (*a3 & 0x8000000000000000LL) != 0LL )
v14 = (double)(int)(*(_DWORD *)a3 & 1 | (v13 >> 1)) + (double)(int)(*(_DWORD *)a3 & 1 | (v13 >> 1));
else
v14 = (double)(int)v13;
result = (unsigned __int64)a4;
*a4 = v14;
}
else
{
result = a2 & 0x400;
if ( (a2 & 0x400) != 0 )
{
for ( k = a1 + 2; *k; ++k )
{
v15 = k;
*a3 = 2 * *a3 + *v15 - 48;
}
v16 = *a3;
if ( (*a3 & 0x8000000000000000LL) != 0LL )
v17 = (double)(int)(*(_DWORD *)a3 & 1 | (v16 >> 1)) + (double)(int)(*(_DWORD *)a3 & 1 | (v16 >> 1));
else
v17 = (double)(int)v16;
result = (unsigned __int64)a4;
*a4 = v17;
}
}
return result;
}