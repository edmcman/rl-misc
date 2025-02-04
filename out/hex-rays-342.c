#include <sys/types.h>

#include <stdio.h>

#include <string.h>

#include <syslog.h>

#include <time.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1, char a2)
{
__int64 v3; // [rsp+10h] [rbp-10h]
unsigned __int64 v4; // [rsp+18h] [rbp-8h]

v4 = 0LL;
v3 = 0LL;
while ( v4 <= 3 )
{
v3 |= (unsigned __int64)*(unsigned __int8 *)(a1 + v4) << (8 * (unsigned __int8)v4);
++v4;
}
return v3 & ((1 << a2) - 1);
}