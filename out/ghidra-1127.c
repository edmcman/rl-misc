#include <linux/kernel.h>

#include <linux/module.h>

#include <linux/errno.h>

# 1 
void func0(long param_1){undefined2 uVar1;undefined4 local_c;for (local_c = 0; local_c < 3; local_c = local_c + 1) {uVar1 = *(undefined2 *)(param_1 + (long)local_c * 2);*(undefined2 *)(param_1 + (long)local_c * 2) = *(undefined2 *)(param_1 + 6 + (long)local_c * 2);*(undefined2 *)(param_1 + 6 + (long)local_c * 2) = uVar1;}return;}