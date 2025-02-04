
# 1 
#include "defs.h"
__int64  func0(int *a1, int *a2, char a3)
{
int i; // [rsp+20h] [rbp-4h]

if ( a3 )
{
*a1 = -2147483647;
*a2 ^= (((unsigned int)*a2 >> 2) ^ ((unsigned int)*a2 >> 1) ^ *a2 ^ ((unsigned int)*a2 >> 3)) << 31;
for ( i = 1; i <= 49; ++i )
{
*a1 = ((unsigned int)*a1 >> 4) ^ ((unsigned int)*a1 >> 1);
*a1 ^= (*a1 << 28) ^ (*a1 << 31);
*a2 = ((unsigned int)*a2 >> 4) ^ ((unsigned int)*a2 >> 3) ^ ((unsigned int)*a2 >> 2) ^ ((unsigned int)*a2 >> 1);
*a2 ^= (*a2 << 28) ^ (*a2 << 29) ^ (*a2 << 30) ^ (*a2 << 31);
}
}
*a1 = ((unsigned int)*a1 >> 4) ^ ((unsigned int)*a1 >> 1);
*a1 ^= (*a1 << 28) ^ (*a1 << 31);
*a2 = ((unsigned int)*a2 >> 4) ^ ((unsigned int)*a2 >> 3) ^ ((unsigned int)*a2 >> 2) ^ ((unsigned int)*a2 >> 1);
*a2 ^= (*a2 << 28) ^ (*a2 << 29) ^ (*a2 << 30) ^ (*a2 << 31);
return *a1 ^ (unsigned int)*a2;
}