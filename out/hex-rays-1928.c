#include <stdio.h>

#include <string.h>

# 1 
#include "defs.h"
__int64  func0(unsigned int *a1, unsigned int a2)
{
unsigned int v3; // [rsp+18h] [rbp-4h]

v3 = *a1;
*a1 = a2;
return v3;
}