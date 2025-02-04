#include <stdio.h>

# 1 
void func0(long param_1){undefined4 local_c;for (local_c = 0; *(char *)(param_1 + local_c) != '\0'; local_c = local_c + 1) {if ((*(char *)(param_1 + local_c) < 'a') || ('z' < *(char *)(param_1 + local_c))) {if (('@' < *(char *)(param_1 + local_c)) && (*(char *)(param_1 + local_c) < '[')) {*(char *)(param_1 + local_c) = -0x65 - *(char *)(param_1 + local_c);}}else {*(char *)(param_1 + local_c) = -0x25 - *(char *)(param_1 + local_c);}}return;}