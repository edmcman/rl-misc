#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, __int64 a2)
{
int i; // [rsp+18h] [rbp-98h]
int j; // [rsp+18h] [rbp-98h]
int k; // [rsp+1Ch] [rbp-94h]
__int64 v6[18]; // [rsp+20h] [rbp-90h]

v6[17] = __readfsqword(0x28u);
for ( i = 0; i <= 15; ++i )
v6[i] = *(_QWORD *)(8LL * i + a1);
for ( j = 0; j <= 3; ++j )
{
for ( k = 0; k <= 3; ++k )
*(_QWORD *)(a2 + 8LL * (4 * j + k)) = v6[4 * k + j];
}
return 0LL;
}