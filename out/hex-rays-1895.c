#include <stdio.h>

#include <string.h>

#include <math.h>

#include <ctype.h>

#include <stdlib.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, char a2, unsigned int a3)
{
__int64 result; // rax
int i; // [rsp+18h] [rbp-8h]
unsigned int v6; // [rsp+1Ch] [rbp-4h]

for ( i = 0; i <= 1; ++i )
{
v6 = *(_QWORD *)(8LL * i + a1);
*(_QWORD *)(8LL * i + a1) = a3 | (v6 << a2);
result = v6 >> (32 - a2);
a3 = v6 >> (32 - a2);
}
return result;
}