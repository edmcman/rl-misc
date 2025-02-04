
# 1 
uint func0(long param_1,long *param_2){ulong uVar1;undefined4 local_1c;undefined8 local_18;local_1c = 0;local_18 = 0;while (uVar1 = (ulong)(*(byte *)(param_1 + (ulong)local_1c) - 0x30 & 0xff), uVar1 < 10) {local_18 = uVar1 + local_18 * 10;local_1c = local_1c + 1;}*param_2 = local_18;return local_1c;}