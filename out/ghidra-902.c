#include <bits/types.h>

#include <stdio.h> 

# 1 
void func0(byte *param_1){byte *local_20;byte *local_10;for (local_10 = param_1; (local_20 = param_1, local_10 != (byte *)0x0 && (*local_10 != 0));local_10 = local_10 + 1) {}for (; local_10 = local_10 + -1, local_20 < local_10; local_20 = local_20 + 1) {*local_20 = *local_20 ^ *local_10;*local_10 = *local_10 ^ *local_20;*local_20 = *local_20 ^ *local_10;}return;}