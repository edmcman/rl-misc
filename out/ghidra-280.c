#include <stdio.h>

# 1 
void func0(long param_1,int param_2,int *param_3){int local_c;local_c = *param_3;while( true ) {if (param_2 < local_c) {return;}if (*(int *)(param_1 + (long)local_c * 4) != 0) break;local_c = local_c + 1;}*param_3 = local_c;return;}