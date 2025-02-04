






# 1 
void func0(ulong *param_1,byte *param_2){ulong uVar1;long lVar2;long lVar3;byte *local_40;uVar1 = 0x50305735;lVar3 = 7;lVar2 = 0x12345671;for (local_40 = param_2; *local_40 != 0; local_40 = local_40 + 1) {if ((*local_40 != 0x20) && (*local_40 != 9)) {uVar1 = uVar1 ^ ((ulong)((uint)uVar1 & 0x3f) + lVar3) * (ulong)*local_40 + uVar1 * 0x100;lVar2 = lVar2 + (lVar2 << 8 ^ uVar1);lVar3 = (ulong)*local_40 + lVar3;}}*param_1 = (ulong)((uint)uVar1 & 0x7fffffff);param_1[1] = (ulong)((uint)lVar2 & 0x7fffffff);return;}