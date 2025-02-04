#include <stdio.h>

# 1 
#include "defs.h"
__int64  func0(int *a1, char a2, char a3, int a4)
{
unsigned int v5; // [rsp+20h] [rbp-4h]

v5 = (*a1 >> 7) & 1;
*a1 = a4 ^ v5 ^ (v5 << a2) ^ (2 * *a1) ^ (v5 << a3);
return v5;
}