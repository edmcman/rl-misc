
# 1 
void func0(long param_1,int param_2){int iVar1;iVar1 = param_2;if (param_2 < 0) {iVar1 = param_2 + 0x1f;}*(uint *)(param_1 + (long)(iVar1 >> 5) * 4) =*(uint *)(param_1 + (long)(iVar1 >> 5) * 4) & ~(1 << ((byte)(param_2 % 0x20) & 0x1f));return;}