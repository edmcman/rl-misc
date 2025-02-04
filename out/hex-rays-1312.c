
# 1 
#include "defs.h"
_DWORD * func0(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4)
{
int v4; // edx
int v5; // edx
_DWORD *result; // rax
__int64 v8; // [rsp+28h] [rbp-38h]
__int64 v9; // [rsp+48h] [rbp-18h]
__int64 v10; // [rsp+50h] [rbp-10h]
__int64 v11; // [rsp+58h] [rbp-8h]

if ( a1 > 2299160 )
v8 = a1 + 1 + (100 * a1 - 186721625) / 3652425 - (100 * a1 - 186721625) / 3652425 / 4;
else
v8 = a1;
v9 = (100 * (v8 + 1524) - 12210) / 36525;
v10 = 36525 * v9 / 100;
v11 = 10000 * (v8 + 1524 - v10) / 306001;
*a2 = v8
+ 1524
- v10
+ ((int)((unsigned __int64)(306001 * v11) >> 32) >> 31)
- ((__int64)((unsigned __int128)(0x346DC5D63886594BLL * (__int128)(306001 * v11)) >> 64) >> 11);
if ( v11 > 13 )
v4 = v11 - 13;
else
v4 = v11 - 1;
*a3 = v4;
if ( *a3 <= 2 )
v5 = v9 - 4715;
else
v5 = v9 - 4716;
result = a4;
*a4 = v5;
return result;
}