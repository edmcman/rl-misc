#include <stdio.h>

#include <math.h>

#include <string.h>

#include <ctype.h>

#include <regex.h>

# 1 
undefined8 func0(long param_1,long param_2){long in_FS_OFFSET;int local_a0;int local_9c;undefined8 auStack_98 [17];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);for (local_a0 = 0; local_a0 < 0x10; local_a0 = local_a0 + 1) {auStack_98[local_a0] = *(undefined8 *)(param_1 + (long)local_a0 * 8);}for (local_a0 = 0; local_a0 < 4; local_a0 = local_a0 + 1) {for (local_9c = 0; local_9c < 4; local_9c = local_9c + 1) {*(undefined8 *)((long)(local_9c + local_a0 * 4) * 8 + param_2) =auStack_98[local_9c * 4 + local_a0];}}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return 0;}