
# 1 
void func0(long param_1,long param_2){int iVar1;bool bVar2;long in_FS_OFFSET;long local_70;int local_64;int local_60;char local_58 [72];long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_58[0] = '\0';local_58[1] = '\0';local_58[2] = '\0';local_58[3] = '\0';local_58[4] = '\0';local_58[5] = '\0';local_58[6] = '\0';local_58[7] = '\0';local_58[8] = '\0';local_58[9] = '\0';local_58[10] = '\0';local_58[0xb] = '\0';local_58[0xc] = '\0';local_58[0xd] = '\0';local_58[0xe] = '\0';local_58[0xf] = '\0';local_58[0x10] = '\0';local_58[0x11] = '\0';local_58[0x12] = '\0';local_58[0x13] = '\0';local_58[0x14] = '\0';local_58[0x15] = '\0';local_58[0x16] = '\0';local_58[0x17] = '\0';local_58[0x18] = '\0';local_58[0x19] = '\0';local_58[0x1a] = '\0';local_58[0x1b] = '\0';local_58[0x1c] = '\0';local_58[0x1d] = '\0';local_58[0x1e] = '\0';local_58[0x1f] = '\0';local_58[0x20] = '\0';local_58[0x21] = '\0';local_58[0x22] = '\0';local_58[0x23] = '\0';local_58[0x24] = '\0';local_58[0x25] = '\0';local_58[0x26] = '\0';local_58[0x27] = '\0';local_58[0x28] = '\0';local_58[0x29] = '\0';local_58[0x2a] = '\0';local_58[0x2b] = '\0';local_58[0x2c] = '\0';local_58[0x2d] = '\0';local_58[0x2e] = '\0';local_58[0x2f] = '\0';local_58[0x30] = '\0';local_58[0x31] = '\0';local_58[0x32] = '\0';local_58[0x33] = '\0';local_58[0x34] = '\0';local_58[0x35] = '\0';local_58[0x36] = '\0';local_58[0x37] = '\0';local_58[0x38] = '\0';local_58[0x39] = '\0';local_58[0x3a] = '\0';local_58[0x3b] = '\0';local_58[0x3c] = '\0';local_58[0x3d] = '\0';local_58[0x3e] = '\0';local_58[0x3f] = '\0';local_58[0x40] = 0;bVar2 = false;local_60 = 0;local_70 = param_1;iVar1 = local_60;if (param_1 < 0) {bVar2 = true;local_70 = -param_1;}do {local_60 = iVar1;iVar1 = local_60 + 1;local_58[local_60] = (char)local_70 + (char)(local_70 / 10) * -10 + '0';local_70 = local_70 / 10;if (local_70 < 1) break;} while (iVar1 < 0x3f);if (bVar2) {local_58[iVar1] = '-';iVar1 = local_60 + 2;}local_60 = iVar1;for (local_64 = 0; local_64 < local_60; local_64 = local_64 + 1) {*(char *)(param_2 + local_64) = local_58[(local_60 + -1) - local_64];}*(undefined *)(param_2 + local_64) = 0;if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}