#include <stdio.h>

#include <time.h>

#include <stdlib.h>

# 1 
#include "defs.h"
double  func0(__int64 *a1)
{
*a1 = (25173 * *a1 + 13849) % 0x10000;
return (double)(int)*a1 / 65535.0;
}