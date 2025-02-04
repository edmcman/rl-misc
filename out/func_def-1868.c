#include <limits.h>

#include <stdarg.h>

#include <inttypes.h>	/* For intmax_t (if not defined in <stdint.h>). */

#include <stddef.h>	/* For ptrdiff_t. */

#include <stdint.h>	/* For intmax_t. */

# 1 
static void
printsep(char *str, size_t *len, size_t size)
{
 do { if (*len + 1 < size) str[*len] = ','; (*len)++; } while ( 0);
}