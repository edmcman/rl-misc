
# 1 
void func0(long param_1,long param_2){undefined4 local_14;undefined4 local_10;undefined4 local_c;for (local_14 = 0; *(char *)(param_2 + local_14) != '\0'; local_14 = local_14 + 1) {local_c = 0;for (local_10 = 0; *(char *)(param_1 + local_10) != '\0'; local_10 = local_10 + 1) {if (*(char *)(param_1 + local_10) != *(char *)(param_2 + local_14)) {*(undefined *)(local_c + param_1) = *(undefined *)(local_10 + param_1);local_c = local_c + 1;}}*(undefined *)(param_1 + local_c) = 0;}return;}