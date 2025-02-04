#include <string.h>

#include <strings.h>

#include <ctype.h>

#include <sys/types.h>

#include <stdarg.h>

#include <stdlib.h>

#include <stdio.h>

# 1 
double func0(double param_1,double *param_2){long in_FS_OFFSET;double dVar1;int local_3c;double local_38;long local_30;double local_28;double local_20;double local_18;long local_10;local_10 = *(long *)(in_FS_OFFSET + 0x28);local_20 = DAT_00100170;local_3c = 0;for (local_28 = param_1;(local_3c < 100 &&((local_30 = (long)local_28, DAT_00100170 + local_28 < (double)local_30 ||((double)local_30 < local_28 - DAT_00100170)))); local_28 = DAT_00100178 * local_28) {local_20 = DAT_00100180 * local_20;local_3c = local_3c + 1;}if (local_3c == 100) {*param_2 = 0.0;dVar1 = 0.0;}else if (local_3c == 0) {*param_2 = (double)local_30;dVar1 = local_28 - *param_2;}else {dVar1 = (double)func0(param_1 - (double)local_30 * local_20,&local_38);*param_2 = local_38 + (double)local_30 * local_20;local_18 = dVar1;}if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {return dVar1;}/* WARNING: Subroutine does not return */__stack_chk_fail();}