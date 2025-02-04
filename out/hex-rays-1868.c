#include <limits.h>

#include <stdarg.h>

#include <inttypes.h>	/* For intmax_t (if not defined in <stdint.h>). */

#include <stddef.h>	/* For ptrdiff_t. */

#include <stdint.h>	/* For intmax_t. */

# 1 
#include "defs.h"
_QWORD * func0(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
_QWORD *result; // rax

if ( a3 > *a2 + 1LL )
*(_BYTE *)(*a2 + a1) = 44;
result = a2;
++*a2;
return result;
}