


# 1 
void func0(char param_1,long param_2,long param_3){int local_c;local_c = 0;while( true ) {if (0x1a < local_c) {local_c = 0;while (*(int *)(param_3 + (long)local_c * 4) != 0) {local_c = local_c + 1;}if ((local_c < 0x1b) && (param_1 != '@')) {*(char *)(local_c + param_2) = param_1;*(int *)(param_3 + (long)local_c * 4) = *(int *)(param_3 + (long)local_c * 4) + 1;}return;}if (param_1 == *(char *)(param_2 + local_c)) break;local_c = local_c + 1;}*(int *)(param_3 + (long)local_c * 4) = *(int *)(param_3 + (long)local_c * 4) + 1;return;}