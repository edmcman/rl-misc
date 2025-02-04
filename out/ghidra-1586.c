#include <stdio.h>

#include <stdlib.h>

#include <string.h>

# 1 
void func0(long param_1,int *param_2,long param_3,char param_4){char local_d;int local_c;local_c = 0;local_d = *(char *)(param_1 + *param_2);if (local_d != '\0') {while ((local_d != param_4 && (local_d != '\0'))) {*(char *)(local_c + param_3) = local_d;*param_2 = *param_2 + 1;local_c = local_c + 1;local_d = *(char *)(param_1 + *param_2);}if (local_d == param_4) {*param_2 = *param_2 + 1;}}*(undefined *)(param_3 + local_c) = 0;return;}