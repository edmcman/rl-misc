#include <assert.h>

#include <string.h>

#include <stdio.h>

#include <stddef.h>

# 1 
void func0(long param_1){uint32_t uVar1;uint32_t uVar2;int local_10;local_10 = 3;while( true ) {if (local_10 < 0) {return;}uVar1 = htonl(*(uint32_t *)(param_1 + (long)local_10 * 4));uVar2 = htonl(uVar1 + 1);*(uint32_t *)(param_1 + (long)local_10 * 4) = uVar2;if (uVar1 + 1 != 0) break;local_10 = local_10 + -1;}return;}