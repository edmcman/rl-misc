
# 1 
void func0(long param_1,int param_2){undefined4 local_24;undefined4 local_c;local_c = 0;for (local_24 = param_2; 0x1f < local_24; local_24 = local_24 + -0x20) {local_c = local_c + 1;}*(uint *)(param_1 + (long)local_c * 4) =*(uint *)(param_1 + (long)local_c * 4) | 1 << ((byte)local_24 & 0x1f);return;}