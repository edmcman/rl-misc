#include <errno.h>

#include <limits.h>

#include <signal.h>

#include <stdarg.h>

#include <string.h>

#include <stdlib.h>

#include <time.h>

# 1 
#include "defs.h"
_BOOL8  func0(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
_BOOL4 v4; // [rsp+24h] [rbp-4h]

v4 = a2 && !is_mul_ok(a2, a1);
if ( a3 )
*a3 = a2 * a1;
return v4;
}