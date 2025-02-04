#include <stdio.h>

# 1 
int func0(undefined8 param_1,long param_2){int local_c;local_c = 0;while( true ) {if (0x3ff < local_c) {return -1;}if (*(int *)(param_2 + (long)local_c * 4) == 0) break;local_c = local_c + 1;}*(undefined4 *)(param_2 + (long)local_c * 4) = 1;return local_c;}