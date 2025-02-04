
# 1 
char func0(byte param_1,byte param_2,uint *param_3){long lVar1;byte bVar2;long in_FS_OFFSET;lVar1 = *(long *)(in_FS_OFFSET + 0x28);bVar2 = (param_1 & 0x3f) + 0xbe;*param_3 = (uint)CARRY1(bVar2,param_2 & 3);if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return bVar2 + (param_2 & 3);}