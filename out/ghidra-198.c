#include <poll.h>

# 1 
void func0(undefined *param_1,long param_2){int local_c;*param_1 = 0x38;for (local_c = 0; (*(char *)(param_2 + local_c) != '\0' && (local_c < 8)); local_c = local_c + 1){param_1[(long)local_c + 1] = *(undefined *)(param_2 + local_c);}for (; local_c < 9; local_c = local_c + 1) {param_1[(long)local_c + 1] = 0;}return;}