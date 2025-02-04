#include <linux/kernel.h>

#include <linux/module.h>

#include <linux/errno.h>

# 1 
#include "defs.h"
__int64  func0(__int64 a1)
{
__int64 result; // rax
__int16 v2; // [rsp+12h] [rbp-6h]
int i; // [rsp+14h] [rbp-4h]

for ( i = 0; i <= 2; ++i )
{
v2 = *(_WORD *)(a1 + 2LL * i);
*(_WORD *)(a1 + 2LL * i) = *(_WORD *)(a1 + 6 + 2LL * i);
result = i;
*(_WORD *)(a1 + 6 + 2LL * i) = v2;
}
return result;
}