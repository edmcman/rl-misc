
# 1 
#include "defs.h"
__int64 * func0(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3, __int64 *a4)
{
__int64 *result; // rax
__int64 v7; // [rsp+20h] [rbp-40h]
__int64 v8; // [rsp+28h] [rbp-38h]
__int64 v9; // [rsp+30h] [rbp-30h]
__int64 v10; // [rsp+38h] [rbp-28h]
unsigned __int64 v11; // [rsp+40h] [rbp-20h]
unsigned __int64 v12; // [rsp+48h] [rbp-18h]
__int64 v13; // [rsp+50h] [rbp-10h]
__int64 v14; // [rsp+58h] [rbp-8h]

v7 = 1LL;
v8 = 0LL;
v9 = 0LL;
v10 = 1LL;
while ( a2 )
{
v11 = a1 / a2;
v12 = a1 % a2;
a1 = a2;
a2 = v12;
v13 = v7 - v11 * v8;
v7 = v8;
v8 = v13;
v14 = v9 - v11 * v10;
v9 = v10;
v10 = v14;
}
*a3 = v7;
result = a4;
*a4 = v9;
return result;
}