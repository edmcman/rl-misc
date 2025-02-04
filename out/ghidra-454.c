#include <errno.h>

#include <string.h>

#include <unistd.h>

#include <time.h>

# 1 
void func0(long param_1,int param_2,char param_3){undefined4 local_10;undefined4 local_c;local_c = 0;if ((param_1 != 0) && (param_2 != 0)) {for (local_10 = 0; (local_10 < param_2 && (*(char *)(param_1 + local_10) != '\0'));local_10 = local_10 + 1) {if (param_3 != *(char *)(param_1 + local_10)) {*(undefined *)(local_c + param_1) = *(undefined *)(local_10 + param_1);local_c = local_c + 1;}}*(undefined *)(param_1 + local_c) = 0;}return;}