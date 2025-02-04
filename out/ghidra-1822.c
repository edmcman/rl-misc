#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <math.h>

#include <unistd.h>

# 1 
int func0(long param_1,long param_2,int param_3,int param_4){undefined4 local_10;undefined4 local_c;local_10 = 0;for (local_c = 0; local_c < param_3; local_c = local_c + 1) {if (param_4 != *(char *)(param_2 + local_c)) {*(undefined *)(local_10 + param_1) = *(undefined *)(local_c + param_1);local_10 = local_10 + 1;}}*(undefined *)(param_1 + local_10) = 0;return local_10;}