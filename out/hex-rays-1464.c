#include <stdarg.h>

#include <string.h> /* for memset */

# 1 
#include "defs.h"
__int64  func0(__int64 *a1)
{
__int64 v1; // rdx

v1 = *a1 - 1;
*a1 = v1;
return v1;
}