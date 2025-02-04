
# 1 
void func0(int param_1,int *param_2){long in_FS_OFFSET;int local_14;long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);if (param_1 == 0) {*param_2 = 1;}else {func0(param_1 + -1,&local_14);*param_2 = local_14 * param_1;}if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {/* WARNING: Subroutine does not return */__stack_chk_fail();}return;}