#include <stdio.h>

# 1 
void func0(long param_1,uint param_2,int param_3){int local_38;int local_20;ulong *local_18;ulong local_10;local_18 = (ulong *)(param_1 + (ulong)(param_2 >> 5) * 8);local_10 = -1L << ((byte)param_2 & 0x1f);local_20 = 0x20 - (param_2 & 0x1f);local_38 = param_3;while (-1 < local_38 - local_20) {*local_18 = *local_18 | local_10;local_38 = local_38 - local_20;local_10 = 0xffffffffffffffff;local_18 = local_18 + 1;local_20 = 0x20;}if (local_38 != 0) {*local_18 = *local_18 |local_10 & 0xffffffffffffffffU >> (-((byte)param_2 + (char)param_3) & 0x1f);}return;}