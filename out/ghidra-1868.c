#include <limits.h>

#include <stdarg.h>

#include <inttypes.h>	/* For intmax_t (if not defined in <stdint.h>). */

#include <stddef.h>	/* For ptrdiff_t. */

#include <stdint.h>	/* For intmax_t. */

# 1 
void func0(long param_1,long *param_2,ulong param_3){if (*param_2 + 1U < param_3) {*(undefined *)(param_1 + *param_2) = 0x2c;}*param_2 = *param_2 + 1;return;}