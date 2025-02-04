
# 1 
void func0(byte *param_1,byte *param_2){byte bVar1;byte bVar2;byte *local_20;byte *local_18;local_20 = param_2;local_18 = param_1;do {bVar1 = *local_20;bVar2 = bVar1;if (('@' < (char)bVar1) && ((char)bVar1 < '[')) {bVar2 = bVar1 | 0x20;}*local_18 = bVar2;local_20 = local_20 + 1;local_18 = local_18 + 1;} while (bVar1 != 0);return;}