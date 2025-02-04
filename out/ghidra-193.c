#include <stdio.h>

#include <stdlib.h>

# 1 
void func0(long param_1,long param_2){undefined4 local_10;undefined4 local_c;local_c = 0;for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {for (; local_c < 5; local_c = local_c + 1) {*(undefined4 *)((long)(local_c + local_10 * 5) * 4 + param_2) =*(undefined4 *)((long)local_10 * 0x14 + param_1 + (long)local_c * 4);}}return;}