











# 1 
#include "defs.h"
__int64  func0(int a1, __int64 *a2, __int64 a3, _DWORD *a4)
{
__int64 result; // rax
__int64 v5; // rax
__int64 v6; // rdx
__int64 v7; // rdx

if ( *a4 )
{
*a4 = 0;
stage_1918 = 0;
}
if ( stage_1918 == 3 )
{
if ( a1 >= 0 )
{
if ( a1 && last_good_1917 - last_bad_1916 != 1 )
{
last_good_1917 = *a2;
v7 = (last_bad_1916 + last_good_1917) / 2;
if ( last_bad_1916 + 1 >= v7 )
v7 = last_bad_1916 + 1;
*a2 = v7;
result = 0LL;
}
else
{
result = 1LL;
}
}
else
{
last_bad_1916 = *a2;
v6 = (last_bad_1916 + last_good_1917) / 2;
if ( last_bad_1916 + 1 >= v6 )
v6 = last_bad_1916 + 1;
*a2 = v6;
result = 0LL;
}
}
else
{
if ( stage_1918 > 3 )
return 0LL;
if ( stage_1918 == 2 )
{
if ( a1 >= 0 )
{
last_good_1917 = *a2;
if ( a1 && last_good_1917 - last_bad_1916 != 1 )
{
stage_1918 = 3;
*a2 = (last_bad_1916 + last_good_1917) / 2;
result = 0LL;
}
else
{
result = 1LL;
}
}
else
{
last_bad_1916 = *a2;
v5 = *a2 + 1;
if ( a3 <= v5 )
v5 = a3;
*a2 += v5;
result = 0LL;
}
}
else
{
if ( stage_1918 > 2 )
return 0LL;
if ( !stage_1918 )
{
stage_1918 = 1;
*a2 = 0LL;
return 0LL;
}
if ( stage_1918 != 1 )
return 0LL;
stage_1918 = 2;
if ( a1 >= 0 )
{
result = 1LL;
}
else
{
last_bad_1916 = 0LL;
*a2 = 1LL;
result = 0LL;
}
}
}
return result;
}