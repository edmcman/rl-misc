
# 1 
void func0(long param_1,long param_2,int *param_3){undefined4 local_c;for (local_c = 0; local_c < 0x400; local_c = local_c + 1) {if ((*(char *)(param_1 + local_c) == ' ') || (*(char *)(param_1 + local_c) == '\n')) {*param_3 = local_c + 1;local_c = 0x400;}else {*(undefined *)(param_2 + local_c) = *(undefined *)(param_1 + local_c);}}return;}