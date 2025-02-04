#include <string.h>

#include <wchar.h>

#include <wctype.h>

#include <assert.h>

# 1 
long func0(long param_1,long param_2,ulong param_3){undefined8 local_10;for (local_10 = 0; (local_10 + 1U < param_3 && (*(int *)(param_2 + local_10 * 4) != 0));local_10 = local_10 + 1) {*(undefined4 *)(param_1 + local_10 * 4) = *(undefined4 *)(param_2 + local_10 * 4);}*(undefined4 *)(param_1 + local_10 * 4) = 0;for (; *(int *)(param_2 + local_10 * 4) != 0; local_10 = local_10 + 1) {}return local_10;}