#include <regex.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>

#include <sys/types.h>

#include <string.h>

#include <assert.h>

# 1 
void func0(long param_1,uint param_2){*(uint *)(param_1 + (ulong)(param_2 >> 5) * 4) =*(uint *)(param_1 + (ulong)(param_2 >> 5) * 4) | 1 << (((byte)param_2 & 0x1f) - 1 & 0x1f);return;}