
# 1 
undefined8 func0(long param_1,int *param_2){undefined8 uVar1;undefined4 local_10;undefined4 local_c;local_10 = 0;local_c = 0;while (*(char *)(param_1 + *param_2) != '\0') {if (*(char *)(param_1 + *param_2) == '(') {local_10 = local_10 + 1;}if (*(char *)(param_1 + *param_2) == ')') {local_c = local_c + 1;}*param_2 = *param_2 + 1;}if (local_c < local_10) {uVar1 = 1;}else if (local_10 < local_c) {uVar1 = 2;}else {uVar1 = 0;}return uVar1;}